// functions/00c99 — 8 functions
#include "libGameKindred.h"




void FUN_00c99090(void *param_1)

{
  FUN_00c98f9c();
  operator_delete(param_1);
  return;
}




void FUN_00c990b4(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00c990e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02806f90;
  FUN_00b1ade8(param_1 + 0x17);
  plVar1 = param_1 + 0x94;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0xa5;
  param_1[0x94] = (long)&PTR_FUN_027c1f80;
  FUN_00b12bd8(plVar2,0);
  plVar3 = param_1 + 0x13b;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x14c;
  param_1[0x13b] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x16a;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 400;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x1ae;
  FUN_00f0d160(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar3,plVar7,1);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  local_70 = 0x3f0000003f000000;
  FUN_00b12ff0(plVar2,&local_70);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"opal_icon_small");
  if ((*(float *)(param_1 + 0x155) != 2.5) || (*(float *)((long)param_1 + 0xaac) != 2.5)) {
    lVar11 = NEON_fmov(0x40200000,4);
    param_1[0x155] = lVar11;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar8 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xd04) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00f0dac8(plVar7,3);
  uVar10 = FUN_00e6ce7c("MENU_CARDS_DUPLICATE_BONUS_LABEL",0);
  FUN_00f0d75c(plVar7,uVar10);
  FUN_00c99358(param_1);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c99358(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0xa60;
  fVar4 = (float)FUN_00f0eac0(lVar1);
  fVar8 = param_2 * 0.5;
  if ((*(float *)(param_3 + 0xaa0) != 0.0) || (*(float *)(param_3 + 0xaa4) != fVar8)) {
    *(undefined4 *)(param_3 + 0xaa0) = 0;
    *(float *)(param_3 + 0xaa4) = fVar8;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xa60) + 0x28))(lVar1,&local_70);
  fVar7 = param_2 * 0.25 + *(float *)(param_3 + 0xaa4);
  if ((*(float *)(param_3 + 0xb90) != fVar4 * 0.25) || (*(float *)(param_3 + 0xb94) != fVar7)) {
    *(float *)(param_3 + 0xb90) = fVar4 * 0.25;
    *(float *)(param_3 + 0xb94) = fVar7;
    FUN_0091ada4(param_3 + 0xb50);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0xb50) + 0x28))(param_3 + 0xb50,&local_70);
  fVar5 = *(float *)(param_3 + 0xaa4);
  lVar1 = param_3 + 0xc80;
  FUN_00f0e700(lVar1);
  lVar2 = param_3 + 0xd70;
  fVar7 = fVar8 + fVar5 + fVar7 * 0.5 + 15.0;
  fVar8 = (float)FUN_00f0d4e0(lVar2);
  if (fVar4 <= fVar8) {
    fVar4 = fVar8;
  }
  fVar8 = 2.0;
  FUN_00f13f08((fVar4 + 30.0) * 0.95,lVar1);
  if ((*(float *)(param_3 + 0xcc0) != 0.0) || (*(float *)(param_3 + 0xcc4) != fVar7)) {
    *(undefined4 *)(param_3 + 0xcc0) = 0;
    *(float *)(param_3 + 0xcc4) = fVar7;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xc80) + 0x28))(lVar1,&local_70);
  FUN_00f0e700(lVar1);
  fVar4 = fVar8 * 0.5 + 15.0;
  fVar7 = fVar7 + fVar4;
  if ((*(float *)(param_3 + 0xdb0) != 0.0) || (fVar4 = *(float *)(param_3 + 0xdb4), fVar4 != fVar7))
  {
    *(undefined4 *)(param_3 + 0xdb0) = 0;
    *(float *)(param_3 + 0xdb4) = fVar7;
    FUN_0091ada4(lVar2);
  }
  local_70 = 0;
  (**(code **)(*(long *)(param_3 + 0xd70) + 0x28))(lVar2,&local_70);
  lVar1 = param_3 + 0x9d8;
  FUN_00f01c54(lVar1,1,0,1,1);
  if (*(float *)(param_3 + 0xa1c) != fVar4 * -0.5) {
    *(float *)(param_3 + 0xa1c) = fVar4 * -0.5;
    FUN_0091ada4(lVar1);
  }
  uVar6 = FUN_00f01c54(lVar1,1,0,1,1);
  FUN_00f01c54(lVar1,1,0,1,1);
  FUN_00f13f08(uVar6,fVar4 + 30.0,param_3 + 0x528);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c995f0(long param_1,byte *param_2,undefined4 param_3)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  void *local_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_2;
  uVar7 = *(ulong *)(param_2 + 8);
  uVar8 = (ulong)(bVar3 >> 1);
  uVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0) goto LAB_00c99938;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = (void *)0x0;
  if (uVar1 == 0x15) {
    iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_essence",0x15);
    if (iVar5 != 0) {
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
      goto LAB_00c9967c;
    }
    pcVar6 = "essence_icon_small";
LAB_00c998e4:
    FUN_008fa54c(local_68,pcVar6);
    FUN_008fce60(&local_50,local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
LAB_00c9967c:
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x19) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_glory_large",0x19);
      if (iVar5 != 0) {
        bVar3 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar8 = (ulong)(bVar3 >> 1);
        goto LAB_00c996bc;
      }
LAB_00c998b8:
      pcVar6 = "glory_icon_small";
      goto LAB_00c998e4;
    }
