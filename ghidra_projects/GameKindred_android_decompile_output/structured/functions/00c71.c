// functions/00c71 — 11 functions
#include "libGameKindred.h"




void thunk_FUN_00c71ccc(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
  uVar1 = FUN_00e6ce7c("INVENTORY_HAT_EQUIPPED_TAG",0);
  FUN_00f0d75c(param_1 + 0xaf0,uVar1);
  uVar1 = FUN_00aa4e1c();
  FUN_00aa3d68(uVar1,*(long *)(param_1 + 200) + 0x10);
  return;
}




void FUN_00c7149c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  
  *param_1 = &PTR_FUN_028017d0;
  param_1[0x19] = 0;
  puVar4 = (uint *)(param_1 + 0x17);
  uVar2 = *puVar4;
  plVar1 = (long *)param_1[0x18];
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        uVar2 = *(uint *)(param_1 + 0x17);
        plVar1 = (long *)param_1[0x18];
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar4 = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1aa);
  FUN_00f0d3a4(param_1 + 0x184);
  FUN_00f0d3a4(param_1 + 0x15e);
  FUN_00f0d3a4(param_1 + 0x138);
  FUN_00f0d3a4(param_1 + 0x112);
  param_1[0xf1] = &PTR_FUN_028266f0;
  param_1[0x108] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10b);
  FUN_00f13d08(param_1 + 0xf1);
  param_1[199] = &PTR_FUN_02826f38;
  param_1[0xde] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xe1);
  FUN_00f13d08(param_1 + 199);
  param_1[0xa9] = &PTR_FUN_028266f0;
  param_1[0xc0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc3);
  FUN_00f13d08(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_028266f0;
  param_1[0xa2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa5);
  FUN_00f13d08(param_1 + 0x8b);
  param_1[0x6d] = &PTR_FUN_028266f0;
  param_1[0x84] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x87);
  FUN_00f13d08(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_028266f0;
  param_1[0x66] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x4f);
  param_1[0x31] = &PTR_FUN_028266f0;
  param_1[0x48] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x1a);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7164c(void *param_1)

{
  FUN_00c7149c();
  operator_delete(param_1);
  return;
}




