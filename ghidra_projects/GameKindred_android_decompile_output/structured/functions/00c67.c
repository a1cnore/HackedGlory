// functions/00c67 — 26 functions
#include "libGameKindred.h"




void FUN_00c671d4(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void FUN_00c671e4(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
  return;
}




void FUN_00c671f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x12e8,*(undefined4 *)(lVar2 + 0x5450));
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x1958,*(undefined4 *)(lVar2 + 0x5454));
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x1fc8,*(undefined4 *)(lVar2 + 0x545c));
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x2638,*(undefined4 *)(lVar2 + 0x5458));
    FUN_00c676fc(param_1);
    return;
  }
  return;
}




void FUN_00c67298(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_027ffae8;
  param_1[0x18] = &PTR_FUN_027ffc48;
  uVar1 = *(uint *)(param_1 + 0x39);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[0x3a] + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if (param_1[0x3a] != 0) {
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  param_1[0x4c7] = &PTR_FUN_027fffe0;
  FUN_00f0d3a4(param_1 + 0x56f);
  param_1[0x551] = &PTR_FUN_028266f0;
  param_1[0x568] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x56b);
  FUN_00f13d08(param_1 + 0x551);
  param_1[0x533] = &PTR_FUN_028266f0;
  param_1[0x54a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x54d);
  FUN_00f13d08(param_1 + 0x533);
  param_1[0x515] = &PTR_FUN_028266f0;
  param_1[0x52c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52f);
  FUN_00f13d08(param_1 + 0x515);
  FUN_009c825c(param_1 + 0x4c7);
  param_1[0x3f9] = &PTR_FUN_027fffe0;
  FUN_00f0d3a4(param_1 + 0x4a1);
  param_1[0x483] = &PTR_FUN_028266f0;
  param_1[0x49a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49d);
  FUN_00f13d08(param_1 + 0x483);
  param_1[0x465] = &PTR_FUN_028266f0;
  param_1[0x47c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x47f);
  FUN_00f13d08(param_1 + 0x465);
  param_1[0x447] = &PTR_FUN_028266f0;
  param_1[0x45e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x461);
  FUN_00f13d08(param_1 + 0x447);
  FUN_009c825c(param_1 + 0x3f9);
  param_1[0x32b] = &PTR_FUN_027fffe0;
  FUN_00f0d3a4(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_028266f0;
  param_1[0x3cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b5);
  param_1[0x397] = &PTR_FUN_028266f0;
  param_1[0x3ae] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3b1);
  FUN_00f13d08(param_1 + 0x397);
  param_1[0x379] = &PTR_FUN_028266f0;
  param_1[0x390] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x393);
  FUN_00f13d08(param_1 + 0x379);
  FUN_009c825c(param_1 + 0x32b);
  param_1[0x25d] = &PTR_FUN_027fffe0;
  FUN_00f0d3a4(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  param_1[0x2c9] = &PTR_FUN_028266f0;
  param_1[0x2e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e3);
  FUN_00f13d08(param_1 + 0x2c9);
  param_1[0x2ab] = &PTR_FUN_028266f0;
  param_1[0x2c2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2c5);
  FUN_00f13d08(param_1 + 0x2ab);
  FUN_009c825c(param_1 + 0x25d);
  FUN_00f13d08(param_1 + 0x246);
  param_1[0x228] = &PTR_FUN_028266f0;
  param_1[0x23f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x242);
  FUN_00f13d08(param_1 + 0x228);
  param_1[0x20a] = &PTR_FUN_028266f0;
  param_1[0x221] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x224);
  FUN_00f13d08(param_1 + 0x20a);
  FUN_00ad9b6c(param_1 + 0x55);
  FUN_00b04404(param_1 + 0x3b);
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  param_1[0x1b] = &PTR_FUN_028266f0;
  param_1[0x32] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00948d58(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c67600(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fffe0;
  FUN_00f0d3a4(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_028266f0;
  param_1[0xa1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa4);
  FUN_00f13d08(param_1 + 0x8a);
  param_1[0x6c] = &PTR_FUN_028266f0;
  param_1[0x83] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x86);
  FUN_00f13d08(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00c676a4(long param_1)

{
  FUN_00c67298(param_1 + -0xc0);
  return;
}




void FUN_00c676ac(void *param_1)

{
  FUN_00c67298();
  operator_delete(param_1);
  return;
}




void FUN_00c676d0(long param_1)

{
  FUN_00c67298((void *)(param_1 + -0xc0));
  operator_delete((void *)(param_1 + -0xc0));
  return;
}




void thunk_FUN_00c676fc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar6 = (**(code **)(*param_3 + 0x48))();
  FUN_00f13f08(param_3 + 0x1b);
  plVar2 = param_3 + 0x246;
  FUN_00f13f08(uVar6,0x43160000,plVar2);
  param_2 = param_2 + -150.0;
  FUN_00f13f08(uVar6,param_2,param_3 + 0x228);
  plVar1 = param_3 + 0x55;
  FUN_00f13f08(uVar6,param_2,plVar1);
  uVar6 = FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar6,param_2 * 0.2,param_3 + 0x20a);
  FUN_00f07940(0,0,plVar2,0,param_3,0);
  FUN_00f07940(0,0,param_3 + 0x228,0,plVar2,3);
  FUN_00f07940(0,0,plVar1,0,plVar2,3);
  plVar3 = param_3 + 0x25d;
  fVar5 = (float)FUN_00f13e54(plVar2);
  FUN_00f07940(fVar5 * 0.25,0,plVar3,7,plVar2,7);
  plVar2 = param_3 + 0x32b;
  FUN_00f07b18(0,plVar2,3,plVar3,1);
  FUN_00f07b18(0,plVar2,5,plVar3,5);
  plVar3 = param_3 + 0x3f9;
  FUN_00f07b18(0,plVar3,3,plVar2,1);
  FUN_00f07b18(0,plVar3,5,plVar2,5);
  FUN_00f07b18(0,param_3 + 0x4c7,3,plVar3,1);
  FUN_00f07b18(0,param_3 + 0x4c7,5,plVar3,5);
  FUN_00f07940(0,0,param_3 + 0x20a,6,plVar1,6);
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) != 0) {
    *(uint *)((long)param_3 + 0x12b4) = *(uint *)((long)param_3 + 0x12b4) & 0xfffffffb;
  }
  return;
}