LAB_00c996bc:
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x1a) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_glory_medium",0x1a);
      if (iVar5 == 0) goto LAB_00c998b8;
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
    }
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x19) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_glory_small",0x19);
      if (iVar5 == 0) goto LAB_00c998b8;
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
    }
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x13) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_glory",0x13);
      if (iVar5 == 0) goto LAB_00c998b8;
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
    }
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x12) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_opal",0x12);
      if (iVar5 == 0) {
        pcVar6 = "opal_icon_small";
        goto LAB_00c998e4;
      }
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
    }
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x17) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_ice_small",0x17);
      if (iVar5 != 0) {
        bVar3 = *param_2;
        uVar7 = *(ulong *)(param_2 + 8);
        uVar8 = (ulong)(bVar3 >> 1);
        goto LAB_00c997fc;
      }
LAB_00c998d0:
      pcVar6 = "ice_icon_small";
      goto LAB_00c998e4;
    }
LAB_00c997fc:
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x18) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_ice_medium",0x18);
      if (iVar5 == 0) goto LAB_00c998d0;
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
    }
    uVar1 = uVar8;
    if ((bVar3 & 1) != 0) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x17) {
      iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_ice_large",0x17);
      if (iVar5 == 0) goto LAB_00c998d0;
      bVar3 = *param_2;
      uVar7 = *(ulong *)(param_2 + 8);
      uVar8 = (ulong)(bVar3 >> 1);
    }
    if ((bVar3 & 1) != 0) {
      uVar8 = uVar7;
    }
    if ((uVar8 == 0x10) &&
       (iVar5 = FUN_0090d610(param_2,0,0xffffffffffffffff,"card_currency_xp",0x10), iVar5 == 0)) {
      pcVar6 = "generic_xp_icon";
      goto LAB_00c998e4;
    }
  }
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
  FUN_00f0e578(param_1 + 0xa60,pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00c99938:
  FUN_00e70510(&local_50);
  FUN_00e70e18(&local_50,&DAT_01b97cee,param_3);
  FUN_00f0d75c(param_1 + 0xb50,&local_50);
  FUN_00c99358(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c999a0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  float fVar8;
  
  if ((param_3 & 1) != 0) {
    lVar1 = param_2 + 0x4a0;
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 4;
    FUN_00f01980(lVar1);
    uVar2 = *(uint *)(param_2 + 0x524);
    *(uint *)(param_2 + 0x524) = uVar2 | 4;
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x524) = uVar2 & 0xffff807f | 4;
      FUN_0091ada4(lVar1);
    }
    if (0.0 < (float)param_1) {
      uVar4 = FUN_00efed6c(param_1);
      FUN_00f022a0(lVar1,uVar4);
    }
    if ((*(float *)(param_2 + 0x4e8) != 6.0) || (*(float *)(param_2 + 0x4ec) != 6.0)) {
      uVar4 = NEON_fmov(0x40c00000,4);
      *(undefined8 *)(param_2 + 0x4e8) = uVar4;
      FUN_0091ada4(lVar1);
    }
    uVar4 = FUN_00eff63c(0x3f800000,0x3f800000,0x3ee66666,FUN_009a7624);
    uVar5 = FUN_00efee28(0x3f800000,0x3ee66666,FUN_009a7624);
    lVar3 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcd98(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar7,uVar4,uVar5,0);
    FUN_00f022a0(lVar1,puVar7);
    uVar4 = FUN_00eff63c(0x3f59999a,0x3f59999a,0x3d99999a,FUN_009a7624);
    FUN_00f022a0(lVar1,uVar4);
    uVar4 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e028f5d,FUN_009a7624);
    FUN_00f022a0(lVar1,uVar4);
    lVar1 = param_2 + 0xb8;
    FUN_00f01980(lVar1);
    fVar8 = (float)param_1 + 0.45 + -0.05;
    *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) & 0xfffffffb;
    uVar4 = FUN_00efed6c(fVar8);
    FUN_00f022a0(lVar1,uVar4);
    lVar3 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825100;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00f022a0(lVar1,puVar7);
    FUN_00b1b034(fVar8 + -0.4,lVar1);
    return;
  }
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c99cc4(undefined8 *param_1,undefined4 *param_2,byte param_3,undefined4 param_4)

