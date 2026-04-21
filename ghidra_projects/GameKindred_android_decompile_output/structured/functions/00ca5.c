// functions/00ca5 — 12 functions
#include "libGameKindred.h"




void FUN_00ca5020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028083c0;
  FUN_00f0d3a4(param_1 + 0x81);
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca509c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_02808530;
  FUN_00b1a1c4(plVar1);
  plVar2 = param_1 + 0x122;
  FUN_00b12bd8(plVar2,0);
  FUN_00bd6a08(param_1 + 0x1b8,param_2,1,0);
  plVar3 = param_1 + 0x1c1;
  FUN_00f1306c(plVar3);
  plVar4 = param_1 + 0x1ec;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x20a;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x230;
  FUN_00f0d160(plVar6);
  *(undefined2 *)(param_1 + 0x256) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b9],1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f133a4(plVar3,plVar4,1);
  FUN_00f133a4(plVar3,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar10 = FUN_0092ea9c();
  local_70 = 0x3f0000003f000000;
  FUN_00b12ff0(plVar2,&local_70);
  FUN_00b13324(0x3ecccccd,plVar2);
  FUN_00b13264(plVar2,1);
  (**(code **)(*(long *)param_1[0x1b9] + 0x138))();
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)param_1[0x1b9] + 0x28))((long *)param_1[0x1b9],&local_70);
  *(uint *)(param_1[0x1b9] + 0xec4) = *(uint *)(param_1[0x1b9] + 0xec4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xe8c) = *(uint *)((long)param_1 + 0xe8c) & 0xfffffffb;
  FUN_00f0e540(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530);
  if ((*(float *)(param_1 + 0x1f6) != 0.5) || (*(float *)((long)param_1 + 0xfb4) != 0.5)) {
    param_1[0x1f6] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar10 & 1) == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d378(plVar5,*ppuVar7);
  uVar8 = *(uint *)((long)param_1 + 0x10d4);
  if ((uVar8 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x10d4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x7280;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0da30(plVar5,1);
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar10 & 1) == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d378(plVar6,*ppuVar7);
  uVar8 = *(uint *)((long)param_1 + 0x1204);
  if ((uVar8 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1204) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x7280;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0da30(plVar6,1);
  uVar11 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
  FUN_00f0d75c(plVar6,uVar11);
  *(uint *)((long)param_1 + 0x1204) = *(uint *)((long)param_1 + 0x1204) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x57) != 1.35) || (*(float *)((long)param_1 + 700) != 1.35)) {
    param_1[0x57] = 0x3faccccd3faccccd;
    FUN_0091ada4(plVar1);
  }
  FUN_00b0914c(param_1,1);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca53e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ca53ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00ca53f0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 local_64;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar7 = 0;
  cVar4 = *(char *)((long)param_3 + 0x12b1);
  if (cVar4 == '\0') {
    uVar7 = (uint)*(byte *)(param_3 + 0x256) << 2;
  }
  plVar1 = param_3 + 0x1c1;
  *(uint *)((long)param_3 + 0xe8c) = *(uint *)((long)param_3 + 0xe8c) & 0xfffffffb | uVar7;
  if (cVar4 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)(param_3 + 0x256) << 2;
  }
  uVar2 = *(uint *)((long)param_3 + 0x84);
  uVar6 = 0xff;
  if (cVar4 != '\0') {
    uVar6 = 0x99;
  }
  *(uint *)((long)param_3 + 0x1204) = *(uint *)((long)param_3 + 0x1204) & 0xfffffffb | uVar7;
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)((long)param_3 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar6 << 7;
    FUN_0091ada4(param_3);
  }
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  plVar8 = param_3 + 0x122;
  FUN_00f13f08(plVar8);
  FUN_00f0db64(fVar9 + -40.0,0,0x3f800000,param_3 + 0x230);
  FUN_00f07940(0,0,param_3 + 0x1ec,5,param_3 + 0x20a,7);
  FUN_00f13238(plVar1);
  FUN_00f07940(0,0xc0a00000,plVar1,6,param_3,6);
  FUN_00f07940(0,0,param_3 + 0x230,8,plVar1,8);
  local_64 = 0xff000000;
  iVar3 = *(int *)(param_3[0x1b9] + 0x45f8);
  if (iVar3 == 3) {
    local_64 = 0xff1addfa;
  }
  else if (iVar3 == 2) {
    local_64 = 0xfff22ae8;
  }
  else if (iVar3 == 1) {
    local_64 = 0xffe19400;
  }
  FUN_00b1326c(0x3f800000,plVar8,&local_64);
  fVar10 = 0.0;
  FUN_00f07940(0,plVar8,4,param_3,4);
  plVar8 = (long *)param_3[0x1b9];
  local_60 = CONCAT44(local_60._4_4_,fVar9);
  FUN_00f13e54(plVar1);
  local_60 = CONCAT44(param_2 - (fVar10 + 10.0),(undefined4)local_60);
  FUN_00f13f18(plVar8,&local_60);
  (**(code **)(*plVar8 + 0x90))(plVar8);
  FUN_00f07940(0,0x40a00000,param_3[0x1b9],4,param_3,4);
  plVar1 = param_3 + 0x4e;
  if ((*(float *)(param_3 + 0x56) != 26.0) || (*(float *)((long)param_3 + 0x2b4) != 10.0)) {
    param_3[0x56] = 0x4120000041d00000;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ca56a8(undefined1 param_1 [16],undefined4 param_2,long *param_3,byte *param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  byte *pbVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_3 + 0x256) = 1;
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
  }
  FUN_00f0e578(param_3 + 0x1ec,pbVar2);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_5);
  FUN_00f0d75c(param_3 + 0x20a,&local_48);
  FUN_00f0d7fc(param_3 + 0x20a,param_6);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3,&local_50);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca578c(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x12b1) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00ca57a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00ca57a4(long param_1,uint param_2)

