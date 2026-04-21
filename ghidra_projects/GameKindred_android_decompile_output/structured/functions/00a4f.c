// functions/00a4f — 11 functions
#include "libGameKindred.h"




void FUN_00a4f75c(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1400);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1408) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x1408) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x1400);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x1408) != 0) {
    *(undefined4 *)(param_1 + 0x1400) = 0;
  }
  return;
}




void FUN_00a4f7c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027cb150;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0d160(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  FUN_00f0d75c(plVar1,&DAT_03210450);
  if ((*(float *)(param_1 + 0x19) != -20.0) || (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    param_1[0x19] = 0xc1a00000;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f800000;
  (**(code **)(param_1[0x11] + 0x28))(plVar1,&local_40);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0d75c(plVar2,&DAT_03210450);
  if ((*(float *)(param_1 + 0x3f) != 20.0) || (*(float *)((long)param_1 + 0x1fc) != 0.0)) {
    param_1[0x3f] = 0x41a00000;
    FUN_0091ada4(plVar2);
  }
  local_40 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4f960(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a4ff28(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a4f9e8(long *param_1)

{
  FUN_00a4f75c();
  FUN_00b09454(param_1 + 0x2ce,1);
  *(uint *)((long)param_1 + 0x16f4) = *(uint *)((long)param_1 + 0x16f4) | 4;
                    /* WARNING: Could not recover jumptable at 0x00a4fa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00a4fa30(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c34) = 1;
  *(undefined4 *)(param_1 + 0x2c30) = 0x3ecccccd;
  return;
}




void FUN_00a4fa4c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float local_68;
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_64,&local_68);
  FUN_00f13f08(local_64,local_68,param_1 + 200);
  lVar1 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_64 * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_64 * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar1,&local_60);
  FUN_00f13f08(0x44f00000,local_68,lVar1);
  lVar1 = param_1 + 800;
  fVar7 = local_68 * 1.5;
  FUN_00f13f08(0x44900000,fVar7,lVar1);
  if ((*(float *)(param_1 + 0x360) != 0.0) || (*(float *)(param_1 + 0x364) != 0.0)) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 800) + 0x28))(lVar1,&local_60);
  lVar1 = param_1 + 0x500;
  if ((*(float *)(param_1 + 0x540) != -576.0) || (*(float *)(param_1 + 0x544) != 0.0)) {
    *(undefined8 *)(param_1 + 0x540) = 0xc4100000;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x500) + 0x28))(lVar1,&local_60);
  fVar5 = (float)FUN_00f0e700(lVar1);
  FUN_00f13f08(fVar5 * 0.5,fVar7 * 1.15,lVar1);
  lVar1 = param_1 + 0x410;
  if ((*(float *)(param_1 + 0x450) != 576.0) || (*(float *)(param_1 + 0x454) != 0.0)) {
    *(undefined8 *)(param_1 + 0x450) = 0x44100000;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0;
  (**(code **)(*(long *)(param_1 + 0x410) + 0x28))(lVar1,&local_60);
  uVar6 = FUN_00f0e700(lVar1);
  FUN_00f13f08(uVar6,fVar7,lVar1);
  lVar1 = param_1 + 0x6e0;
  if ((*(float *)(param_1 + 0x720) != 0.0) || (*(float *)(param_1 + 0x724) != 205.0)) {
    *(undefined8 *)(param_1 + 0x720) = 0x434d000000000000;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x6e0) + 0x28))(lVar1,&local_60);
  plVar3 = (long *)(param_1 + 0x968);
  fVar7 = (float)(**(code **)(*(long *)(param_1 + 0x968) + 0x48))(plVar3);
  lVar4 = 0;
  do {
    fVar5 = (float)(**(code **)(*plVar3 + 0x48))(plVar3);
    local_60 = 0x3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
    fVar5 = fVar7 * -3.0 * 0.5 + fVar5 * (float)(int)lVar4;
    if ((*(float *)(plVar3 + 8) != fVar5) || (*(float *)((long)plVar3 + 0x44) != 0.0)) {
      *(float *)(plVar3 + 8) = fVar5;
      *(undefined4 *)((long)plVar3 + 0x44) = 0;
      FUN_0091ada4(plVar3);
    }
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 0x71;
  } while (lVar4 != 3);
  lVar4 = param_1 + 0x810;
  FUN_00f13238(lVar4);
  FUN_00f07b18(0,lVar4,0,lVar1,2);
  FUN_00f07b18(0,lVar4,4,lVar1,4);
  plVar3 = (long *)(param_1 + 0x1670);
  if ((*(float *)(param_1 + 0x16b0) != 0.0) || (*(float *)(param_1 + 0x16b4) != local_68 + -210.0))
  {
    *(undefined4 *)(param_1 + 0x16b0) = 0;
    *(float *)(param_1 + 0x16b4) = local_68 + -210.0;
    FUN_0091ada4(plVar3);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4fdf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb008;
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a4fe98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb150;
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a4fedc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb150;
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a4ff28(uint *param_1,uint param_2)

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




void FUN_00a4ffa8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027cb250;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x8f;
  FUN_00f0e4a8(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448,"icon_item_empty");
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_item_node_regular");
  if ((*(float *)(param_1 + 0x5d) != 0.5) || (*(float *)((long)param_1 + 0x2ec) != 0.5)) {
    param_1[0x5d] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 0.5)) {
    param_1[0x3f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_rings");
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_rings");
  if ((*(float *)(param_1 + 0x7b) != 0.5) || (*(float *)((long)param_1 + 0x3dc) != 0.5)) {
    param_1[0x7b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x99) != 0.5) || (*(float *)((long)param_1 + 0x4cc) != 0.5)) {
    param_1[0x99] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  if ((*(uint *)((long)param_1 + 0x40c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x40c) = *(uint *)((long)param_1 + 0x40c) & 0xffff807f;
    FUN_0091ada4(plVar4);
  }
  if ((*(uint *)((long)param_1 + 0x4fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x4fc) = *(uint *)((long)param_1 + 0x4fc) & 0xffff807f;
    FUN_0091ada4(plVar5);
  }
  uVar6 = FUN_00e6a474("HUD_Quick_Buy");
  uVar7 = FUN_0091ed5c("HUD_Quick_Buy",uVar6,0x1234);
  *(uint *)((long)param_1 + 0x13c) =
       *(uint *)((long)param_1 + 0x13c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x13c) & 0x7fff | (uVar7 & 0xffff) << 0xf;
  return;
}

