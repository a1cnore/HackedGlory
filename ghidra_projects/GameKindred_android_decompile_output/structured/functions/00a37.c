// functions/00a37 — 24 functions
#include "libGameKindred.h"




void FUN_00a372d8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"hud_buffs_overlay");
  FUN_00a20078(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,param_1,param_2,uVar1,param_3,
               param_4,0,0);
  return;
}




void thunk_FUN_00a37a68(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d83c();
  if ((uVar2 & 1) != 0) {
    FUN_00a379f8(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x580);
  *(byte *)(param_1 + 0x580) = bVar1 | 8;
  if ((bVar1 & 1) == 0) {
    FUN_00e70314(param_1 + 0x568);
    *(byte *)(param_1 + 0x580) = *(byte *)(param_1 + 0x580) | 1;
  }
  return;
}




void FUN_00a37370(long param_1)

{
  *(byte *)(param_1 + 0x580) = *(byte *)(param_1 + 0x580) & 0xf7;
  return;
}




void FUN_00a37380(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d830();
  if ((uVar1 & 1) != 0) {
    FUN_00a373b4(param_1);
    return;
  }
  return;
}




void FUN_00a373b4(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar4 = (byte)param_1[0x160];
  uVar5 = (uint)bVar4;
  if ((bVar4 >> 2 & 1) != 0) {
    uVar5 = bVar4 & 0xf0;
    *(char *)(param_1 + 0x160) = (char)uVar5;
  }
  puVar3 = param_1;
  if ((uVar5 >> 3 & 1) == 0) goto LAB_00a374b8;
  uVar2 = FUN_019807a4();
  if ((uVar2 & 1) == 0) {
    puVar3 = (uint *)FUN_019806b8(0);
    bVar4 = (byte)param_1[0x160];
    if (((ulong)puVar3 & 1) != 0) {
LAB_00a3742c:
      if ((bVar4 & 3) == 1) {
        uVar5 = clock_gettime(1,&local_48);
        puVar3 = (uint *)(ulong)uVar5;
        lVar7 = local_48.tv_nsec - *(long *)(param_1 + 0x15c);
        lVar6 = local_48.tv_sec - *(long *)(param_1 + 0x15a);
        if (lVar7 < 0) {
          lVar6 = lVar6 + -1;
          lVar7 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x15c);
        }
        if (1.0 < (double)(lVar7 + lVar6 * 1000000000) * 1e-09) {
          *(byte *)(param_1 + 0x160) = (byte)param_1[0x160] | 2;
          puVar3 = (uint *)FUN_00a379f8(param_1);
        }
      }
      goto LAB_00a374b8;
    }
  }
  else {
    puVar3 = (uint *)FUN_019807b8();
    if ((int)puVar3 == 0) {
      bVar4 = (byte)param_1[0x160];
    }
    else {
      puVar3 = (uint *)FUN_019807cc(0);
      bVar4 = (byte)param_1[0x160];
      if ((0xf < (int)*puVar3) && ((*puVar3 & 1) != 0)) goto LAB_00a3742c;
    }
  }
  *(byte *)(param_1 + 0x160) = bVar4 | 4;
LAB_00a374b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar3);
}




void FUN_00a374e0(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar3 = param_2;
  fVar2 = (float)FUN_00f0e700(param_3 + 0x28);
  param_2 = param_2 / fVar3;
  if ((*(float *)(param_3 + 0x31) != fVar1 / fVar2) ||
     (*(float *)((long)param_3 + 0x18c) != param_2)) {
    *(float *)(param_3 + 0x31) = fVar1 / fVar2;
    *(float *)((long)param_3 + 0x18c) = param_2;
    FUN_0091ada4(param_3 + 0x28);
  }
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = param_2;
  fVar2 = (float)FUN_00f0e700(param_3 + 0x69);
  param_2 = param_2 / fVar3;
  if ((*(float *)(param_3 + 0x72) != fVar1 / fVar2) ||
     (*(float *)((long)param_3 + 0x394) != param_2)) {
    *(float *)(param_3 + 0x72) = fVar1 / fVar2;
    *(float *)((long)param_3 + 0x394) = param_2;
    FUN_0091ada4(param_3 + 0x69);
  }
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = param_2;
  fVar2 = (float)FUN_00f0e700(param_3 + 0x49);
  if ((*(float *)(param_3 + 0x52) == fVar1 / fVar2) &&
     (*(float *)((long)param_3 + 0x294) == param_2 / fVar3)) {
    return;
  }
  *(float *)(param_3 + 0x52) = fVar1 / fVar2;
  *(float *)((long)param_3 + 0x294) = param_2 / fVar3;
  FUN_0091ada4(param_3 + 0x49);
  return;
}




