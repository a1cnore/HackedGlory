// functions/00acd — 26 functions
#include "libGameKindred.h"




void FUN_00acd088(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0x118);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00acd1c8(param_1);
  return;
}




void FUN_00acd0c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027d6f80;
  pcStack_40 = thunk_FUN_00acd15c;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  FUN_00acd15c(param_1);
  FUN_00f01868(param_1 + 0x3e);
  FUN_00f13d08(param_1 + 0x23);
  FUN_00f01868(param_1 + 0x12);
  FUN_00ed3680(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acd15c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00ed373c();
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void FUN_00acd198(void *param_1)

{
  FUN_00acd0c0();
  operator_delete(param_1);
  return;
}




void FUN_00acd1bc(long param_1,undefined8 param_2)

{
  FUN_00f023ec(param_1 + 0x1f0,param_2,1);
  return;
}




void FUN_00acd1c8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00acd2c4();
  uVar2 = FUN_00efed6c(0x3e4ccccd);
  FUN_00f022a0(param_1,uVar2);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00acd3b8;
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00acd2c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980(param_1 + 0x90);
  uVar2 = FUN_00efee28(0,0x3e4ccccd,FUN_009a71a4);
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
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x90,uVar2,puVar4,0);
  return;
}




void FUN_00acd3b8(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00acd15c;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00acd41c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x90;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(lVar1,uVar3);
  return;
}




void FUN_00acd41c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x90;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(lVar1,uVar3);
  return;
}




void thunk_FUN_00acd2c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980(param_1 + 0x90);
  uVar2 = FUN_00efee28(0,0x3e4ccccd,FUN_009a71a4);
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
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x90,uVar2,puVar4,0);
  return;
}




void thunk_FUN_00acd41c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x90;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(lVar1,uVar3);
  return;
}




void thunk_FUN_00acd2c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980(param_1 + 0x90);
  uVar2 = FUN_00efee28(0,0x3e4ccccd,FUN_009a71a4);
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
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x90,uVar2,puVar4,0);
  return;
}




void thunk_FUN_00acd15c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00ed373c();
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void FUN_00acd498(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0x118);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00acd1c8(param_1);
  return;
}




void thunk_FUN_00acd15c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00ed373c();
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void FUN_00acd4d4(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_027d70a0;
  FUN_00af8b20(param_1 + 0x11);
  plVar1 = param_1 + 0x87;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0xad;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0xcb;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xf1;
  FUN_00f0d160(plVar4);
  param_1[0x117] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(byte *)((long)param_1 + 0x8c1) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  if (*(char *)((long)param_1 + 0x8c1) == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  local_60 = CONCAT44(local_60._4_4_,0xffe3e9f0);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&local_60);
  FUN_00f0da30(plVar1,1);
  local_60 = NEON_fmov(0x40800000,4);
  FUN_00f0da8c(plVar1,&local_60);
  local_60 = CONCAT44(local_60._4_4_,0xff464d4f);
  FUN_00f0da80(plVar1,&local_60);
  uVar8 = *(uint *)((long)param_1 + 0x4bc);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4bc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  uVar6 = *(uint *)((long)param_1 + 0x5ec);
  uVar8 = 0xcc;
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    uVar8 = 0xff;
  }
  if ((uVar6 >> 7 & 0xff) != uVar8) {
    *(uint *)((long)param_1 + 0x5ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | uVar8 << 7;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0xb7) != 0.5) || (*(float *)((long)param_1 + 0x5bc) != 0.5)) {
    param_1[0xb7] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  FUN_00f0d92c(plVar3,*ppuVar5,&DAT_01bee7fa);
  FUN_00f0da30(plVar3,*(char *)((long)param_1 + 0x8c1) == '\0');
  local_60 = 0x4000000040000000;
  FUN_00f0da8c(plVar3,&local_60);
  local_60 = CONCAT44(local_60._4_4_,0xff323232);
  FUN_00f0da80(plVar3,&local_60);
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
    uVar8 = *(uint *)((long)param_1 + 0x80c);
    if ((uVar8 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x80c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
      FUN_0091ada4(plVar4);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acd7d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,"*KindredMenuGuildBannerMesh*");
  FUN_00af9124(param_1 + 0x88,uVar1);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 4;
  FUN_00af9aa0(param_1 + 0x88,"GUILD_BANNERS");
  return;
}




void FUN_00acd82c(long param_1)

{
  FUN_00af8c84(param_1 + 0x88);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_00acd85c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10c) =
       *(uint *)(param_1 + 0x10c) & 0xfffffff8 | *(uint *)(param_1 + 0x10c) & 3 | (param_2 & 1) << 2
  ;
  if (((param_2 & 1) != 0) && (*(char *)(param_1 + 0x8c0) == '\0')) {
    FUN_00acd880();
    return;
  }
  return;
}




