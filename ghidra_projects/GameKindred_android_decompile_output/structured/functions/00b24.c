// functions/00b24 — 27 functions
#include "libGameKindred.h"




void FUN_00b24204(long param_1)

{
  *(undefined1 *)(param_1 + 0x1145) = 0;
  return;
}




void FUN_00b24210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b24c28(param_1,param_4);
  return;
}




void FUN_00b24218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b24c6c(param_1,param_4);
  return;
}




void FUN_00b24220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027de4f0;
  param_1[0x17] = &PTR_FUN_027de6a8;
  FUN_00b24a7c();
  param_1[0x167] = &PTR_FUN_027d5388;
  param_1[0x202] = &PTR_FUN_028266f0;
  param_1[0x219] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x21c);
  FUN_00f13d08(param_1 + 0x202);
  param_1[0x1e4] = &PTR_FUN_028266f0;
  param_1[0x1fb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1fe);
  FUN_00f13d08(param_1 + 0x1e4);
  param_1[0x1c6] = &PTR_FUN_028266f0;
  param_1[0x1dd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e0);
  FUN_00f13d08(param_1 + 0x1c6);
  FUN_00f01868(param_1 + 0x1b5);
  FUN_009c825c(param_1 + 0x167);
  FUN_00f13d08(param_1 + 0x150);
  FUN_00ed7b24(param_1 + 0xba);
  FUN_00f0d3a4(param_1 + 0x94);
  FUN_00f0d3a4(param_1 + 0x6e);
  FUN_00f0d3a4(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x31);
  FUN_00f01868(param_1 + 0x20);
  FUN_00f0a79c(param_1 + 0x1e);
  FUN_00ed774c(param_1);
  return;
}




void FUN_00b2433c(long param_1)

{
  FUN_00b24220(param_1 + -0xb8);
  return;
}




void FUN_00b24344(void *param_1)

{
  FUN_00b24220();
  operator_delete(param_1);
  return;
}




void FUN_00b24368(long param_1)

{
  FUN_00b24220((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00b24390(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  
  uVar9 = FUN_0092ea9c();
  plVar1 = param_1 + 0x48;
  FUN_00f0dac8(plVar1,0);
  plVar2 = param_1 + 0x6e;
  FUN_00f0dac8(plVar2,1);
  plVar3 = param_1 + 0x94;
  FUN_00f0dac8(plVar3,1);
  FUN_00f0dac8(param_1 + 0xf3,0);
  uVar7 = *(uint *)((long)param_1 + 0x2c4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x2c4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x524) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x524) = *(uint *)((long)param_1 + 0x524) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  if ((~*(uint *)((long)param_1 + 0x654) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x654) = *(uint *)((long)param_1 + 0x654) | 0x7f80;
    FUN_0091ada4(param_1 + 0xba);
  }
  FUN_00f0e578(param_1 + 0x202,"circle_button_x");
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x150,1);
  plVar4 = param_1 + 0x20;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x31;
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar5,plVar1,1);
  FUN_00f023ec(plVar5,plVar2,1);
  FUN_00f023ec(plVar5,plVar3,1);
  FUN_00f023ec(plVar5,param_1 + 0xba,1);
  FUN_00f023ec(plVar4,param_1 + 0x167,1);
  *(uint *)((long)param_1 + 0xb04) = *(uint *)((long)param_1 + 0xb04) | 0x10;
  FUN_00f0a814(param_1 + 0x1e,PTR_s_build___MenuPartsCommon_tga_02be3530);
  uVar8 = FUN_01997f5c("dialog_background");
  *(undefined4 *)(param_1 + 0x228) = uVar8;
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  FUN_00f0d378(plVar3,*ppuVar6);
  return;
}




undefined4 FUN_00b245a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1138);
}




float FUN_00b245ac(void)