void FUN_00c676fc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar6 = (**(code **)(*param_3 + 0x48))();
  FUN_00f13f08(param_3 + 0x1b);
  plVar2 = param_3 + 0x246;
  FUN_00f13f08(uVar6,0x43160000,plVar2);
  param_2 = param_2 + -150.0;
  FUN_00f13f08(uVar6,param_2,param_3 + 0x228);
  plVar1 = param_3 + 0x55;
  FUN_00f13f08(uVar6,param_2,plVar1);
  uVar6 = FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar6,param_2 * 0.2,param_3 + 0x20a);
  FUN_00f07940(0,0,plVar2,0,param_3,0);
  FUN_00f07940(0,0,param_3 + 0x228,0,plVar2,3);
  FUN_00f07940(0,0,plVar1,0,plVar2,3);
  plVar3 = param_3 + 0x25d;
  fVar5 = (float)FUN_00f13e54(plVar2);
  FUN_00f07940(fVar5 * 0.25,0,plVar3,7,plVar2,7);
  plVar2 = param_3 + 0x32b;
  FUN_00f07b18(0,plVar2,3,plVar3,1);
  FUN_00f07b18(0,plVar2,5,plVar3,5);
  plVar3 = param_3 + 0x3f9;
  FUN_00f07b18(0,plVar3,3,plVar2,1);
  FUN_00f07b18(0,plVar3,5,plVar2,5);
  FUN_00f07b18(0,param_3 + 0x4c7,3,plVar3,1);
  FUN_00f07b18(0,param_3 + 0x4c7,5,plVar3,5);
  FUN_00f07940(0,0,param_3 + 0x20a,6,plVar1,6);
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) != 0) {
    *(uint *)((long)param_3 + 0x12b4) = *(uint *)((long)param_3 + 0x12b4) & 0xfffffffb;
  }
  return;
}




void FUN_00c67934(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ad9de4(param_1 + 0x2a8,param_4,param_2,param_5,param_3);
  local_40 = param_4;
  FUN_00c1c9c8(param_1 + 0x1c8,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c679b0(long param_1,undefined8 param_2)

{
  FUN_00ada188(param_1 + 0x2a8,param_2,0);
  return;
}




void FUN_00c679bc(long param_1,undefined8 param_2)

{
  FUN_00ada058(param_1 + 0x2a8,0,param_2);
  return;
}




void FUN_00c679cc(long param_1,undefined8 param_2)

{
  FUN_00ada058(param_1 + 0x2a8,1,param_2);
  return;
}




void FUN_00c679dc(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c676fc();
    return;
  }
  return;
}




void FUN_00c679e8(void)

{
  return;
}




void FUN_00c679ec(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
  return;
}




void FUN_00c679fc(void)

{
  FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void thunk_FUN_00c671f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x12e8,*(undefined4 *)(lVar2 + 0x5450));
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x1958,*(undefined4 *)(lVar2 + 0x5454));
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x1fc8,*(undefined4 *)(lVar2 + 0x545c));
    lVar2 = FUN_009580b8();
    FUN_00c95600(param_1 + 0x2638,*(undefined4 *)(lVar2 + 0x5458));
    FUN_00c676fc(param_1);
    return;
  }
  return;
}