void FUN_00a37608(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_c8 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d9ea34(param_3);
  if (lVar4 == 0) goto LAB_00a376b0;
  *(undefined4 *)(param_1 + 0x578) = param_2;
  iVar3 = FUN_00d6b938(lVar4,param_2);
  if ((iVar3 == 0) || (iVar3 = FUN_00d6b938(lVar4,param_2), iVar3 == 1)) {
    puVar6 = (undefined8 *)PTR_s_build___HUDItemsAndBuffs_atlas_02be3448;
    uVar5 = FUN_00d6b978(lVar4,param_2);
    local_c8[0] = NEON_fmov(0x3f100000,4);
    puVar7 = local_c8;
LAB_00a376a0:
    FUN_00a37738(param_1,puVar6,uVar5,puVar7);
  }
  else {
    iVar3 = FUN_00d6b938(lVar4,param_2);
    puVar2 = PTR_s_build___HUDPartsHero__s_png_02be3470;
    if (iVar3 == 2) {
      uVar5 = FUN_00d5bc38(param_3);
      FUN_00e6a8a8(local_c8,puVar2,uVar5);
      uVar5 = FUN_00d6b978(lVar4,param_2);
      puVar7 = &DAT_03218f00;
      puVar6 = local_c8;
      goto LAB_00a376a0;
    }
  }
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 4;
LAB_00a376b0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a37738(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x140;
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN_00f0e628(lVar1);
  }
  FUN_00f0e548(lVar1,param_2,param_3);
  if ((*(float *)(param_1 + 0x188) == *param_4) && (*(float *)(param_1 + 0x18c) == param_4[1])) {
    return;
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)param_4;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00a377d4(long param_1)

{
  *(undefined4 *)(param_1 + 0x578) = 0xffffffff;
  *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) & 0xfffffffb;
  FUN_00f0d75c(param_1 + 0x438,&DAT_03210450);
  return;
}




void FUN_00a37804(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_40;
  void *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) & 0xfffffffb;
    FUN_00f0d75c(param_1 + 0x438,&DAT_03210450,param_2);
  }
  else {
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) | 4;
    FUN_00e6a8a8(auStack_30,&DAT_01bb6d43);
    FUN_00e705c8(&local_40,auStack_30);
    FUN_00f0d75c(param_1 + 0x438,&local_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
      local_40 = 0;
      local_38 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a378b4(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x580) = *(byte *)(param_1 + 0x580) & 0xef | (byte)((param_2 & 1) << 4);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xffffffe0 | *(uint *)(param_1 + 0x84) & 0xf | (param_2 & 1) << 4
  ;
  return;
}




void FUN_00a378d8(undefined4 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x57c) = fVar1;
  return;
}




undefined4 FUN_00a378f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x57c);
}




undefined4 FUN_00a378f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x578);
}