{
  long lVar1;
  undefined1 auStack_30 [4];
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&local_2c,auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_2c * 0.4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b24608(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,char param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&uStack_6c,&local_70);
  *(undefined4 *)(param_1 + 0x226) = uStack_6c;
  *(undefined4 *)((long)param_1 + 0x1134) = local_70;
  if ((*(float *)(param_1 + 0x158) != 0.0) || (*(float *)((long)param_1 + 0xac4) != 0.0)) {
    param_1[0x158] = 0;
    FUN_0091ada4(param_1 + 0x150);
    uStack_6c = (undefined4)param_1[0x226];
  }
  FUN_00f13f08(uStack_6c,uStack_6c,param_1 + 0x150);
  (**(code **)(*param_1 + 0x138))(param_1,param_2);
  (**(code **)(*param_1 + 0x140))(param_1,param_3);
  (**(code **)(*param_1 + 0x148))(param_1,param_4);
  (**(code **)(*param_1 + 0x150))(param_1,param_5 & 1);
  plVar1 = param_1 + 0xba;
  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) & 0x7f | param_6 << 7;
  FUN_00ed7d50(plVar1,param_7);
  FUN_00ed803c(plVar1,param_8);
  (**(code **)(*param_1 + 400))(param_1);
  FUN_00ed7fc8(plVar1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b24774(long param_1)

{
  FUN_00f0d75c(param_1 + 0x240);
  FUN_0091ada4(param_1);
  return;
}




void FUN_00b2479c(long param_1)

{
  FUN_00f0d75c(param_1 + 0x4a0);
  FUN_0091ada4(param_1);
  return;
}




void FUN_00b247c4(long param_1)

{
  FUN_00f0d75c(param_1 + 0x370);
  FUN_0091ada4(param_1);
  return;
}




void FUN_00b247ec(long param_1,uint param_2)

{
  FUN_00f0de5c(param_1 + 0x798,param_2 & 1);
  FUN_0091ada4(param_1);
  return;
}




void FUN_00b24818(long param_1)

{
  FUN_00ed7d50(param_1 + 0x5d0);
  FUN_0091ada4(param_1);
  return;
}




undefined4 FUN_00b24840(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1130);
}




void FUN_00b2484c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b24854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_00b24858(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(int *)(param_3 + 0x1130) = (int)param_1;
  *(int *)(param_3 + 0x1134) = (int)param_2;
  if ((*(float *)(param_3 + 0xac0) != 0.0) || (*(float *)(param_3 + 0xac4) != 0.0)) {
    *(undefined8 *)(param_3 + 0xac0) = 0;
    FUN_0091ada4(param_3 + 0xa80);
  }
  FUN_00f13f08(param_1,param_2,param_3 + 0xa80);
  FUN_00ed7fc0(0x41c00000,param_3 + 0x5d0);
  return;
}




void FUN_00b248d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00ed7830();
  if ((uVar2 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00b24a28;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00b24a28:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3e4ccccd,puVar5);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  FUN_00ed84c8(param_1 + 0x5d0);
  FUN_00f0048c();
  FUN_00ed7d60(param_1 + 0x5d0);
  return;
}




void FUN_00b24a7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00ed7830();
  lVar1 = DAT_03210d00;
  if ((uVar2 & 1) == 0) {
    return;
  }
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00b24bc8;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00b24bc8:
  FUN_00efddc4(0,puVar5);
  FUN_00efcac4(0x3e4ccccd,puVar5);
  FUN_00f02308(param_1,puVar5,puVar4,0);
  FUN_00ed84c8(param_1 + 0x5d0);
  FUN_00ed7eb0(param_1 + 0x5d0);
  return;
}




void FUN_00b24c1c(long param_1)

{
  *(undefined1 *)(param_1 + 0x1145) = 0;
  return;
}




void FUN_00b24c28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x1145) == '\0') && (lVar1 = FUN_00f04924(param_2), lVar1 != 0)) {
    FUN_00ed7884(param_1,lVar1);
  }
  FUN_00ed77f0(param_1);
  return;
}




void FUN_00b24c6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_2);
  if (lVar1 != 0) {
    FUN_00ed7838(param_1,lVar1);
  }
  *(undefined1 *)(param_1 + 0x1145) = 1;
  FUN_00ed77f0(param_1);
  return;
}




void FUN_00b24cb0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1138) = param_1;
  return;
}




void FUN_00b24cb8(long param_1,byte param_2)

