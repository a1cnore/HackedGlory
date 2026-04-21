// functions/00af7 — 15 functions
#include "libGameKindred.h"




void FUN_00af7028(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x11;
  *puVar1 = &PTR_FUN_027da660;
  *param_1 = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_0199fb94(param_1 + 3);
  FUN_00f01868(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00af7080(long *param_1)

{
  long *plVar1;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027da7c0;
  FUN_00af6b6c(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  *(undefined1 *)(param_1 + 0x2d) = 1;
  FUN_00af6d64(0x44c00000,0x44c00000,plVar1);
  if ((*(float *)(param_1 + 0x1a) != 0.9) || (*(float *)((long)param_1 + 0xd4) != 0.9)) {
    param_1[0x1a] = 0x3f6666663f666666;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x1b) == 0.5) && (*(float *)((long)param_1 + 0xdc) == 0.5)) {
    return;
  }
  param_1[0x1b] = 0x3f0000003f000000;
  FUN_0091ada4(plVar1);
  return;
}




void FUN_00af7168(void)

{
  return;
}




void FUN_00af716c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  FUN_00af73c0(param_1,param_1 + 0x88,param_2,param_3);
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3dcccccd,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00af7378;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00af7378:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3f800000,puVar5);
  FUN_00f02308(param_1,puVar3,puVar4,puVar5,0);
  return;
}




void FUN_00af73c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 extraout_x0;
  undefined8 uVar5;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  void *local_60;
  int local_58;
  int iStack_54;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00af7508(param_1,param_3,&local_50,&iStack_54,&local_58);
  iVar3 = iStack_54;
  iVar2 = local_58;
  pvVar4 = operator_new__((ulong)(uint)(iStack_54 * local_58 * 4));
  FUN_00e6c7a8(pvVar4,local_50,iVar3,iVar2,0xff);
  uVar5 = 0;
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    uVar5 = extraout_x0;
  }
  local_50 = (void *)0x0;
  FUN_00af7508(uVar5,param_4,&local_60,auStack_64,auStack_68);
  FUN_00e6c84c(pvVar4,local_60,iStack_54,local_58,1,3);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  local_60 = (void *)0x0;
  FUN_00af6cf8(param_2,pvVar4,iStack_54,local_58);
  operator_delete__(pvVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af74bc(long param_1)

{
  if ((*(float *)(param_1 + 0x170) == DAT_03218ef8) &&
     (*(float *)(param_1 + 0x174) == _DAT_03218efc)) {
    FUN_00af6d80(param_1 + 0x88);
  }
  return;
}




void FUN_00af74fc(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x170) = *param_2;
  return;
}




