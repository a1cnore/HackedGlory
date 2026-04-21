// functions/00b87 — 10 functions
#include "libGameKindred.h"




void FUN_00b87278(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
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
    FUN_00efe4c4(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  lVar1 = param_1 + 0x5f0;
  FUN_00efe4fc(puVar4,lVar1,param_2);
  FUN_00f022a0(lVar1,puVar4);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
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
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = thunk_FUN_00b811c4;
  *(long *)(puVar4 + 0x10) = param_1;
  FUN_00f022a0(lVar1,puVar4);
  return;
}




void FUN_00b87408(uint *param_1,undefined8 *param_2)

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
    FUN_00b89bd8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b87494(long param_1)

{
  if (param_1 != 0) {
    FUN_00b09454(param_1 + 0x5d68,1);
    return;
  }
  return;
}




void FUN_00b874ac(long param_1)

{
  *(undefined8 *)(param_1 + 0x334c) = 1;
  *(undefined4 *)(param_1 + 0x3354) = 1;
  return;
}




void FUN_00b874c8(long param_1)

{
  if (param_1 != 0) {
    FUN_00b88880();
    return;
  }
  return;
}




void FUN_00b874d4(long param_1)

{
  FUN_00b09454(param_1 + 0x5d68,1);
  return;
}




void FUN_00b874e4(long *param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e7dc8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0da30(plVar2,1);
  FUN_00f0da80(plVar2,&DAT_01bee7f6);
  local_68 = 0x4000000040000000;
  FUN_00f0da8c(plVar2,&local_68);
  if ((*(float *)(param_1 + 0x37) != 0.0) || (*(float *)((long)param_1 + 0x1bc) != 0.0)) {
    param_1[0x37] = 0;
    FUN_0091ada4(plVar2);
  }
  local_68 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
  FUN_00e705c8(&local_68,&DAT_01b9f8c3);
  FUN_00f0d75c(plVar2,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  bVar5 = (param_2 & 1) == 0;
  pcVar3 = "glory_icon_small";
  if (bVar5) {
    pcVar3 = "ice_icon_small";
  }
  fVar6 = 1.0;
  if (bVar5) {
    fVar6 = 0.8;
  }
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,pcVar3);
  if ((*(float *)(param_1 + 0x1a) != fVar6) || (*(float *)((long)param_1 + 0xd4) != fVar6)) {
    *(float *)(param_1 + 0x1a) = fVar6;
    *(float *)((long)param_1 + 0xd4) = fVar6;
    FUN_0091ada4(plVar1);
  }
  fVar6 = (float)FUN_00f0d4e0(plVar2);
  fVar7 = (float)FUN_00f0eac0(plVar1);
  fVar6 = fVar6 + fVar7 * 0.5 + 4.0;
  if ((*(float *)(param_1 + 0x19) != fVar6) || (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    *(float *)(param_1 + 0x19) = fVar6;
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
    FUN_0091ada4(plVar1);
  }
  local_68 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  FUN_00e70510(&local_68);
  FUN_00e70e18(&local_68,&DAT_01bb6d3e,param_3);
  FUN_00f0d75c(plVar2,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b87764(undefined8 param_1,float param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  float fVar8;
  undefined4 local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f01980();
  uVar4 = FUN_00efed6c(0x3f000000);
  FUN_00f022a0(param_3,uVar4);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar6);
  uVar1 = *(undefined4 *)(param_3 + 0x40);
  fVar8 = *(float *)(param_3 + 0x44);
  FUN_00f01c20(param_3 + 0x178);
  local_5c = fVar8 - (param_2 + param_2);
  local_60 = uVar1;
  FUN_00efdc50(puVar6,&local_60);
  FUN_00efcb24(puVar6,FUN_009a7624);
  uVar4 = FUN_00a250a8();
  FUN_00efcac4(param_1);
  FUN_00efddc4(0,uVar4);
  FUN_00efcb24(uVar4,FUN_009a7624);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,puVar6,uVar4,0);
  FUN_00f022a0(param_3,puVar7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b87980(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  if ((*(float *)(param_2 + 0x48) != 4.0) || (*(float *)(param_2 + 0x4c) != 4.0)) {
    uVar6 = NEON_fmov(0x40800000,4);
    *(undefined8 *)(param_2 + 0x48) = uVar6;
    FUN_0091ada4(param_2);
  }
  if ((*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_2);
  }
  uVar6 = FUN_00a26784();
  local_80[0] = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(uVar6,local_80);
  FUN_00efcac4(0x3ecccccd,uVar6);
  FUN_00efcb24(uVar6,FUN_009a7624);
  uVar3 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3e851eb8,uVar3);
  FUN_00efcb24(uVar3,FUN_009a7624);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar5,uVar6,uVar3,0);
  FUN_00f022a0(param_2,puVar5);
  lVar2 = DAT_03210d00;
  if (param_3 != 0) {
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar5);
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0x14] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      *(undefined ***)puVar5 = &PTR_FUN_027d0db0;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_008fa54c(local_80,param_3);
    FUN_00a99c48(puVar5,local_80,0,0);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_00f022a0(param_2,puVar5);
  }
  uVar6 = FUN_00efed6c(0x3f000000);
  FUN_00f022a0(param_2,uVar6);
  uVar6 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(param_1 + -0.4,uVar6);
  FUN_00f022a0(param_2,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b87c70(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

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
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  FUN_00f017e8();
  plVar10 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e7cc8;
  FUN_00acd4d4(plVar10,0);
  plVar1 = param_1 + 0x12a;
  FUN_00ac5ab8(plVar1,0);
  plVar2 = param_1 + 0x2ab;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x2c9;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x2ef;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x315;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x33b;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x361;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x387;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x3ad;
  FUN_00ab6c24(plVar9,0);
  param_1[0x666] = 0;
  param_1[0x665] = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  param_1[0x667] = param_2;
  *(undefined4 *)((long)param_1 + 0x3344) = param_4;
  *(undefined4 *)(param_1 + 0x669) = param_3;
  *(undefined8 *)((long)param_1 + 0x334c) = 0;
  *(undefined4 *)((long)param_1 + 0x3354) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_00acd7d8(plVar10);
  FUN_00acdd70(plVar10,1);
  FUN_00acd880(plVar10);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  if ((~*(uint *)((long)param_1 + 0x15dc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x15dc) = *(uint *)((long)param_1 + 0x15dc) | 0x7f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f13f08(0x44f78000,0x44570000,plVar2);
  if ((*(float *)(param_1 + 0x2b5) != 0.5) || (*(float *)((long)param_1 + 0x15ac) != 0.5)) {
    param_1[0x2b5] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00ac5da8(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_SPOILS_SEASON_FAME_EARNED",0);
  FUN_00f0d75c(plVar3,uVar13);
  FUN_00f0db64(0x43ff8000,0,0x3f800000,plVar3);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00e705c8(&local_a8,"0");
  FUN_00f0d75c(plVar4,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_SPOILS_SEASON_GLORY_AWARDED",0);
  FUN_00f0d75c(plVar5,uVar13);
  FUN_00f0db64(0x43ff8000,0,0x3f800000,plVar5);
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00e705c8(&local_a8,"0");
  FUN_00f0d75c(plVar6,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_SPOILS_SEASON_ICE_AWARDED",0);
  FUN_00f0d75c(plVar7,uVar13);
  FUN_00f0db64(0x43ff8000,0,0x3f800000,plVar7);
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00e705c8(&local_a8,"0");
  FUN_00f0d75c(plVar8,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  uVar11 = *(uint *)(param_1[0x667] + 0xdd00);
  if (uVar11 != 0) {
    plVar10 = (long *)(param_1[0x667] + 0xdd08);
    lVar16 = *plVar10;
    uVar14 = 0;
    lVar15 = 8;
    do {
      if (*(int *)(lVar16 + (ulong)uVar14 * 0xc) == *(uint *)(param_1 + 0x669) / 10 + 1) {
        *(uint *)((long)param_1 + 0x1b8c) =
             *(uint *)((long)param_1 + 0x1b8c) & 0xfffffff8 |
             *(uint *)((long)param_1 + 0x1b8c) & 3 | (uint)(0 < *(int *)(lVar16 + lVar15)) << 2;
        *(uint *)((long)param_1 + 0x1cbc) =
             *(uint *)((long)param_1 + 0x1cbc) & 0xfffffff8 |
             *(uint *)((long)param_1 + 0x1cbc) & 3 | (uint)(0 < *(int *)(*plVar10 + lVar15)) << 2;
        break;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0xc;
    } while (uVar14 < uVar11);
  }
  uVar13 = FUN_00e6ce7c("TUTORIAL_FLYOVER_WATCHAGAIN",0);
  FUN_00ab703c(0x42800000,0x42c80000,0x43c80000,plVar9,0,uVar13,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_80 = DAT_03210c64;
  local_a8 = thunk_FUN_00b89100;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(param_1 + 0x3ae,&local_a8);
  lVar15 = NEON_fmov(0x41c00000,4);
  param_1[0x3b8] = lVar15;
  *(uint *)((long)param_1 + 0x1dec) = *(uint *)((long)param_1 + 0x1dec) & 0xfffffffb;
  FUN_00b09454(plVar9,0);
  FUN_00b09144(0x3f800000,plVar9);
  FUN_00b882a8(param_1);
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