{
  FUN_00bd6eec(param_1 + 0xdc0,param_2 & 1);
  return;
}




void FUN_00ca57b0(long param_1,uint param_2,byte *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_1 + 0x2f4) =
       *(uint *)(param_1 + 0x2f4) & 0xfffffff8 | *(uint *)(param_1 + 0x2f4) & 3 | (param_2 & 1) << 2
  ;
  if ((param_2 & 1) == 0) {
    FUN_00b1a8f0(param_1 + 0x270);
  }
  else {
    uVar1 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      FUN_00b5507c(local_a8,param_3,param_1 + 0xdf0);
      puVar5 = (ulong *)FUN_0090de84(local_a8,".",1);
      local_80 = (void *)puVar5[2];
      uStack_88 = puVar5[1];
      local_90 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar1 = (ulong)(*(byte *)(param_1 + 0xdd8) >> 1);
      lVar4 = param_1 + 0xdd9;
      if ((*(byte *)(param_1 + 0xdd8) & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0xde0);
        lVar4 = *(long *)(param_1 + 0xde8);
      }
      puVar5 = (ulong *)FUN_0090de84(&local_90,lVar4,uVar1);
      local_60 = (void *)puVar5[2];
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_008fcdb8(local_50,&local_70);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      pvVar2 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar2 = local_40;
      }
      FUN_00b1a8e8(param_1 + 0x270,pvVar2);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ca5920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808530;
  FUN_00f0d3a4(param_1 + 0x230);
  FUN_00f0d3a4(param_1 + 0x20a);
  param_1[0x1ec] = &PTR_FUN_028266f0;
  param_1[0x203] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x206);
  FUN_00f13d08(param_1 + 0x1ec);
  param_1[0x1c1] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1d8);
  FUN_00f13d08(param_1 + 0x1c1);
  FUN_00bd6cac(param_1 + 0x1b8);
  param_1[0x122] = &PTR_FUN_027dc928;
  param_1[0x18d] = &PTR_FUN_02826f38;
  param_1[0x1a4] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1a7);
  FUN_00f13d08(param_1 + 0x18d);
  param_1[0x163] = &PTR_FUN_02826f38;
  param_1[0x17a] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x17d);
  FUN_00f13d08(param_1 + 0x163);
  param_1[0x139] = &PTR_FUN_02826f38;
  param_1[0x150] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x153);
  FUN_00f13d08(param_1 + 0x139);
  FUN_00f13d08(param_1 + 0x122);
  param_1[0x4e] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x11a);
  FUN_00f0d3a4(param_1 + 0xf3);
  FUN_00f0d3a4(param_1 + 0xcd);
  FUN_00f0d3a4(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x5f] = &PTR_FUN_02826f38;
  param_1[0x76] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00ca5ad0(void *param_1)