void FUN_00acd880(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 local_60;
  undefined4 *local_58;
  int local_50;
  int local_4c;
  ulong local_48;
  undefined4 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x8c0) = 1;
  FUN_00af97f4(param_1 + 0x88,0);
  if (*(int *)(param_1 + 0x8b8) < 1) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  }
  else {
    local_4c = *(int *)(param_1 + 0x8b8) * 2 + -2;
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 4;
    local_48 = 0;
    local_40 = (undefined4 *)0x0;
    FUN_0091f584(&local_48,&local_4c);
    local_50 = local_4c + 1;
    FUN_0091f584(&local_48,&local_50);
    local_60 = 0;
    local_58 = (undefined4 *)0x0;
    FUN_0091f484(&local_60,local_48 & 0xffffffff);
    if ((int)local_48 == 0) {
      iVar2 = 0;
    }
    else {
      lVar5 = (local_48 & 0xffffffff) << 2;
      puVar3 = local_40;
      puVar4 = local_58;
      do {
        lVar5 = lVar5 + -4;
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        iVar2 = (int)local_48;
      } while (lVar5 != 0);
    }
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    FUN_00afa458(param_1 + 0x88,&local_60,0);
    if (local_58 != (undefined4 *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (undefined4 *)0x0;
    }
    if (local_40 != (undefined4 *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (undefined4 *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00acd9b0(long param_1)

{
  if (*(char *)(param_1 + 0x8c1) != '\0') {
    FUN_00f0d75c(param_1 + 0x788);
    FUN_00acd9ec(param_1);
    return;
  }
  return;
}




void FUN_00acd9ec(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&uStack_84,&local_88);
  lVar1 = param_1 + 0x88;
  FUN_00f13f08(uStack_84,local_88,lVar1);
  if ((*(float *)(param_1 + 0xd8) != 0.5) || (*(float *)(param_1 + 0xdc) != 0.5)) {
    *(undefined8 *)(param_1 + 0xd8) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  uVar5 = 0x43820000;
  if (*(char *)(param_1 + 0x8c1) == '\0') {
    fVar8 = *(float *)(param_1 + 0x698);
    fVar6 = *(float *)(&DAT_01baf340 + (ulong)(*(int *)(param_1 + 0x8b8) == 2) * 4);
    plVar3 = (long *)(param_1 + 0x658);
    if ((fVar8 != 0.0) || (fVar8 = *(float *)(param_1 + 0x69c), fVar8 != fVar6)) {
      *(undefined4 *)(param_1 + 0x698) = 0;
      *(float *)(param_1 + 0x69c) = fVar6;
      FUN_0091ada4(plVar3);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_80);
    local_90 = 0x43960000;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x698);
    fVar6 = *(float *)(&DAT_01baf338 + (ulong)(*(int *)(param_1 + 0x8b8) < 4) * 4);
    lVar2 = param_1 + 0x658;
    if ((fVar7 != 0.0) || (fVar7 = *(float *)(param_1 + 0x69c), fVar7 != fVar6)) {
      *(undefined4 *)(param_1 + 0x698) = 0;
      *(float *)(param_1 + 0x69c) = fVar6;
      FUN_0091ada4(lVar2);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x658) + 0x28))(lVar2,&local_80);
    fVar6 = *(float *)(param_1 + 0x698);
    fVar8 = *(float *)(param_1 + 0x69c);
    plVar3 = (long *)(param_1 + 0x788);
    FUN_00f01c20(lVar2);
    fVar9 = fVar7 * 0.5;
    FUN_00f01c20(plVar3);
    local_80 = 0x3f0000003f000000;
    fVar6 = fVar6 + 0.0;
    fVar8 = fVar8 + fVar9 + fVar7 * 0.5 + 6.0;
    if ((*(float *)(param_1 + 0x7c8) != fVar6) || (*(float *)(param_1 + 0x7cc) != fVar8)) {
      *(float *)(param_1 + 0x7c8) = fVar6;
      *(float *)(param_1 + 0x7cc) = fVar8;
      FUN_0091ada4(plVar3);
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_80);
    local_90 = FUN_00f13e54(lVar1);
    uVar5 = 0x43c80000;
  }
  local_8c = uVar5;
  FUN_00f13f18(param_1 + 0x568,&local_90);
  fVar7 = *(float *)(param_1 + 0x698);
  fVar6 = *(float *)(param_1 + 0x69c);
  if (*(char *)(param_1 + 0x8c1) == '\0') {
    fVar6 = fVar6 + 0.0;
    if (*(float *)(param_1 + 0x5a8) == fVar7 + 0.0) goto LAB_00acdc30;
  }
  else {
    FUN_00f01c20(param_1 + 0x658);
    fVar6 = fVar6 + fVar8 * 0.5;
    if (*(float *)(param_1 + 0x5a8) == fVar7 + 0.0) {
LAB_00acdc30:
      if (*(float *)(param_1 + 0x5ac) == fVar6) goto LAB_00acdc4c;
    }
  }
  *(float *)(param_1 + 0x5a8) = fVar7 + 0.0;
  *(float *)(param_1 + 0x5ac) = fVar6;
  FUN_0091ada4(param_1 + 0x568);
LAB_00acdc4c:
  if (*(int *)(param_1 + 0x8bc) - 0x5aU < 10) {
    fVar6 = 10.0;
  }
  else {
    fVar6 = -20.0;
    if (*(int *)(param_1 + 0x8bc) % 10 != 1) {
      fVar6 = 0.0;
    }
  }
  fVar8 = *(float *)(&DAT_01baf348 + (ulong)(*(int *)(param_1 + 0x8b8) == 2) * 4);
  lVar1 = param_1 + 0x438;
  if ((*(float *)(param_1 + 0x478) != fVar6) || (*(float *)(param_1 + 0x47c) != fVar8)) {
    *(float *)(param_1 + 0x478) = fVar6;
    *(float *)(param_1 + 0x47c) = fVar8;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x438) + 0x28))(lVar1,&local_80);
  fVar6 = (float)FUN_00f0d4e0(lVar1);
  fVar6 = 210.0 / fVar6;
  if (1.0 < fVar6) {
    fVar6 = 1.0;
  }
  if ((*(float *)(param_1 + 0x480) != fVar6) || (*(float *)(param_1 + 0x484) != fVar6)) {
    *(float *)(param_1 + 0x480) = fVar6;
    *(float *)(param_1 + 0x484) = fVar6;
    FUN_0091ada4(lVar1);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acdd70(long param_1,undefined4 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x8bc) = param_2;
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x8bc));
  FUN_00f0d75c(param_1 + 0x438,&local_48);
  fVar4 = (float)(*(int *)(param_1 + 0x8bc) / 10 + 1);
  if (10.0 < fVar4) {
    fVar4 = 10.0;
  }
  *(int *)(param_1 + 0x8b8) = (int)fVar4;
  switch((int)fVar4) {
  case 1:
    pcVar2 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar2 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar2 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar2 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar2 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar2 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar2 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar2 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar2 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar2 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar3 = &DAT_03210450;
    goto LAB_00acded0;
  }
  puVar3 = (undefined8 *)FUN_00e6ce7c(pcVar2,0);
LAB_00acded0:
  FUN_00f0d75c(param_1 + 0x658,puVar3);
  FUN_00acd9ec(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00acdf14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0xf1);
  FUN_00f0d3a4(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_028266f0;
  param_1[0xc4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  FUN_00f0d3a4(param_1 + 0x87);
  FUN_00af8c0c(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00acdf90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0xf1);
  FUN_00f0d3a4(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_028266f0;
  param_1[0xc4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  FUN_00f0d3a4(param_1 + 0x87);
  FUN_00af8c0c(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}