void FUN_00c71670(long param_1,long param_2,undefined8 param_3,byte param_4,byte param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(long *)(param_1 + 0xb8) = param_2;
  FUN_008fce60((byte *)(param_1 + 0xae0));
  FUN_008fce60(param_1 + 0xaf8,param_2 + 0x18);
  FUN_008fce60(param_1 + 0xb10,param_2 + 0x30);
  lVar1 = param_1 + 0x598;
  *(byte *)(param_1 + 0xb35) = param_4 & 1;
  *(byte *)(param_1 + 0xb36) = param_5 & 1;
  FUN_00f0e628(lVar1);
  FUN_00cac518(local_70,param_3);
  pvVar2 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
  FUN_00f0e540(lVar1,pvVar2);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((*(byte *)(param_1 + 0xae0) & 1) == 0) {
    lVar4 = param_1 + 0xae1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xaf0);
  }
  FUN_00f0e578(lVar1,lVar4);
  FUN_00c71ad4(param_1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c71778(uint *param_1,undefined8 *param_2)

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
    FUN_00c721b0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c71800(long param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00e70510(&local_58);
  puVar5 = *(uint **)(param_1 + 200);
  switch(puVar5[0x10]) {
  case 0:
    pcVar3 = "INVENTORY_HAT_EQUIPPED_TAG";
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
    uVar1 = *(uint *)(param_1 + 0x3ec) & 0xffffffef | 4;
    break;
  case 1:
    pcVar3 = "INVENTORY_HAT_EQUIPPING_TAG";
    uVar1 = *(uint *)(param_1 + 0x3ec) & 0xfffffffb;
    break;
  case 2:
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | 0x14;
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
    pcVar3 = "INVENTORY_HAT_UNEQUIPPED_TAG";
    goto LAB_00c718f0;
  case 3:
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & 0xfffffffb;
    uVar1 = *puVar5;
    if ((int)uVar1 < 1) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      plVar6 = *(long **)(puVar5 + 2);
      uVar7 = (ulong)uVar1;
      do {
        uVar7 = uVar7 - 1;
        iVar9 = iVar9 + (uint)*(byte *)(*plVar6 + 0x4c);
        plVar6 = plVar6 + 1;
      } while (uVar7 != 0);
    }
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01bb6d43,iVar9);
    FUN_00e70510(&local_78);
    FUN_00e70e18(&local_78,&DAT_01bb6d43,(ulong)uVar1);
    thunk_FUN_00e7051c(&local_88,&local_68);
    FUN_00e705c8(&local_98,"/");
    FUN_00e70c34(&local_88,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e70c34(&local_88,&local_78);
    FUN_00f0d75c(param_1 + 0xd50,&local_88);
    uVar4 = FUN_00e6ce7c("SOCIAL_PINGS_PACK_UNDISCOVERED",0);
    FUN_00910394(&local_58,uVar4);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  default:
    goto switchD_00c71850_default;
  }
  *(uint *)(param_1 + 0x3ec) = uVar1;
LAB_00c718f0:
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00910394(&local_58,uVar4);
switchD_00c71850_default:
  FUN_00f0d75c(param_1 + 0xaf0,&local_58);
  fVar10 = (float)FUN_00f13e54(param_1 + 0xd0);
  FUN_00f0db64(fVar10 * 0.7,0,0x3f800000,param_1 + 0xaf0);
  lVar8 = *(long *)(param_1 + 200);
  uVar1 = *(uint *)(param_1 + 0x6bc);
  *(uint *)(param_1 + 0x6bc) =
       uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(*(int *)(lVar8 + 0x40) != 3) << 2;
  *(uint *)(param_1 + 0xca4) =
       *(uint *)(param_1 + 0xca4) & 0xfffffff8 |
       *(uint *)(param_1 + 0xca4) & 3 | (uint)(*(int *)(lVar8 + 0x40) == 3) << 2;
  *(uint *)(param_1 + 0xdd4) =
       *(uint *)(param_1 + 0xdd4) & 0xfffffff8 |
       *(uint *)(param_1 + 0xdd4) & 3 | (uint)(*(int *)(lVar8 + 0x40) == 3) << 2;
  if (*(char *)(lVar8 + 0x45) != '\0') {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 4;
    *(uint *)(param_1 + 0x2fc) = *(uint *)(param_1 + 0x2fc) | 4;
    *(uint *)(param_1 + 0x80c) = *(uint *)(param_1 + 0x80c) | 4;
    *(uint *)(param_1 + 0x6bc) = uVar1 & 0xfffffffb;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c71ad4(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = param_3 + 0xb28;
  FUN_00f13f18(param_3,lVar1);
  lVar2 = param_3 + 0xc0;
  FUN_00f13f18(lVar2,lVar1);
  local_50 = FUN_00f13e54(lVar2);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x9f0,&local_50);
  fVar6 = (float)FUN_00f0eaf4(param_3 + 0x598);
  if (*(char *)(param_3 + 0xb35) == '\0') {
    fVar7 = 0.72;
  }
  else {
    fVar7 = 0.54;
  }
  fVar6 = (*(float *)(param_3 + 0xb28) * fVar7) / fVar6;
  if ((*(float *)(param_3 + 0x5e0) != fVar6) || (*(float *)(param_3 + 0x5e4) != fVar6)) {
    *(float *)(param_3 + 0x5e0) = fVar6;
    *(float *)(param_3 + 0x5e4) = fVar6;
    FUN_0091ada4(param_3 + 0x598);
  }
  FUN_00f13f18(param_3 + 0x4a8,lVar1);
  FUN_00f07940(0,0,lVar2,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x900,6,param_3,6);
  FUN_00f07940(0,0,param_3 + 0x9f0,8,param_3,8);
  bVar3 = *(byte *)(*(long *)(param_3 + 0xb8) + 0x4c);
  uVar5 = (uint)bVar3;
  if ((bVar3 != 0) && (uVar5 = 0, *(char *)(param_3 + 0xb35) == '\0')) {
    uVar5 = (uint)*(byte *)(param_3 + 0xb34) << 2;
  }
  *(uint *)(param_3 + 0x984) = *(uint *)(param_3 + 0x984) & 0xfffffffb | uVar5;
  if ((((*(char *)(*(long *)(param_3 + 0xb8) + 0x4c) == '\0') &&
       (*(char *)(param_3 + 0xb36) == '\0')) && (*(char *)(param_3 + 0xb35) == '\0')) &&
     (*(char *)(param_3 + 0xb34) != '\0')) {
    uVar5 = *(uint *)(param_3 + 0x84);
    if ((uVar5 & 0x7f80) == 0x3300) goto LAB_00c71c58;
    uVar5 = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
  }
  else {
    if ((~*(uint *)(param_3 + 0x84) & 0x7f80) == 0) goto LAB_00c71c58;
    uVar5 = *(uint *)(param_3 + 0x84) | 0x7f80;
  }
  *(uint *)(param_3 + 0x84) = uVar5;
  FUN_0091ada4(param_3);
LAB_00c71c58:
  *(uint *)(param_3 + 0xa74) =
       *(uint *)(param_3 + 0xa74) & 0xfffffffb | (uint)*(byte *)(param_3 + 0xb36) << 2;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c71cc0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xe80) = param_1;
  *(undefined4 *)(param_3 + 0xe84) = param_2;
  FUN_00c70668();
  return;
}