{
  FUN_00af8b20();
  *param_1 = &PTR_FUN_028070d8;
  FUN_00afbfb0(param_1 + 0x76);
  FUN_00ab9298(param_1 + 0xb2,0);
  FUN_00ab9298(param_1 + 0x490,0);
  FUN_00f017e8(param_1 + 0x86e);
  param_1[0x86e] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x87f);
  FUN_00f017e8(param_1 + 0x8a5);
  param_1[0x8a5] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x8b6);
  FUN_00f0d160(param_1 + 0x8dc);
  FUN_00f0d160(param_1 + 0x902);
  FUN_00f017e8(param_1 + 0x928);
  param_1[0x928] = &PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0x939);
  param_1[0x939] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x94a);
  FUN_00f0d160(param_1 + 0x970);
  FUN_00f0d160(param_1 + 0x996);
  FUN_00f0d160(param_1 + 0x9bc);
  FUN_00f0e4a8(param_1 + 0x9e2);
  FUN_00f0e4a8(param_1 + 0xa00);
  FUN_00f0e4a8(param_1 + 0xa1e);
  FUN_00f0e4a8(param_1 + 0xa3c);
  FUN_00f0e4a8(param_1 + 0xa5a);
  FUN_00f0e4a8(param_1 + 0xa78);
  FUN_00f0e4a8(param_1 + 0xa96);
  FUN_00f0a784(param_1 + 0xab4);
  FUN_00f0a784(param_1 + 0xab6);
  FUN_00f0a784(param_1 + 0xab8);
  FUN_00f0e4a8(param_1 + 0xaba);
  FUN_00c990e4(param_1 + 0xad8);
  FUN_00f0e4a8(param_1 + 0xcac);
  FUN_00f0e4a8(param_1 + 0xcca);
  param_1[0xce8] = param_2;
  param_1[0xcea] = 0;
  param_1[0xce9] = 0;
  *(undefined4 *)(param_1 + 0xceb) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0xcec) = 0;
  *(undefined2 *)((long)param_1 + 0x6764) = 0;
  *(byte *)((long)param_1 + 0x6766) = param_3 & 1;
  if ((param_3 & 1) == 0) {
    param_4 = *param_2;
  }
  *(undefined4 *)(param_1 + 0xcec) = param_4;
  FUN_00f0a814(param_1 + 0xab8,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630);
  FUN_00f0a814(param_1 + 0xab4,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630);
  FUN_00c99f10(param_1);
  FUN_00c9a0d8(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c99f10(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,"*LootCardRep3D*");
  FUN_00af9124(param_1,uVar3);
  local_48 = _DAT_03218ef8;
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uStack_40 = local_48;
  uVar2 = FUN_00e6a474("heroArt_repeat");
  uVar2 = FUN_0091ed5c("heroArt_repeat",uVar2,0x12345678);
  FUN_019971b0(uVar3,uVar2,&uStack_40);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("heroArt_offset");
  uVar2 = FUN_0091ed5c("heroArt_offset",uVar2,0x12345678);
  FUN_019971b0(uVar3,uVar2,&local_48);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("heroArt_file");
  uVar2 = FUN_0091ed5c("heroArt_file",uVar2,0x12345678);
  FUN_019972a0(uVar3,uVar2,*(undefined8 *)(param_1 + 0x55a0));
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("cardArt_file");
  uVar2 = FUN_0091ed5c("cardArt_file",uVar2,0x12345678);
  FUN_019972a0(uVar3,uVar2,*(undefined8 *)(param_1 + 0x55a0));
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("cardArt_repeat");
  uVar2 = FUN_0091ed5c("cardArt_repeat",uVar2,0x12345678);
  FUN_019971b0(uVar3,uVar2,&uStack_40);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = FUN_00e6a474("cardArt_offset");
  uVar2 = FUN_0091ed5c("cardArt_offset",uVar2,0x12345678);
  FUN_019971b0(uVar3,uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

