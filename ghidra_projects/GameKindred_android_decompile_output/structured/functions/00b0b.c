// functions/00b0b — 16 functions
#include "libGameKindred.h"




void FUN_00b0b730(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
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
    FUN_00a99abc(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_008fa54c(local_50,"LEADING_EDGE");
  FUN_00a99b4c(puVar4,param_1 + 0x8e0,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00f022a0(param_1 + 0x610,puVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0b848(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f0e578(param_2 + 0x1c8);
  FUN_00f0e578(param_2 + 0x610,param_4);
  *(undefined4 *)(param_2 + 0x1300) = param_1;
  return;
}




void FUN_00b0b88c(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  FUN_00f0e6bc(param_3 + 0x1c8);
  FUN_00f0e6bc(param_2,param_3 + 0x610);
  return;
}




void FUN_00b0b8c4(float param_1,float param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 0x24c);
  if ((uVar1 >> 7 & 0xff) != (int)(param_1 * 255.0)) {
    *(uint *)(param_3 + 0x24c) =
         uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
    FUN_0091ada4(param_3 + 0x1c8);
  }
  uVar1 = *(uint *)(param_3 + 0x694);
  if ((uVar1 >> 7 & 0xff) == (int)(param_2 * 255.0)) {
    return;
  }
  *(uint *)(param_3 + 0x694) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_2 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_3 + 0x610);
  return;
}




void FUN_00b0b950(long param_1)

{
  FUN_00f0d378(param_1 + 0x1028);
  return;
}




void FUN_00b0b95c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b0b974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))
            (param_1,(int)param_1[0x261],*(undefined4 *)((long)param_1 + 0x130c),
             *(undefined4 *)((long)param_1 + 0x1304),0);
  return;
}




void FUN_00b0b978(long param_1)

{
  FUN_00afd0d4(param_1 + 0x8e0);
  return;
}




void FUN_00b0b980(long param_1)

{
  FUN_00afc73c(param_1 + 0x8e0);
  return;
}




void FUN_00b0b988(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f02540(param_1 + 0x8e0);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x8e0,1);
    return;
  }
  return;
}




float FUN_00b0b9c4(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x12f8) * 0.5;
  fVar1 = (param_1 - fVar1) / fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}




void FUN_00b0b9e4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x160))();
    return;
  }
  return;
}




void FUN_00b0b9f8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0ba68(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b0a0b0();
  uVar2 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0badc(void *param_1)

{
  FUN_00ab0d88();
  operator_delete(param_1);
  return;
}




void FUN_00b0bb00(undefined8 *param_1,long param_2)

{
  FUN_00ab9298(param_1,0);
  param_1[0x3df] = 0;
  *param_1 = &PTR_FUN_027dc200;
  param_1[0x3de] = &PTR_FUN_027dc3d8;
  FUN_00f0e4a8(param_1 + 0x3e0);
  FUN_00f017e8(param_1 + 0x3fe);
  param_1[0x3fe] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x40f);
  FUN_00f0d160(param_1 + 0x42d);
  FUN_00f0e4a8(param_1 + 0x453);
  FUN_00f0e4a8(param_1 + 0x471);
  param_1[0x492] = 0;
  param_1[0x491] = 0;
  param_1[0x490] = 0;
  param_1[0x48f] = 0;
  param_1[0x493] = 0;
  FUN_008fcdb8(param_1 + 0x494,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x497,param_2 + 0x60);
  FUN_00e70510(param_1 + 0x49a);
  FUN_00e70510(param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0x49e) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x24f4) = 0;
  *(undefined1 *)((long)param_1 + 0x24f6) = 0;
  FUN_00b0bc0c(param_1);
  return;
}




void FUN_00b0bc0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3e0,1);
  plVar2 = param_1 + 0x3fe;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x40f;
  FUN_00f023ec(plVar2,plVar3,1);
  plVar4 = param_1 + 0x42d;
  FUN_00f023ec(plVar2,plVar4,1);
  plVar2 = param_1 + 0x453;
  FUN_00f023ec(plVar4,plVar2,1);
  plVar5 = param_1 + 0x471;
  FUN_00f023ec(plVar4,plVar5,1);
  uVar9 = FUN_00e6ce7c("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  FUN_00910394(param_1 + 0x49c,uVar9);
  uVar10 = FUN_0092ea9c();
  uVar8 = 0x434c0000;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0x432e0000;
  }
  FUN_00e70570(&local_a8,&DAT_0320ffa8);
  FUN_00ab703c(0,uVar8,uVar8,param_1,0,&local_a8,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar10 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(param_1 + 0xe4,*ppuVar6);
  FUN_00f0da30(param_1 + 0xe4,1);
  FUN_00b09144(0xbf800000,param_1);
  local_a8 = (code *)0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
  FUN_00ab7588(0x3f800000,param_1,&DAT_01bee7f6);
  FUN_00b0914c(param_1,1);
  plVar1 = param_1 + 1;
  local_80 = DAT_03210c88;
  local_a8 = thunk_FUN_00b0db40;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_80 = DAT_03210c8c;
  local_a8 = thunk_FUN_00b0db9c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_80 = DAT_03210c90;
  local_a8 = FUN_00b0db38;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  FUN_00f0e540(param_1 + 0x3e0,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00ab75c0(0x40a00000,param_1);
  FUN_00f0e540(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530);
  if ((*(float *)(param_1 + 0x419) != 0.0) || (*(float *)((long)param_1 + 0x20cc) != 0.5)) {
    param_1[0x419] = 0x3f00000000000000;
    FUN_0091ada4(plVar3);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar10 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(plVar4,*ppuVar6);
  if ((*(float *)(param_1 + 0x437) != 0.0) || (*(float *)((long)param_1 + 0x21bc) != 0.5)) {
    param_1[0x437] = 0x3f00000000000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_telestration_ban");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff2909cc);
  FUN_00f0e670(plVar2,&local_a8,2);
  if ((*(float *)(param_1 + 0x45d) != 0.0) || (*(float *)((long)param_1 + 0x22ec) != 0.5)) {
    param_1[0x45d] = 0x3f00000000000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_telestration_ban");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff2909cc);
  FUN_00f0e670(plVar5,&local_a8,2);
  if ((*(float *)(param_1 + 0x47b) != 0.0) || (*(float *)((long)param_1 + 0x23dc) != 0.5)) {
    param_1[0x47b] = 0x3f00000000000000;
    FUN_0091ada4(plVar5);
  }
  if (*(float *)(param_1 + 0x479) != 4.0) {
    *(undefined4 *)(param_1 + 0x479) = 0x40800000;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x2074) = *(uint *)((long)param_1 + 0x2074) & 0xffffffbb;
  FUN_00ab71fc(param_1,1);
  FUN_00b0c58c(param_1);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