{
  FUN_00ca5920();
  operator_delete(param_1);
  return;
}




void FUN_00ca5af4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027de118;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0d160(plVar3);
  *(undefined4 *)(param_1 + 0x79) = 0x3fc00000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"upgrade_arrow");
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 1.0)) {
    param_1[0x21] = 0x3f8000003f000000;
    FUN_0091ada4(plVar1);
  }
  fVar5 = *(float *)(param_1 + 0x79);
  if ((*(float *)(param_1 + 0x20) != fVar5) || (*(float *)((long)param_1 + 0x104) != fVar5)) {
    *(float *)(param_1 + 0x20) = fVar5;
    *(float *)((long)param_1 + 0x104) = fVar5;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"upgrade_arrow");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 1.0)) {
    param_1[0x3f] = 0x3f8000003f000000;
    FUN_0091ada4(plVar2);
  }
  fVar5 = *(float *)(param_1 + 0x79);
  fVar6 = *(float *)(param_1 + 0x3e);
  if ((fVar6 != fVar5) || (fVar6 = *(float *)((long)param_1 + 500), fVar6 != fVar5)) {
    *(float *)(param_1 + 0x3e) = fVar5;
    *(float *)((long)param_1 + 500) = fVar5;
    FUN_0091ada4(plVar2);
  }
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d7fc(plVar3,&DAT_01bc0428);
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x5d) != 0.5) || (fVar6 = 1.0, *(float *)((long)param_1 + 0x2ec) != 1.0)
     ) {
    param_1[0x5d] = 0x3f8000003f000000;
    FUN_0091ada4(plVar3);
  }
  local_60 = FUN_00f0eac0(plVar1);
  fStack_5c = fVar6;
  FUN_00f13f18(param_1,&local_60);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca5d48(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00f01980(param_1 + 0xb8);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar7 * 0x40);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar8 + 8) = thunk_FUN_00ca63cc;
  *(long *)(puVar8 + 0x10) = param_1;
  uVar4 = FUN_00eff63c(*(float *)(param_1 + 0x3c8),*(float *)(param_1 + 0x3c8) * 1.1875,0x3e2a7efa,0
                      );
  uVar5 = FUN_00eff63c(*(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3c8),0x3e2a7efa,
                       0);
  uVar6 = FUN_00efed6c(0x40000000);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  if (param_2 == 1) {
    FUN_00efd3bc(puVar9);
  }
  FUN_00efd2dc(puVar9,puVar8,uVar4,uVar5,uVar6,0);
  FUN_00f022a0(param_1 + 0xb8,puVar9);
  if ((param_2 == 0) && (param_3 != 0)) {
    FUN_00e70510(&local_88);
    FUN_00e70e18(&local_88,&DAT_01b97cee,param_3);
    lVar1 = param_1 + 0x298;
    FUN_00f0d75c(lVar1,&local_88);
    if ((~*(uint *)(param_1 + 0x31c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    if (*(float *)(param_1 + 0x2dc) != -60.0) {
      *(undefined4 *)(param_1 + 0x2dc) = 0xc2700000;
      FUN_0091ada4(lVar1);
    }
    FUN_00f01980(lVar1);
    uVar4 = FUN_00efed6c(0x3e2a7efa);
    FUN_00f022a0(lVar1,uVar4);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825100;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00f022a0(lVar1,puVar8);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efd6a4(puVar8);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    local_90 = 0xc270000000000000;
    FUN_00efd6ec(puVar8,&local_90);
    FUN_00efcac4(0x3f2a7efa,puVar8);
    uVar4 = FUN_00efee28(0,0x3f2a7efa,0);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcd98(puVar9);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar9,puVar8,uVar4,0);
    FUN_00f022a0(lVar1,puVar9);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00f022a0(lVar1,puVar8);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar7 * 0x40);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    *(code **)(puVar8 + 8) = thunk_FUN_00ca66c8;
    *(long *)(puVar8 + 0x10) = param_1;
    FUN_00f022a0(lVar1,puVar8);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