void FUN_00c67a10(long param_1)

{
  FUN_00c671f4(param_1 + -0xc0);
  return;
}




void FUN_00c67a18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fffe0;
  FUN_00f0d3a4(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_028266f0;
  param_1[0xa1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa4);
  FUN_00f13d08(param_1 + 0x8a);
  param_1[0x6c] = &PTR_FUN_028266f0;
  param_1[0x83] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x86);
  FUN_00f13d08(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c67ac4(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c67ae8(long *param_1)

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
  uint uVar10;
  long lVar11;
  long lVar12;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2b;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = (long)&PTR_FUN_028002a8;
  FUN_00f11234(plVar1);
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x7d;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0xb1;
  FUN_00ed66ec(plVar3);
  plVar4 = param_1 + 0x1f6;
  FUN_00ed1c1c(plVar4);
  plVar5 = param_1 + 0x224;
  FUN_00add154(plVar5);
  FUN_00f0ac5c();
  plVar6 = param_1 + 0x2da;
  FUN_00f11234(plVar6);
  plVar7 = param_1 + 0x30e;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x32c;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x34a;
  FUN_00b09580(plVar9);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed5664(plVar3,param_1 + 0x2b1,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f112f0(plVar1,1);
  FUN_00f0e548(param_1 + 0x5f,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(param_1 + 0x5f,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x18f4);
  if ((uVar10 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x18f4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar7);
  }
  FUN_00b0b848(0x3f800000,plVar9,"white_background","white_background");
  FUN_00b0a8a8(plVar9,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  *(undefined1 *)((long)param_1 + 0x2d64) = 1;
  FUN_00b0b950(plVar9,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00b0a930(0x44960000,0x42700000,plVar9,0,100,0,1);
  FUN_00b0b988(plVar9);
  FUN_00f0e548(plVar8,PTR_s_build___Frames_tga_02be35e0,"frame_skin_icon");
  if ((*(float *)(param_1 + 0x335) != 2.5) || (*(float *)((long)param_1 + 0x19ac) != 2.5)) {
    lVar12 = NEON_fmov(0x40200000,4);
    param_1[0x335] = lVar12;
    FUN_0091ada4(plVar8);
  }
  FUN_00f112f0(plVar2,1);
  FUN_00ed7144(plVar3,0);
  local_98 = (code *)CONCAT71(local_98._1_7_,9);
  FUN_00ed5ab0(plVar3,&local_98);
  local_70 = DAT_03210c50;
  local_98 = FUN_00c67ed4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_98);
  FUN_00ab32dc(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  local_70 = FUN_00f048a4("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  local_98 = FUN_00c67edc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x1f7,&local_98);
  FUN_00ed1fe8(plVar4,plVar5);
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c67ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c68724(param_1,param_4);
  return;
}




void FUN_00c67edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c6825c(param_1,uVar1);
  return;
}




void FUN_00c67f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028002a8;
  if (param_1[0x2a] != 0) {
    param_1[0x2a] = 0;
  }
  FUN_00ab0d88(param_1 + 0x34a);
  param_1[0x32c] = &PTR_FUN_028266f0;
  param_1[0x343] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x346);
  FUN_00f13d08(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_028266f0;
  param_1[0x325] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x328);
  FUN_00f13d08(param_1 + 0x30e);
  FUN_00f13d08(param_1 + 0x2da);
  param_1[0x2b1] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x2c8);
  FUN_00f13d08(param_1 + 0x2b1);
  param_1[0x224] = &PTR_FUN_027d8490;
  FUN_00f0d3a4(param_1 + 0x28b);
  param_1[0x26d] = &PTR_FUN_028266f0;
  param_1[0x284] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x287);
  FUN_00f13d08(param_1 + 0x26d);
  param_1[0x24f] = &PTR_FUN_028266f0;
  param_1[0x266] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x269);
  FUN_00f13d08(param_1 + 0x24f);
  param_1[0x224] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x23b);
  FUN_00f13d08(param_1 + 0x224);
  FUN_00ed1e14(param_1 + 0x1f6);
  thunk_FUN_00ed5534(param_1 + 0xb1);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

