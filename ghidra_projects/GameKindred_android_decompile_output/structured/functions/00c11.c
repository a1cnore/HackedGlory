// functions/00c11 — 28 functions
#include "libGameKindred.h"




float FUN_00c11228(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x76a0);
  fVar1 = (float)FUN_00f13e54(param_1 + 0x7660);
  fVar2 = 1.0;
  if (*(char *)(param_1 + 0x9230) != '\x01') {
    fVar2 = -1.0;
  }
  FUN_00f13e54(param_1 + 0x7660);
  return fVar3 + fVar1 * 0.5 * fVar2;
}




void FUN_00c112b0(long param_1,int param_2,undefined1 param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(int *)(param_1 + 0x9234) = param_2;
  bVar2 = (param_4 & 1) == 0;
  *(undefined1 *)(param_1 + 0x9230) = param_3;
  local_40 = 0xff728ebe;
  if (bVar2) {
    local_40 = 0xffbbae56;
  }
  uStack_3c = 0xff90b3ef;
  if (bVar2) {
    uStack_3c = 0xffbc9c44;
  }
  local_44 = 0xff19459d;
  if (bVar2) {
    local_44 = 0xff8b7b01;
  }
  *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) & 0xfe | param_2 == 0;
  *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) & 0xfe | param_2 == 0;
  FUN_00f0d7fc(param_1 + 0xc88,&uStack_3c);
  FUN_00f0d7fc(param_1 + 0xb58,&uStack_3c);
  *(uint *)(param_1 + 0x48c) = *(uint *)(param_1 + 0x48c) | 4;
  FUN_00f0e670(param_1 + 0x408,&local_40,2);
  FUN_00c88730(param_1 + 0x1848,&local_40,&local_40);
  FUN_00f0d7fc(param_1 + 0xdb8,&local_40);
  FUN_00c88730(param_1 + 0x1398,&local_40,&local_40);
  FUN_00f0e670(param_1 + 0x5f20,&local_40,2);
  FUN_00f0e670(param_1 + 0xd0,&local_44,2);
  FUN_00f0e670(param_1 + 0x1c0,&local_44,2);
  FUN_00f0e628(param_1 + 0x6010);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1142c(float param_1,long param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  plVar1 = (long *)(param_2 + (long)(int)param_3 * 0x148 + 0x1f08);
  uVar13 = FUN_00f02540(plVar1);
  if ((uVar13 & 1) == 0) {
    lVar16 = (long)(int)param_3;
    FUN_00f133a4(param_2 + 0x1db0,plVar1,1);
    lVar17 = param_2 + lVar16 * 0xf0;
    lVar2 = lVar17 + 0x2bd8;
    (**(code **)(*plVar1 + 0x78))(plVar1,lVar2,1);
    plVar3 = (long *)(lVar17 + 0x3538);
    (**(code **)(*plVar1 + 0x78))(plVar1,plVar3,1);
    lVar4 = param_2 + lVar16 * 0x100;
    lVar5 = lVar4 + 0x3e98;
    (**(code **)(*plVar1 + 0x78))(plVar1,lVar5,1);
    lVar15 = param_2 + lVar16 * 0x130;
    plVar6 = (long *)(lVar15 + 0x4898);
    (**(code **)(*plVar1 + 0x78))(plVar1,plVar6,1);
    plVar7 = (long *)(lVar17 + 0x5478);
    (**(code **)(*plVar1 + 0x78))(plVar1,plVar7,1);
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
    FUN_00f13f08(param_1 * 98.0,param_1 * 98.0,plVar1);
    lVar18 = param_2 + lVar16 * 0x148;
    local_80 = DAT_03210f84;
    uVar13 = (ulong)param_3;
    lVar8 = lVar18 + 0x1f10;
    local_a8 = FUN_00c118cc;
    local_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_2;
    local_88 = uVar13;
    FUN_009693a0(lVar8,&local_a8);
    local_80 = DAT_03210f94;
    local_a8 = FUN_00c11914;
    local_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_2;
    local_88 = uVar13;
    FUN_009693a0(lVar8,&local_a8);
    local_80 = DAT_03210f98;
    local_a8 = FUN_00c1195c;
    local_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_2;
    local_88 = uVar13;
    FUN_009693a0(lVar8,&local_a8);
    puVar9 = (uint *)(lVar15 + 0x491c);
    *(uint *)(lVar18 + 0x1f8c) = *(uint *)(lVar18 + 0x1f8c) | 0x10;
    puVar10 = (uint *)(lVar4 + 0x3f1c);
    *(uint *)(lVar17 + 0x2c5c) = *(uint *)(lVar17 + 0x2c5c) & 0xffffffbf;
    *puVar9 = *puVar9 & 0xffffffbf;
    *(uint *)(lVar4 + 0x3f1c) = *(uint *)(lVar4 + 0x3f1c) & 0xffffffbf;
    *(uint *)(lVar17 + 0x35bc) = *(uint *)(lVar17 + 0x35bc) & 0xffffffbf;
    puVar11 = (uint *)(lVar17 + 0x35bc);
    FUN_00f0e540(lVar2,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*(long *)(lVar17 + 0x2bd8) + 0x28))(lVar2,&local_a8);
    FUN_00f0e540(lVar5,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
    FUN_00f0eea0(lVar5,FUN_00c119a4,param_4);
    FUN_00f0e578(lVar5,"icon_item_empty");
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*(long *)(lVar4 + 0x3e98) + 0x28))(lVar5,&local_a8);
    uVar14 = *(uint *)(lVar4 + 0x3f1c);
    if ((uVar14 & 0x7f80) != 0x3f80) {
      *puVar10 = uVar14 & 0xffff807f | 0x3f80;
      FUN_0091ada4(lVar5);
      uVar14 = *puVar10;
    }
    *puVar10 = uVar14 & 0xfffffffb;
    FUN_00f0e540(plVar3,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
    FUN_00f0e578(plVar3,"icon_item_empty");
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_a8);
    uVar14 = *puVar11;
    if ((uVar14 & 0x7f80) != 0x3f80) {
      *puVar11 = uVar14 & 0xffff807f | 0x3f80;
      FUN_0091ada4(plVar3);
      uVar14 = *puVar11;
    }
    *puVar11 = uVar14 & 0xfffffffb;
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_a8);
    *puVar9 = *puVar9 | 4;
    FUN_00f0dac8(plVar6,0);
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_a8);
    uVar14 = *puVar9;
    if ((uVar14 & 0x7f80) != 0x7280) {
      *puVar9 = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x7280;
      FUN_0091ada4(plVar6);
    }
    FUN_00f0e540(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440);
    FUN_00f0e578(plVar7,"hud_store_inventory_tray");
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_a8);
    puVar9 = (uint *)(param_2 + lVar16 * 0xf0 + 0x54fc);
    uVar14 = *puVar9;
    if ((uVar14 & 0x7f80) != 0x3300) {
      *puVar9 = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3300;
      FUN_0091ada4(plVar7);
    }
  }
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c118cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_5), (uVar2 & 1) == 0)) {
    FUN_00f0490c(param_4);
    return;
  }
  return;
}