undefined8
FUN_00af7508(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  FILE *__stream;
  char *__filename;
  byte local_70 [16];
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  FUN_008fcdb8(local_70);
  __filename = (char *)((ulong)local_70 | 1);
  pcVar1 = __filename;
  if ((local_70[0] & 1) != 0) {
    pcVar1 = local_60;
  }
  FUN_00f1c904(pcVar1,local_70);
  pcVar1 = __filename;
  if ((local_70[0] & 1) != 0) {
    pcVar1 = local_60;
  }
  FUN_00f1c8ec(pcVar1,local_70);
  pcVar1 = __filename;
  if ((local_70[0] & 1) != 0) {
    pcVar1 = local_60;
  }
  uVar3 = FUN_00e6af84(pcVar1);
  pvVar4 = operator_new__((ulong)uVar3);
  if ((local_70[0] & 1) != 0) {
    __filename = local_60;
  }
  __stream = fopen(__filename,"r");
  FUN_00e6aef0(pvVar4,1,uVar3,__stream);
  FUN_00ed9850(pvVar4,uVar3,param_3,param_4,param_5);
  fclose(__stream);
  operator_delete__(pvVar4);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af764c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da7c0;
  param_1[0x11] = &PTR_FUN_027da660;
  param_1[0x22] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  FUN_0199fb94(param_1 + 0x25);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00af76b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da7c0;
  param_1[0x11] = &PTR_FUN_027da660;
  param_1[0x22] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  FUN_0199fb94(param_1 + 0x25);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00af772c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  code *local_d8;
  long *plStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar10 = tpidr_el0;
  local_a8 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027da8c0;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2cf;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x2ed;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x30b;
  FUN_00ab6c24(plVar4,0);
  plVar5 = param_1 + 0x5c3;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x5e1;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x5ff;
  FUN_00ab6c24(plVar7,0);
  plVar8 = param_1 + 0x8b7;
  FUN_00f0e4a8(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"ice_icon_small");
  fVar11 = (float)FUN_00f0eac0(plVar5);
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xffc0c0c0);
  fVar11 = fVar11 + 12.0;
  fVar12 = fVar11;
  FUN_00ab703c(0,fVar11,fVar11,plVar4,0,&DAT_03210450,&local_d8,&DAT_03218ef8,0);
  uVar9 = DAT_03210c64;
  local_d8 = thunk_FUN_00a9bda0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  plStack_d0 = param_1;
  local_b0 = uVar9;
  FUN_009693a0(param_1 + 0x30c,&local_d8);
  FUN_00f13e54(plVar4);
  fVar12 = (fVar11 / fVar12) * 92.0;
  FUN_00ab7628(fVar12,plVar4);
  FUN_00ab74fc(0x42200000,0,plVar4);
  FUN_00b09144(0x3dcccccd,plVar4);
  FUN_00ab7538(0x3f800000,plVar4,&DAT_01bee7fa);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_plus");
  FUN_00f13f08(0x41c00000,0x41c00000,plVar6);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  local_d8 = (code *)0x41c80000;
  FUN_00ab703c(0,0x43480000,0x43480000,plVar1,0,&DAT_03210450,&DAT_01bee7fa,&local_d8,0);
  local_d8 = thunk_FUN_00af83e4;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  plStack_d0 = param_1;
  local_b0 = uVar9;
  FUN_009693a0(param_1 + 0x18,&local_d8);
  FUN_00ab7628(fVar12,plVar1);
  FUN_00ab74fc(0x42200000,0,plVar1);
  FUN_00b09144(0x3dcccccd,plVar1);
  FUN_00ab7538(0x3f800000,plVar1,&DAT_01bee7fa);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_plus");
  FUN_00f13f08(0x41c00000,0x41c00000,plVar3);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"opal_icon_small");
  local_d8 = (code *)0x41c80000;
  FUN_00ab703c(0,0x43480000,0x43480000,plVar7,0,&DAT_03210450,&DAT_01bee7fa,&local_d8,0);
  local_d8 = thunk_FUN_00af8428;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  plStack_d0 = param_1;
  local_b0 = uVar9;
  FUN_009693a0(param_1 + 0x600,&local_d8);
  FUN_00b09144(0x3dcccccd,plVar7);
  FUN_00ab7538(0,plVar7,&DAT_01bee7fa);
  FUN_00969248();
  *(uint *)((long)param_1 + 0x307c) = *(uint *)((long)param_1 + 0x307c) & 0xfffffffb;
  FUN_00af7d24(param_1);
  if (*(long *)(lVar10 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af7ba0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_00969248();
  *(uint *)(param_1 + 0x307c) =
       *(uint *)(param_1 + 0x307c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x307c) & 3 | (*(int *)(lVar1 + 0x38) < 1 & param_2) << 2;
  FUN_00af7d24(param_1);
  return;
}




void FUN_00af7be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da8c0;
  param_1[0x8b7] = &PTR_FUN_028266f0;
  param_1[0x8ce] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8d1);
  FUN_00f13d08(param_1 + 0x8b7);
  FUN_009c7fa8(param_1 + 0x5ff);
  param_1[0x5e1] = &PTR_FUN_028266f0;
  param_1[0x5f8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5fb);
  FUN_00f13d08(param_1 + 0x5e1);
  param_1[0x5c3] = &PTR_FUN_028266f0;
  param_1[0x5da] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5dd);
  FUN_00f13d08(param_1 + 0x5c3);
  FUN_009c7fa8(param_1 + 0x30b);
  param_1[0x2ed] = &PTR_FUN_028266f0;
  param_1[0x304] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x307);
  FUN_00f13d08(param_1 + 0x2ed);
  param_1[0x2cf] = &PTR_FUN_028266f0;
  param_1[0x2e6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e9);
  FUN_00f13d08(param_1 + 0x2cf);
  FUN_009c7fa8(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00af7d00(void *param_1)

{
  FUN_00af7be4();
  operator_delete(param_1);
  return;
}




void FUN_00af7d24(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0x5c3;
  fVar5 = (float)FUN_00f0e700(plVar1);
  plVar2 = param_1 + 0x30b;
  fVar6 = (float)FUN_00f0d4e0(param_1 + 0x3ef);
  fVar10 = 120.0;
  fVar5 = fVar5 + fVar6 + 10.0;
  if (fVar5 <= 120.0) {
    fVar5 = fVar10;
  }
  FUN_00ab75d0(0,fVar5,fVar5,plVar2);
  fVar5 = (float)FUN_00f13e54(plVar2);
  fVar6 = *(float *)(param_1 + 0x313);
  fVar5 = fVar5 * 0.5;
  if ((fVar6 != fVar5) || (*(float *)((long)param_1 + 0x189c) != 0.0)) {
    *(float *)(param_1 + 0x313) = fVar5;
    *(undefined4 *)((long)param_1 + 0x189c) = 0;
    FUN_0091ada4(plVar2);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(param_1[0x30b] + 0x28))(plVar2,&local_90);
  plVar3 = param_1 + 0x5e1;
  fVar7 = (float)FUN_00f13e54(plVar2);
  fVar8 = (float)FUN_00f0e700(plVar3);
  fVar8 = (fVar8 * 0.5 - fVar7 * 0.5) + 10.0;
  FUN_00f13e54(plVar2);
  fVar7 = (float)FUN_00f0e700(plVar3);
  fVar6 = (fVar7 * 0.5 - fVar6 * 0.5) + 12.0;
  if ((*(float *)(param_1 + 0x5e9) != fVar8) || (*(float *)((long)param_1 + 0x2f4c) != fVar6)) {
    *(float *)(param_1 + 0x5e9) = fVar8;
    *(float *)((long)param_1 + 0x2f4c) = fVar6;
    FUN_0091ada4(plVar3);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(param_1[0x5e1] + 0x28))(plVar3,&local_90);
  fVar7 = *(float *)(param_1 + 0x5e9);
  fVar6 = (float)FUN_00f0e700(plVar3);
  fVar6 = fVar7 + fVar6 * 0.5 + -10.0;
  if ((*(float *)(param_1 + 0x5cb) != fVar6) || (*(float *)((long)param_1 + 0x2e5c) != 0.0)) {
    *(float *)(param_1 + 0x5cb) = fVar6;
    *(undefined4 *)((long)param_1 + 0x2e5c) = 0;
    FUN_0091ada4(plVar1);
  }
  local_90 = 0x3f00000000000000;
  (**(code **)(param_1[0x5c3] + 0x28))(plVar1,&local_90);
  fVar6 = (float)FUN_00f13e54(plVar2);
  fVar5 = fVar5 + fVar6 * 0.5;
  if ((*(byte *)((long)param_1 + 0x13c) >> 2 & 1) != 0) {
    plVar1 = param_1 + 0x17;
    fVar6 = (float)FUN_00f13e54(plVar1);
    plVar2 = param_1 + 0x2cf;
    fVar5 = fVar5 + fVar6 * 0.5 + 10.0;
    fVar6 = (float)FUN_00f0e700(plVar2);
    fVar7 = (float)FUN_00f0d4e0(param_1 + 0xfb);
    fVar6 = fVar6 + fVar7 + 10.0;
    if (fVar6 <= 120.0) {
      fVar6 = fVar10;
    }
    FUN_00ab75d0(0,fVar6,fVar6,plVar1);
    if ((*(float *)(param_1 + 0x1f) != fVar5) || (*(float *)((long)param_1 + 0xfc) != 0.0)) {
      *(float *)(param_1 + 0x1f) = fVar5;
      *(undefined4 *)((long)param_1 + 0xfc) = 0;
      FUN_0091ada4(plVar1);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_90);
    fVar7 = (float)FUN_00f13e54(plVar1);
    plVar3 = param_1 + 0x2ed;
    fVar8 = (float)FUN_00f13e54(plVar1);
    fVar9 = (float)FUN_00f0e700(plVar3);
    fVar9 = (fVar9 * 0.5 - fVar8 * 0.5) + 10.0;
    FUN_00f13e54(plVar1);
    fVar8 = (float)FUN_00f0e700(plVar3);
    fVar6 = (fVar8 * 0.5 - fVar6 * 0.5) + 12.0;
    if ((*(float *)(param_1 + 0x2f5) != fVar9) || (*(float *)((long)param_1 + 0x17ac) != fVar6)) {
      *(float *)(param_1 + 0x2f5) = fVar9;
      *(float *)((long)param_1 + 0x17ac) = fVar6;
      FUN_0091ada4(plVar3);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(param_1[0x2ed] + 0x28))(plVar3,&local_90);
    fVar8 = *(float *)(param_1 + 0x2f5);
    fVar6 = (float)FUN_00f0e700(plVar3);
    fVar6 = fVar8 + fVar6 * 0.5 + -10.0;
    if ((*(float *)(param_1 + 0x2d7) != fVar6) || (*(float *)((long)param_1 + 0x16bc) != 0.0)) {
      *(float *)(param_1 + 0x2d7) = fVar6;
      *(undefined4 *)((long)param_1 + 0x16bc) = 0;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f00000000000000;
    fVar5 = fVar5 + fVar7 * 0.5;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
  }
  if ((*(byte *)((long)param_1 + 0x307c) >> 2 & 1) != 0) {
    plVar1 = param_1 + 0x5ff;
    fVar6 = (float)FUN_00f13e54(plVar1);
    plVar2 = param_1 + 0x8b7;
    fVar5 = fVar5 + fVar6 * 0.5 + 10.0;
    fVar6 = (float)FUN_00f0e700(plVar2);
    fVar7 = (float)FUN_00f0d4e0(param_1 + 0x6e3);
    fVar6 = fVar6 + fVar7 + 10.0;
    if (fVar6 <= 120.0) {
      fVar6 = fVar10;
    }
    FUN_00ab75d0(0,fVar6,fVar6,plVar1);
    if ((*(float *)(param_1 + 0x607) != fVar5) || (*(float *)((long)param_1 + 0x303c) != 0.0)) {
      *(float *)(param_1 + 0x607) = fVar5;
      *(undefined4 *)((long)param_1 + 0x303c) = 0;
      FUN_0091ada4(plVar1);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(param_1[0x5ff] + 0x28))(plVar1,&local_90);
    fVar6 = (float)FUN_00f13e54(plVar1);
    fVar6 = fVar6 * -0.5 + 8.0;
    if ((*(float *)(param_1 + 0x8bf) != fVar6) || (*(float *)((long)param_1 + 0x45fc) != 0.0)) {
      *(float *)(param_1 + 0x8bf) = fVar6;
      *(float *)((long)param_1 + 0x45fc) = 0.0;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f00000000000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
    fVar6 = (float)FUN_00f13e54(plVar1);
    fVar5 = fVar5 + fVar6 * 0.5;
  }
  (**(code **)(*param_1 + 0x60))(param_1,1,0,1,1);
  FUN_00f13f08(fVar5,param_1);
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