void FUN_00a37900(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar1 = param_1 + 0xb8;
  if ((*(uint *)(param_1 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  lVar2 = DAT_03210d00;
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar4);
  FUN_00efcac4(0x3ea8f5c3,puVar4);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar4);
  return;
}




void FUN_00a379f8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_BUFF_TOOLTIP_READY");
  FUN_00f048e0(auStack_48,uVar2,*(undefined4 *)(param_1 + 0x578));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a37a68(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d83c();
  if ((uVar2 & 1) != 0) {
    FUN_00a379f8(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x580);
  *(byte *)(param_1 + 0x580) = bVar1 | 8;
  if ((bVar1 & 1) == 0) {
    FUN_00e70314(param_1 + 0x568);
    *(byte *)(param_1 + 0x580) = *(byte *)(param_1 + 0x580) | 1;
  }
  return;
}




void FUN_00a37ac0(long param_1)

{
  *(byte *)(param_1 + 0x580) = *(byte *)(param_1 + 0x580) & 0xf7;
  return;
}




void FUN_00a37ad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9730;
  FUN_00f0d3a4(param_1 + 0x87);
  param_1[0x69] = &PTR_FUN_028266f0;
  param_1[0x80] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x83);
  FUN_00f13d08(param_1 + 0x69);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x28] = &PTR_FUN_02827290;
  param_1[0x3f] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a37b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9730;
  FUN_00f0d3a4(param_1 + 0x87);
  param_1[0x69] = &PTR_FUN_028266f0;
  param_1[0x80] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x83);
  FUN_00f13d08(param_1 + 0x69);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x28] = &PTR_FUN_02827290;
  param_1[0x3f] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a37c70(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027c9878;
  *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
  FUN_00b27c04(param_1 + 0x1a,1);
  plVar6 = param_1 + 0x37;
  FUN_00b89cd8(plVar6);
  plVar1 = param_1 + 0x50;
  FUN_00f13ca4(plVar1);
  lVar7 = 0;
  do {
    FUN_00a36f40((long)param_1 + lVar7 + 0x388);
    lVar7 = lVar7 + 0x588;
  } while (lVar7 != 0x2c40);
  *(byte *)(param_1 + 0x5f9) = *(byte *)(param_1 + 0x5f9) & 0xfc;
  uVar3 = FUN_00e6a474("HUD_Buffs");
  uVar4 = FUN_0091ed5c("HUD_Buffs",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       (uVar4 & 0xffff) << 0xf | *(uint *)((long)param_1 + 0x84) & 0x80007fff | 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar1,1);
  FUN_00f023ec(plVar6,param_1 + 0x1a,1);
  plVar6 = param_1 + 0x71;
  lVar7 = 8;
  param_1[0x68] = -1;
  param_1[0x67] = -1;
  do {
    FUN_00f023ec(plVar1,plVar6,1);
    local_88 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_88);
    *(uint *)((long)plVar6 + 0x84) = *(uint *)((long)plVar6 + 0x84) & 0xfffffffb;
    FUN_00a378d8(0,plVar6);
    lVar7 = lVar7 + -1;
    plVar6 = plVar6 + 0xb1;
  } while (lVar7 != 0);
  uVar5 = FUN_0093d830();
  if ((uVar5 & 1) != 0) {
    local_60 = FUN_00f048a4("EVENT_BUFF_TOOLTIP_READY");
    local_88 = FUN_00a37e60;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    plStack_80 = param_1;
    FUN_009693a0(param_1 + 1,&local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a37e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a38dc4(param_1,param_4);
  return;
}




void FUN_00a37e68(long *param_1,long param_2,byte param_3,byte param_4)

{
  long lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar2 = (byte *)(param_1 + 0x5f9);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  param_1[0x17] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *pbVar2 = param_3 & 1 | (param_3 & param_4 & 1) << 1 | *pbVar2 & 0xfc;
  local_40 = 0x3f80000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_40);
  uVar5 = FUN_00a37fe8(param_1);
  if ((uVar5 & 1) == 0) {
    if ((*(float *)(param_1 + 0x5a) == 0.5) &&
       (*(float *)((long)param_1 + 0x2d4) == *(float *)((long)param_1 + 0x54))) goto LAB_00a37f50;
    *(undefined4 *)(param_1 + 0x5a) = 0x3f000000;
    *(float *)((long)param_1 + 0x2d4) = *(float *)((long)param_1 + 0x54);
  }
  else {
    if ((*(float *)(param_1 + 0x5a) == *(float *)(param_1 + 10)) &&
       (*(float *)((long)param_1 + 0x2d4) == 0.5)) goto LAB_00a37f50;
    *(float *)(param_1 + 0x5a) = *(float *)(param_1 + 10);
    *(undefined4 *)((long)param_1 + 0x2d4) = 0x3f000000;
  }
  FUN_0091ada4(param_1 + 0x50);
LAB_00a37f50:
  plVar6 = (long *)param_1[0x17];
  if (plVar6 != (long *)0x0) {
    if ((int)param_1[0x18] == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 != 0) {
        lVar7 = FUN_00d9ea08();
        param_1[0x19] = lVar7;
      }
    }
    else {
      param_1[0x17] = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  if ((*pbVar2 & 1) != 0) {
    lVar7 = -0x2c40;
    do {
      lVar1 = lVar7 + 0x588;
      *(uint *)((long)param_1 + lVar7 + 0x304c) = *(uint *)((long)param_1 + lVar7 + 0x304c) | 0x10;
      lVar7 = lVar1;
    } while (lVar1 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a37fe8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x2fc8) & 1) == 0) {
    uVar1 = FUN_0092e750();
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = FUN_00a1bcec();
  return uVar2;
}