{
  undefined4 uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar2 = DAT_03210d00;
  if ((param_2 & 1) != *(byte *)(param_1 + 0x1144)) {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    uVar1 = 0x3f800000;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
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
      FUN_00efdd74(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efddc4(uVar1,puVar4);
    FUN_00efcac4(0x3eb33333,puVar4);
    FUN_00f02308(param_1,puVar4,0);
    *(byte *)(param_1 + 0x1144) = param_2 & 1;
  }
  return;
}




void FUN_00b24dd0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_78;
  float local_74;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&local_74,&local_78);
  uVar5 = FUN_0092ea9c();
  fVar8 = 0.2;
  fVar6 = local_74 * 0.5 + -30.0;
  fVar9 = DAT_02be3668;
  if ((uVar5 & 1) == 0) {
    fVar8 = 0.25;
    fVar9 = 1.0;
  }
  if ((*(float *)(param_1 + 0x39) != fVar6) ||
     (*(float *)((long)param_1 + 0x1cc) != fVar8 * local_78)) {
    *(float *)(param_1 + 0x39) = fVar6;
    *(float *)((long)param_1 + 0x1cc) = fVar8 * local_78;
    FUN_0091ada4(param_1 + 0x31);
  }
  if ((*(float *)(param_1 + 0x3a) != fVar9) || (*(float *)((long)param_1 + 0x1d4) != fVar9)) {
    *(float *)(param_1 + 0x3a) = fVar9;
    *(float *)((long)param_1 + 0x1d4) = fVar9;
    FUN_0091ada4(param_1 + 0x31);
  }
  if ((*(float *)(param_1 + 0x78) != 1.0) || (*(float *)((long)param_1 + 0x3c4) != 1.0)) {
    lVar7 = NEON_fmov(0x3f800000,4);
    param_1[0x78] = lVar7;
    FUN_0091ada4(param_1 + 0x6e);
  }
  plVar1 = param_1 + 0x48;
  if ((*(float *)(param_1 + 0x50) != 0.0) || (*(float *)((long)param_1 + 0x284) != 0.0)) {
    param_1[0x50] = 0;
    FUN_0091ada4(plVar1);
  }
  lVar7 = NEON_fmov(0x3f800000,4);
  local_70 = lVar7;
  (**(code **)(param_1[0x48] + 0x28))(plVar1,&local_70);
  plVar2 = param_1 + 0xba;
  if ((*(float *)(param_1 + 0xc2) != 60.0) || (*(float *)((long)param_1 + 0x614) != 0.0)) {
    param_1[0xc2] = 0x42700000;
    FUN_0091ada4(plVar2);
  }
  local_70 = 0;
  (**(code **)(param_1[0xba] + 0x28))(plVar2,&local_70);
  (**(code **)(*param_1 + 400))(param_1);
  FUN_00ed7fc8(plVar2);
  plVar3 = param_1 + 0x94;
  if ((*(float *)(param_1 + 0x9c) != 0.0) || (*(float *)((long)param_1 + 0x4e4) != 26.0)) {
    param_1[0x9c] = 0x41d0000000000000;
    FUN_0091ada4(plVar3);
  }
  local_70 = 0x3f800000;
  (**(code **)(param_1[0x94] + 0x28))(plVar3,&local_70);
  FUN_00f0dad0(0x44480000,plVar3,1);
  FUN_00f07940(0x41200000,0,plVar2,3,plVar1,2);
  FUN_00ed89c8(param_1 + 0xd1);
  if ((*(float *)(param_1 + 0x78) != 1.0) || (*(float *)((long)param_1 + 0x3c4) != 1.0)) {
    param_1[0x78] = lVar7;
    FUN_0091ada4(param_1 + 0x6e);
  }
  fVar8 = DAT_02be366c;
  if ((*(float *)(param_1 + 0x16f) != DAT_02be366c) ||
     (*(float *)((long)param_1 + 0xb7c) != DAT_02be366c)) {
    *(float *)(param_1 + 0x16f) = DAT_02be366c;
    *(float *)((long)param_1 + 0xb7c) = fVar8;
    FUN_0091ada4(param_1 + 0x167);
  }
  lVar7 = NEON_fmov(0x41400000,4);
  param_1[0x172] = lVar7;
  if ((*(float *)(param_1 + 0x170) != fVar9) || (*(float *)((long)param_1 + 0xb84) != fVar9)) {
    *(float *)(param_1 + 0x170) = fVar9;
    *(float *)((long)param_1 + 0xb84) = fVar9;
    FUN_0091ada4(param_1 + 0x167);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