void FUN_00c71ccc(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
  uVar1 = FUN_00e6ce7c("INVENTORY_HAT_EQUIPPED_TAG",0);
  FUN_00f0d75c(param_1 + 0xaf0,uVar1);
  uVar1 = FUN_00aa4e1c();
  FUN_00aa3d68(uVar1,*(long *)(param_1 + 200) + 0x10);
  return;
}




void FUN_00c71d20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_02801918;
  FUN_00a7208c(plVar1,1);
  plVar2 = param_1 + 0x120;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x13e;
  FUN_00f0e4a8(plVar3);
  memset(param_1 + 0x15c,0,0x57);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_item_glow");
  FUN_00abb1c8(0,plVar1,&DAT_01bee7f6);
  uVar4 = *(uint *)((long)param_1 + 0x144);
  if ((uVar4 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x144) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00b09144(0,plVar1);
  FUN_00abb250(plVar1,1);
  local_50 = DAT_03210f60;
  local_78 = thunk_FUN_00c72090;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x19,&local_78);
  local_78 = thunk_FUN_00c72090;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x19,&local_78);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_check");
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c71ef8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_02801918;
  param_1[0x17] = 0;
  if ((*(byte *)(param_1 + 0x162) & 1) != 0) {
    operator_delete((void *)param_1[0x164]);
  }
  if ((*(byte *)(param_1 + 0x15f) & 1) != 0) {
    operator_delete((void *)param_1[0x161]);
  }
  if ((*(byte *)(param_1 + 0x15c) & 1) != 0) {
    operator_delete((void *)param_1[0x15e]);
  }
  param_1[0x13e] = &PTR_FUN_028266f0;
  param_1[0x155] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x158);
  FUN_00f13d08(param_1 + 0x13e);
  param_1[0x120] = &PTR_FUN_028266f0;
  param_1[0x137] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13a);
  FUN_00f13d08(param_1 + 0x120);
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_027cd398;
  FUN_00f0d3a4(param_1 + 0xf7);
  param_1[0xd7] = &PTR_FUN_028266f0;
  param_1[0xee] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf1);
  FUN_00f13d08(param_1 + 0xd7);
  *puVar1 = &PTR_FUN_027d5388;
  param_1[0xb3] = &PTR_FUN_028266f0;
  param_1[0xca] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcd);
  FUN_00f13d08(param_1 + 0xb3);
  param_1[0x95] = &PTR_FUN_028266f0;
  param_1[0xac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaf);
  FUN_00f13d08(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_028266f0;
  param_1[0x8e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x77);
  FUN_00f01868(param_1 + 0x66);
  FUN_009c825c(puVar1);
  FUN_00f13d08(param_1);
  return;
}

