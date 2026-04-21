// functions/00c69 — 18 functions
#include "libGameKindred.h"




void FUN_00c690d0(long *param_1)

{
  FUN_00f13f08(param_1 + 0x2b);
                    /* WARNING: Could not recover jumptable at 0x00c690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c69100(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar1 = param_3 + 0x158;
  local_70 = FUN_00f13e54(lVar1);
  fStack_6c = (float)param_2;
  FUN_00f13f18(param_3 + 0x2f8,&local_70);
  lVar3 = param_3 + 0x16d0;
  FUN_00f13e54(lVar1);
  fVar9 = 190.0;
  FUN_00f13f08(lVar3);
  local_70 = FUN_00f13e54(lVar3);
  fStack_6c = fVar9;
  FUN_00f13f18(param_3 + 0x1870,&local_70);
  uVar6 = FUN_0093dbe8();
  *(uint *)(param_3 + 0x1754) =
       *(uint *)(param_3 + 0x1754) & 0xfffffff8 |
       *(uint *)(param_3 + 0x1754) & 3 | (~uVar6 & 1) << 2;
  lVar2 = param_3 + 1000;
  local_70 = FUN_00f13e54(lVar1);
  fStack_6c = fVar9;
  FUN_00f13f18(lVar2,&local_70);
  local_70 = FUN_00f13e54(lVar2);
  fStack_6c = fVar9;
  FUN_00f13f18(param_3 + 0x588,&local_70);
  lVar4 = param_3 + 0x1588;
  local_70 = FUN_00f13e54(lVar3);
  fStack_6c = fVar9;
  FUN_00f13f18(lVar4,&local_70);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_00f13e54(lVar1);
  FUN_00c63960(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x148))();
  lVar1 = param_3 + 0x1a50;
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_00f07940(0,fVar9,lVar1,8,lVar3,8);
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_00f07940(0x41f00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_00f07b18(0,uVar7,0,lVar4,2);
  FUN_00f07b18(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_00f13e54(lVar2);
  fVar8 = fVar9;
  FUN_00f13e54(lVar4);
  fVar8 = (fVar9 - fVar8) + -80.0;
  FUN_00f13f08(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_00ed1ff0(lVar1);
  FUN_00f13e54(lVar4);
  FUN_00f07940(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_0091ada4(param_3 + 0x588);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c69380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c69390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x150) + 0x138))(*(long **)(param_1 + 0x150),1);
  return;
}




void FUN_00c69394(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 < 1) {
    iVar1 = FUN_00f04924(param_2);
    if (-1 < iVar1) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00c68f90(param_1,uVar2);
  return;
}




void FUN_00c693f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2a;
  *param_1 = (long)&PTR_FUN_02800548;
  param_1[0x29] = (long)&PTR_FUN_028006a0;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x41;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x67;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x8d;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xb3;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xd1;
  FUN_00f0e4a8(plVar6);
  FUN_00a8878c(param_1 + 0xef);
  *(undefined1 *)(param_1 + 0x10d) = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x28c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x28c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x3bc);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x3bc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e540(plVar6,"build://Chests.atlas");
  local_60 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x70c) = *(uint *)((long)param_1 + 0x70c) | 0x10;
  local_88 = thunk_FUN_00c697fc;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0xd2,&local_88);
  local_88 = thunk_FUN_00c697fc;
  local_60 = DAT_03210f8c;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0xd2,&local_88);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_00f0dac8(plVar4,3);
  uVar7 = *(uint *)((long)param_1 + 0x4ec);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4ec) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_lock");
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c697fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined4 uStack_40;
  undefined2 uStack_3c;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00a86fa0(auStack_f0,param_1 + 0x778);
  FUN_00a87024(auStack_e0,param_1 + 0x788);
  FUN_008fcdb8(auStack_d0,param_1 + 0x798);
  FUN_008fcdb8(auStack_b8,param_1 + 0x7b0);
  FUN_008fcdb8(auStack_a0,param_1 + 0x7c8);
  FUN_008fcdb8(auStack_88,param_1 + 0x7e0);
  FUN_008fcdb8(auStack_70,param_1 + 0x7f8);
  FUN_008fcdb8(auStack_58,param_1 + 0x810);
  uStack_3c = *(undefined2 *)(param_1 + 0x82c);
  uStack_40 = *(undefined4 *)(param_1 + 0x828);
  if ((*(byte *)(param_1 + 0x848) & 1) == 0) {
    lVar2 = param_1 + 0x849;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x858);
  }
  FUN_00cc3f40(auStack_f0,lVar2,*(undefined1 *)(param_1 + 0x868));
  FUN_00a87a10(auStack_f0);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6969c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800548;
  param_1[0x29] = &PTR_FUN_028006a0;
  if ((*(byte *)(param_1 + 0x109) & 1) != 0) {
    operator_delete((void *)param_1[0x10b]);
  }
  if ((*(byte *)(param_1 + 0x106) & 1) != 0) {
    operator_delete((void *)param_1[0x108]);
  }
  FUN_00a87a10(param_1 + 0xef);
  param_1[0xd1] = &PTR_FUN_028266f0;
  param_1[0xe8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xeb);
  FUN_00f13d08(param_1 + 0xd1);
  param_1[0xb3] = &PTR_FUN_028266f0;
  param_1[0xca] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcd);
  FUN_00f13d08(param_1 + 0xb3);
  FUN_00f0d3a4(param_1 + 0x8d);
  FUN_00f0d3a4(param_1 + 0x67);
  FUN_00f0d3a4(param_1 + 0x41);
  FUN_00f13d08(param_1 + 0x2a);
  param_1[0x29] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c697a8(long param_1)

{
  FUN_00c6969c(param_1 + -0x148);
  return;
}




void FUN_00c697b0(void *param_1)

{
  FUN_00c6969c();
  operator_delete(param_1);
  return;
}




void FUN_00c697d4(long param_1)

{
  FUN_00c6969c((void *)(param_1 + -0x148));
  operator_delete((void *)(param_1 + -0x148));
  return;
}




void FUN_00c697fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined4 local_40;
  undefined2 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00a86fa0(auStack_f0,param_1 + 0x778);
  FUN_00a87024(auStack_e0,param_1 + 0x788);
  FUN_008fcdb8(auStack_d0,param_1 + 0x798);
  FUN_008fcdb8(auStack_b8,param_1 + 0x7b0);
  FUN_008fcdb8(auStack_a0,param_1 + 0x7c8);
  FUN_008fcdb8(auStack_88,param_1 + 0x7e0);
  FUN_008fcdb8(auStack_70,param_1 + 0x7f8);
  FUN_008fcdb8(auStack_58,param_1 + 0x810);
  local_3c = *(undefined2 *)(param_1 + 0x82c);
  local_40 = *(undefined4 *)(param_1 + 0x828);
  if ((*(byte *)(param_1 + 0x848) & 1) == 0) {
    lVar2 = param_1 + 0x849;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x858);
  }
  FUN_00cc3f40(auStack_f0,lVar2,*(undefined1 *)(param_1 + 0x868));
  FUN_00a87a10(auStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c698e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f13f18(param_1,param_1 + 0x860);
  lVar1 = param_1 + 0x150;
  FUN_00f13f18(lVar1,param_1 + 0x860);
  lVar2 = param_1 + 0x688;
  local_70 = *(float *)(param_1 + 0x860) * 0.7;
  fStack_6c = local_70;
  FUN_00f13f18(lVar2,&local_70);
  FUN_00f0db64(*(float *)(param_1 + 0x860) + -10.0,0,0x3f800000,param_1 + 0x208);
  lVar3 = param_1 + 0x338;
  FUN_00f0db64(*(float *)(param_1 + 0x860) + -10.0,0,0x3f800000,lVar3);
  fVar5 = (float)FUN_00f0e700(lVar2);
  FUN_00f0dad0(fVar5 * 0.5,param_1 + 0x468,1);
  *(uint *)(param_1 + 0x61c) =
       *(uint *)(param_1 + 0x61c) & 0xfffffffb | ((uint)*(byte *)(param_1 + 0x868) << 2 ^ 4) & 0xfc;
  FUN_00f07940(0,0x41f00000,lVar2,4,lVar1,4);
  fVar5 = (float)FUN_00f0e700(lVar2);
  fVar6 = -0.4;
  FUN_00f0e700(lVar2);
  FUN_00f07940(fVar5 * -0.4,fVar6 * 0.2,param_1 + 0x598,8,lVar2,8);
  FUN_00f07940(0,0xc1200000,lVar3,6,lVar1,6);
  FUN_00f07940(0,0,param_1 + 0x208,6,lVar3,4);
  FUN_00f07940(0,0,param_1 + 0x468,2,lVar2,2);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c69ac0(long *param_1,long param_2,byte param_3,undefined8 param_4)

{
  void *pvVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  void *local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00a88898(param_1 + 0xef);
  FUN_00a88930(param_1 + 0xf1,param_2 + 0x10);
  FUN_008fce60(param_1 + 0xf3,param_2 + 0x20);
  FUN_008fce60(param_1 + 0xf6,param_2 + 0x38);
  FUN_008fce60(param_1 + 0xf9,param_2 + 0x50);
  FUN_008fce60(param_1 + 0xfc,param_2 + 0x68);
  FUN_008fce60(param_1 + 0xff,param_2 + 0x80);
  FUN_008fce60(param_1 + 0x102,param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x105) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined2 *)((long)param_1 + 0x82c) = *(undefined2 *)(param_2 + 0xb4);
  FUN_008fcdb8(local_80,param_1 + 0xf6);
  pvVar1 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar1 = local_70;
  }
  uVar4 = FUN_00e6ce7c(pvVar1,0);
  FUN_00f0d75c(param_1 + 0x41,uVar4);
  pcVar2 = "INVENTORY_CHEST_READY_TO_OPEN";
  if ((param_3 & 1) == 0) {
    pcVar2 = "INVENTORY_CHEST_MISSING_KEY";
  }
  *(byte *)(param_1 + 0x10d) = param_3 & 1;
  uVar4 = FUN_00e6ce7c(pcVar2,0);
  FUN_00f0d75c(param_1 + 0x67,uVar4);
  FUN_008fcdb8(&local_98,param_1 + 0xfc);
  FUN_008fce60(param_1 + 0x106,&local_98);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  FUN_008fce60(param_1 + 0x109,param_4);
  if ((*(byte *)(param_1 + 0x106) & 1) == 0) {
    lVar5 = (long)param_1 + 0x831;
  }
  else {
    lVar5 = param_1[0x108];
  }
  FUN_00f0e578(param_1 + 0xd1,lVar5);
  FUN_00e705c8(&local_98,&DAT_01beeefc);
  FUN_00e70510(&local_a8);
  FUN_00e70e18(&local_a8,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0xb0));
  FUN_00e70c34(&local_98,&local_a8);
  FUN_00f0d75c(param_1 + 0x8d,&local_98);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c69cf0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x10c) = param_1;
  *(undefined4 *)((long)param_3 + 0x864) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c69d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_00c69d04(void)

{
  return;
}




void FUN_00c69d08(void)

{
  return;
}




void FUN_00c69d0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_028006c8;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x6c;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x92;
  FUN_00f0e4a8(plVar5);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x514) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x514) = *(uint *)((long)param_1 + 0x514) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("INVENTORY_CHEST_SECTION_TITLE",0);
  FUN_00f0d75c(plVar3,uVar6);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("INVENTORY_NO_CHEST_INSTRUCTION",0);
  FUN_00f0d75c(plVar4,uVar6);
  FUN_00f0dac8(plVar4,3);
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  FUN_00c69ed4(param_1);
  return;
}




void FUN_00c69ed4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  FUN_00f13f18(param_1 + 0xc0,param_1 + 0x590);
  uVar8 = 0x42f00000;
  lVar1 = param_1 + 0x178;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x590),lVar1);
  local_90 = FUN_00f13e54(lVar1);
  uStack_8c = uVar8;
  FUN_00f13f18(param_1 + 0x490,&local_90);
  uVar7 = FUN_00f13e54(lVar1);
  FUN_00f0db64(uVar7,0,0x3f800000,param_1 + 0x230);
  FUN_00f0dad0(*(float *)(param_1 + 0x590) + -20.0,param_1 + 0x360,1);
  FUN_00f07940(0x41a00000,0x41a00000,param_1 + 0x360,0,lVar1,3);
  if (*(int *)(param_1 + 0x580) != 0) {
    uVar5 = 0;
    lVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x588) + uVar5 * 8);
      fVar6 = (*(float *)(param_1 + 0x590) + -40.0) * 0.2;
      FUN_00f13f08(fVar6,fVar6 * 1.2,lVar3);
      if (uVar5 == 0) {
        FUN_00f07b18(0,lVar3,0,lVar1,2);
        lVar4 = lVar1;
        uVar7 = 0x41200000;
LAB_00c6a06c:
        FUN_00f07b18(uVar7,lVar3,3,lVar4,3);
        lVar4 = lVar3;
      }
      else {
        if ((int)((uVar5 & 0xffffffff) / 5) * 5 == (int)uVar5) {
          FUN_00f07b18(0x41200000,lVar3,0,lVar4,2);
          uVar7 = 0;
          goto LAB_00c6a06c;
        }
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x588) + (ulong)((int)uVar5 - 1) * 8);
        FUN_00f07b18(0x41200000,lVar3,3,uVar7,1);
        FUN_00f07b18(0,lVar3,0,uVar7,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x580));
  }
  FUN_00f07940(0,0,param_1 + 0x230,8,lVar1,8);
  *(uint *)(param_1 + 0x3e4) =
       *(uint *)(param_1 + 0x3e4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3e4) & 3 | (uint)(*(int *)(param_1 + 0x580) == 0) << 2;
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

