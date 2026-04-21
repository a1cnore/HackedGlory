// functions/00aca — 26 functions
#include "libGameKindred.h"




void thunk_FUN_00aca9a0(long param_1)

{
  if (*(char *)(param_1 + 0x292c) != '\0') {
    FUN_00ac9484(param_1,0);
    return;
  }
  FUN_00ac9f48(param_1,0);
  return;
}




undefined1  [16] FUN_00aca658(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = FUN_00f01c20(param_1 + 0x538);
  uVar2 = auVar1._8_8_;
  FUN_00f01c20(param_1 + 0x538);
  auVar1._8_8_ = uVar2;
  return auVar1;
}




undefined1  [16] FUN_00aca694(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = FUN_00f01c20(param_1 + 0x538);
  uVar2 = auVar1._8_8_;
  FUN_00f01c20(param_1 + 0x538);
  FUN_00f01c54(param_1 + 0x2820,0,0,1,1);
  auVar1._8_8_ = uVar2;
  return auVar1;
}




void FUN_00aca6f8(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x1af8);
  if (*(uint *)(param_1 + 0x1af8) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x1b00) + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00b09454(lVar1,param_2 & 1);
        uVar2 = (ulong)*(uint *)(param_1 + 0x1af8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}




void FUN_00aca750(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  FUN_00b132e8(param_3 + 0x88,&DAT_01bee7f6);
  FUN_00b1326c(param_2,param_3 + 0x88,&DAT_01bee7fa);
  return;
}




void FUN_00aca798(long param_1,uint param_2)

{
  FUN_00ab7520(param_1 + 0x538,param_2 & 1);
  return;
}




void FUN_00aca7a4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x8e4) =
       *(uint *)(param_1 + 0x8e4) & 0xfffffff8 | *(uint *)(param_1 + 0x8e4) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00aca7b8(long param_1,undefined8 param_2)

{
  FUN_00ab75e8(param_1 + 0x538);
  FUN_00ac916c(param_1);
  FUN_00aca818(param_1,param_2);
  return;
}




void FUN_00aca7f0(long param_1)

{
  FUN_00ab75e8(param_1 + 0x538);
  FUN_00ac916c(param_1);
  return;
}




void FUN_00aca818(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_008fce60(param_1 + 0x2900,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x1af8);
  if (*(uint *)(param_1 + 0x1af8) != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x1b00) + uVar4 * 8);
      if (lVar2 != 0) {
        FUN_00ab75e8(lVar2,param_2);
        FUN_00ac9ec8(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b00) + uVar4 * 8));
        uVar3 = (ulong)*(uint *)(param_1 + 0x1af8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aca8d0(long param_1,uint param_2)

{
  if ((*(char *)(param_1 + 0x292c) != '\0') && ((param_2 & 1) == 0)) {
    FUN_00ac9484(param_1,0);
  }
  FUN_00b09454(param_1 + 0x538,param_2 & 1);
  return;
}




void FUN_00aca914(long param_1,byte param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *(byte *)(param_1 + 0x292e) = param_2 & 1;
  *(byte *)(param_1 + 0x292f) = param_3 & 1;
  FUN_00ac916c();
  uVar1 = (ulong)*(uint *)(param_1 + 0x1af8);
  if (*(uint *)(param_1 + 0x1af8) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x1b00) + uVar2 * 8) != 0) {
        FUN_00ac9ec8(param_1);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1af8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_00aca97c(long param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + (long)param_2 * 4 + 0x291c) = param_3;
  return;
}