void FUN_00c11914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if ((puVar1 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar1)(puVar1,param_5), (uVar2 & 1) == 0)) {
    FUN_00f0490c(param_4);
    return;
  }
  return;
}




void FUN_00c1195c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_5), (uVar2 & 1) == 0)) {
    FUN_00f0490c(param_4);
    return;
  }
  return;
}




void FUN_00c119a4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"icon_item_empty");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00c11a4c(long param_1)

{
  *(undefined1 *)(param_1 + 0x924e) = 1;
  *(uint *)(param_1 + 0x1d7c) = *(uint *)(param_1 + 0x1d7c) & 0xfffffffb;
  *(uint *)(param_1 + 0x6f0c) = *(uint *)(param_1 + 0x6f0c) | 4;
  if (*(long *)(param_1 + 0x8938) != 0) {
    FUN_00c660e4();
    return;
  }
  return;
}




void FUN_00c11a88(long param_1)

{
  *(undefined1 *)(param_1 + 0x924e) = 0;
  *(uint *)(param_1 + 0x1d7c) = *(uint *)(param_1 + 0x1d7c) | 4;
  *(uint *)(param_1 + 0x6f0c) = *(uint *)(param_1 + 0x6f0c) & 0xfffffffb;
  return;
}




void FUN_00c11ab0(long param_1)