void FUN_00aca988(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (long)param_2 * 8 + 0x2668);
                    /* WARNING: Could not recover jumptable at 0x00aca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x138))(plVar1,param_3);
  return;
}




void FUN_00aca9a0(long param_1)

{
  if (*(char *)(param_1 + 0x292c) != '\0') {
    FUN_00ac9484(param_1,0);
    return;
  }
  FUN_00ac9f48(param_1,0);
  return;
}




void FUN_00aca9bc(long param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x2918) == param_3) {
    FUN_00ac9484(param_1,0);
    return;
  }
  FUN_00ac9358(param_1,param_3,0);
  return;
}




void FUN_00aca9dc(uint *param_1,uint param_2)

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




void FUN_00acaa5c(long *param_1)

{
  FUN_00b08d84();
  *param_1 = (long)&PTR_FUN_027d6cb0;
  FUN_00af6b6c(param_1 + 0x4e);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4e,1);
  FUN_00b0914c(param_1,1);
  return;
}




void FUN_00acaab8(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x270;
  FUN_00af6c14(lVar1);
  *(undefined1 *)(param_1 + 0x350) = 1;
  FUN_00af6d64((float)param_3,(float)param_4,lVar1);
  if ((~*(uint *)(param_1 + 0x2f4) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x7f80;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00acab38(long param_1)

{
  FUN_00af6bfc(param_1 + 0x270);
  return;
}




void FUN_00acab40(long param_1)

{
  FUN_00af6c04(param_1 + 0x270);
  return;
}




void FUN_00acab58(long param_1)

{
  FUN_00af6c0c(param_1 + 0x270);
  return;
}




void FUN_00acab60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6cb0;
  param_1[0x4e] = &PTR_FUN_027da660;
  param_1[0x5f] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x65) & 1) != 0) {
    operator_delete((void *)param_1[0x67]);
  }
  FUN_0199fb94(param_1 + 0x62);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00acabcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6cb0;
  param_1[0x4e] = &PTR_FUN_027da660;
  param_1[0x5f] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x65) & 1) != 0) {
    operator_delete((void *)param_1[0x67]);
  }
  FUN_0199fb94(param_1 + 0x62);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acac40(long *param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d6e38;
  FUN_00f017e8(plVar1);
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x28);
  FUN_00f0e4a8(param_1 + 0x46);
  FUN_00f0e4a8(param_1 + 100);
  FUN_00f0e4a8(param_1 + 0x82);
  FUN_00f0e4a8(param_1 + 0xa0);
  FUN_00f0e4a8(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xdd) = DAT_03218f38;
  param_1[0xdc] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x6ec) = _DAT_03218ef8;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x71c) = 0;
  *(undefined1 *)((long)param_1 + 0x71e) = 1;
  FUN_00b27c04(param_1 + 0xe4,param_2 & 1);
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3fe66666;
  param_1[0x103] = 0;
  *(byte *)((long)param_1 + 0x824) = *(byte *)((long)param_1 + 0x824) & 0xf8 | (param_2 & 1) << 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe4,1);
  FUN_00f023ec(plVar1,param_1 + 0xbe,1);
  FUN_00f023ec(plVar1,param_1 + 0x28,1);
  FUN_00f023ec(plVar1,param_1 + 0x46,1);
  FUN_00f023ec(plVar1,param_1 + 100,1);
  FUN_00f023ec(plVar1,param_1 + 0x82,1);
  FUN_00f023ec(plVar1,param_1 + 0xa0,1);
  FUN_00f13f08(0x43300000,0x43300000,param_1);
  local_70 = 0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acae7c(long param_1,byte param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined **ppuVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = *(byte *)(param_1 + 0x824) & 0xfc | *(byte *)(param_1 + 0x824) & 1 | (param_2 & 1) << 1;
  lVar1 = param_1 + 0x140;
  *(byte *)(param_1 + 0x824) = bVar7;
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN_00f0e628(lVar1);
    bVar7 = *(byte *)(param_1 + 0x824);
  }
  bVar6 = (bVar7 & 2) == 0;
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  pcVar2 = "focus_indicator_ring";
  pcVar3 = "hud_store_item_node_highlighted";
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_00f0e548(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 400) != 0.5) || (*(float *)(param_1 + 0x194) != 0.5)) {
    *(undefined8 *)(param_1 + 400) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x230;
  if (*(long *)(param_1 + 0x300) != 0) {
    FUN_00f0e628(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) == 0;
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_00f0e548(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 0x280) != 0.5) || (*(float *)(param_1 + 0x284) != 0.5)) {
    *(undefined8 *)(param_1 + 0x280) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 800;
  if (*(long *)(param_1 + 0x3f0) != 0) {
    FUN_00f0e628(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) == 0;
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_00f0e548(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 0x370) != 0.5) || (*(float *)(param_1 + 0x374) != 0.5)) {
    *(undefined8 *)(param_1 + 0x370) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x410;
  if (*(long *)(param_1 + 0x4e0) != 0) {
    FUN_00f0e628(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) == 0;
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_00f0e548(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 0x460) != 0.5) || (*(float *)(param_1 + 0x464) != 0.5)) {
    *(undefined8 *)(param_1 + 0x460) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x500;
  if (*(long *)(param_1 + 0x5d0) != 0) {
    FUN_00f0e628(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) == 0;
  ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  if (bVar6) {
    pcVar3 = pcVar2;
  }
  FUN_00f0e548(lVar1,*ppuVar5,pcVar3);
  if ((*(float *)(param_1 + 0x550) != 0.5) || (*(float *)(param_1 + 0x554) != 0.5)) {
    *(undefined8 *)(param_1 + 0x550) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x5f0;
  if (*(long *)(param_1 + 0x6c0) != 0) {
    FUN_00f0e628(lVar1);
  }
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if ((*(byte *)(param_1 + 0x824) & 2) != 0) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  FUN_00f0e548(lVar1,*ppuVar5,"tutorial_arrow");
  if ((*(float *)(param_1 + 0x640) != 0.5) || (*(float *)(param_1 + 0x644) != 0.5)) {
    *(undefined8 *)(param_1 + 0x640) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  *(byte *)(param_1 + 0x824) = *(byte *)(param_1 + 0x824) | 4;
  return;
}