{
  FUN_00f0d75c(param_1 + 0x6d8,&DAT_03210450);
  FUN_00f0e6bc(0x3f800000,param_1 + 0x4f8);
  if ((~*(uint *)(param_1 + 0x57c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x57c) | 0x7f80;
    FUN_0091ada4(param_1 + 0x4f8);
  }
  *(uint *)(param_1 + 0x66c) = *(uint *)(param_1 + 0x66c) & 0xfffffffb;
  return;
}




void FUN_00c11b18(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00e70e18(param_1 + 0x9220,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x6d8,param_1 + 0x9220);
  FUN_00f0e6bc(0,param_1 + 0x4f8);
  uVar1 = *(uint *)(param_1 + 0x57c);
  if ((uVar1 & 0x7f80) != 0x2c80) {
    *(uint *)(param_1 + 0x57c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2c80;
    FUN_0091ada4(param_1 + 0x4f8);
  }
  *(uint *)(param_1 + 0x66c) = *(uint *)(param_1 + 0x66c) | 4;
  return;
}




void FUN_00c11ba0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf6c) =
       *(uint *)(param_1 + 0xf6c) & 0xfffffff8 | *(uint *)(param_1 + 0xf6c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c11bb4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x141c) =
       *(uint *)(param_1 + 0x141c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x141c) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c11bc8(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18cc) =
       *(uint *)(param_1 + 0x18cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x18cc) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c11bdc(long param_1)

{
  FUN_00a1ffcc(param_1 + 0x4f8);
  *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x57c) | 4;
  return;
}




void FUN_00c11c0c(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x9220,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0xc88,param_1 + 0x9220);
  return;
}




void FUN_00c11c4c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x9244) = param_1;
  FUN_00c0f7f8();
  return;
}




void FUN_00c11c58(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x60e0) != 0) {
    FUN_00f0e628(param_1 + 0x6010);
  }
  FUN_00e6a8a8(auStack_c8,PTR_s_build___HUDPartsHero__s_png_02be3470,param_2);
  FUN_00e6a8a8(auStack_e8,"ability_icon_%d",param_3);
  FUN_00f0e548(param_1 + 0x6010,auStack_c8,auStack_e8);
  FUN_00f0eea0(param_1 + 0x61f0,FUN_00c11d24,param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c11d24(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"icon_item_empty");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00c11dcc(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x9220,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x62f0,param_1 + 0x9220);
  return;
}




void FUN_00c11e10(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x5e5c) =
       *(uint *)(param_1 + 0x5e5c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x5e5c) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c11e28(long param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x6374) =
       *(uint *)(param_1 + 0x6374) & 0xfffffff8 |
       *(uint *)(param_1 + 0x6374) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x6274) =
       *(uint *)(param_1 + 0x6274) & 0xfffffff8 |
       *(uint *)(param_1 + 0x6274) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x6184) =
       *(uint *)(param_1 + 0x6184) & 0xfffffff8 |
       *(uint *)(param_1 + 0x6184) & 3 | ((param_2 | param_3 ^ 0xffffffff) & 1) << 2;
  return;
}




void FUN_00c11e64(long param_1)

{
  FUN_00f0e6bc(param_1 + 0x6010);
  return;
}




void FUN_00c11e70(uint *param_1,undefined8 *param_2)

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
    FUN_00c1359c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c11ef8(long param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  
  if ((param_2 & 1) != 0) {
    pcVar1 = "icon_item_weapon_infusion";
    if ((param_3 & 1) == 0) {
      pcVar1 = "icon_item_crystal_infusion";
    }
    FUN_00f0e578(param_1 + 0x808,pcVar1);
  }
  *(uint *)(param_1 + 0x88c) =
       *(uint *)(param_1 + 0x88c) & 0xfffffff8 | *(uint *)(param_1 + 0x88c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c11f4c(long param_1,int param_2)

{
  long lVar1;
  
  FUN_00e70e18(param_1 + 0x9220,&DAT_01bb6d43);
  lVar1 = param_1 + (long)param_2 * 0x130;
                    /* WARNING: Could not recover jumptable at 0x00c11fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x4898) + 0x138))(lVar1 + 0x4898,param_1 + 0x9220);
  return;
}




void FUN_00c11fa8(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = param_1 + (long)param_2 * 0x130;
  uVar2 = *(uint *)(lVar3 + 0x491c);
  lVar1 = param_1 + (long)param_2 * 0x100;
  *(uint *)(lVar3 + 0x491c) = uVar2 & 0xfffffff8 | uVar2 & 3 | (param_3 & 1) << 2;
  uVar2 = *(uint *)(lVar1 + 0x3f1c);
  *(uint *)(lVar1 + 0x3f1c) = uVar2 & 0xfffffff8 | uVar2 & 3 | (param_3 & 1) << 2;
  param_1 = param_1 + (long)param_2 * 0xf0;
  uVar2 = *(uint *)(param_1 + 0x35bc);
  *(uint *)(param_1 + 0x35bc) = uVar2 & 0xfffffff8 | uVar2 & 3 | (param_3 & 1) << 2;
  return;
}




void FUN_00c11ff0(long param_1,int param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = "icon_item_empty";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  FUN_00f0e578(param_1 + (long)param_2 * 0xf0 + 0x2bd8,pcVar1);
  return;
}

