// functions/00aeb — 5 functions
#include "libGameKindred.h"




void FUN_00aeb028(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                 byte *param_6,char param_7,undefined1 param_8,char param_9)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint local_88 [4];
  void *local_78;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  *(uint *)(param_1 + 0xa24) =
       *(uint *)(param_1 + 0xa24) & 0xfffffff8 | *(uint *)(param_1 + 0xa24) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) & 0xfffffff8 | *(uint *)(param_1 + 0x13c) & 3 | (param_3 & 1) << 2
  ;
  FUN_00f0d7fc(param_1 + 0x9a0,param_4);
  FUN_00f0d75c(param_1 + 0x9a0,param_5);
  bVar4 = *param_6;
  uVar8 = *(ulong *)(param_6 + 8);
  uVar10 = (ulong)(bVar4 >> 1);
  uVar2 = uVar10;
  if ((bVar4 & 1) != 0) {
    uVar2 = uVar8;
  }
  if (uVar2 != 0) {
    pbVar9 = *(byte **)(param_6 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar9 = param_6 + 1;
    }
    FUN_00a9bbc4(param_1 + 0xb8,pbVar9);
    bVar4 = *param_6;
    uVar8 = *(ulong *)(param_6 + 8);
    uVar10 = (ulong)(bVar4 >> 1);
  }
  if ((bVar4 & 1) != 0) {
    uVar10 = uVar8;
  }
  *(uint *)(param_1 + 0x1004) =
       *(uint *)(param_1 + 0x1004) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1004) & 3 | (uint)(uVar10 == 0) << 2;
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  switch(param_8) {
  case 0:
    pcVar6 = "lobby_position_captain";
    break;
  case 1:
    pcVar6 = "lobby_position_jungle";
    break;
  case 2:
    pcVar6 = "lobby_position_top";
    break;
  case 3:
    pcVar6 = "lobby_position_middle";
    break;
  case 4:
    pcVar6 = "lobby_position_bottom";
    break;
  default:
    goto switchD_00aeb124_default;
  }
  FUN_008fa54c(local_88,pcVar6);
  FUN_008fce60(local_70,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
switchD_00aeb124_default:
  if (param_7 == '\0') {
    pcVar6 = "rolepicker_roam";
LAB_00aeb1c0:
    FUN_008fa54c(local_88,pcVar6);
    FUN_008fce60(local_70,local_88);
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else {
    if (param_7 == '\x01') {
      pcVar6 = "rolepicker_jungle";
      goto LAB_00aeb1c0;
    }
    if (param_7 == '\x05') {
      pcVar6 = "rolepicker_lane";
      goto LAB_00aeb1c0;
    }
  }
  lVar1 = param_1 + 0xe90;
  pvVar3 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar3 = local_60;
  }
  FUN_00f0e578(lVar1,pvVar3);
  if (param_9 == '\x02') {
    local_88[0] = 0xff3ac8f6;
  }
  else if (param_9 == '\x01') {
    local_88[0] = 0xfffae076;
  }
  else {
    if (param_9 != '\0') {
      uVar11 = 0;
      local_88[0] = 0xffffffff;
      goto LAB_00aeb268;
    }
    local_88[0] = 0xff5271eb;
  }
  uVar11 = 1;
LAB_00aeb268:
  FUN_00f0e670(lVar1,local_88,2);
  bVar4 = *(byte *)(param_1 + 0x1070);
  uVar7 = (uint)bVar4;
  if (bVar4 != 0) {
    FUN_00ceace8();
    uVar7 = FUN_00ceb09c();
    uVar7 = (uVar7 & 1) << 2;
  }
  *(uint *)(param_1 + 0xf14) = *(uint *)(param_1 + 0xf14) & 0xfffffffb | uVar7;
  FUN_00f0e670(param_1 + 0xcb0,local_88,2);
  uVar11 = uVar11 & *(byte *)(param_1 + 0x1070) != 0;
  *(uint *)(param_1 + 0xd34) =
       *(uint *)(param_1 + 0xd34) & 0xfffffff8 | *(uint *)(param_1 + 0xd34) & 3 | uVar11 << 2;
  *(uint *)(param_1 + 0xe24) =
       *(uint *)(param_1 + 0xe24) & 0xfffffff8 | *(uint *)(param_1 + 0xe24) & 3 | uVar11 << 2;
  pvVar3 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar3 = local_60;
  }
  FUN_00f0e578(lVar1,pvVar3);
  FUN_00aeb340(param_1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aeb340(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x1a8;
  if ((*(float *)(param_1 + 0x1e8) != -100.0) || (*(float *)(param_1 + 0x1ec) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1e8) = 0xc2c80000;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0xb10) != 0.0) || (*(float *)(param_1 + 0xb14) != -100.0)) {
    *(undefined8 *)(param_1 + 0xb10) = 0xc2c8000000000000;
    FUN_0091ada4(param_1 + 0xad0);
  }
  local_70 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xad0) + 0x28))(param_1 + 0xad0,&local_70);
  if ((*(float *)(param_1 + 0xc00) != 0.0) || (*(float *)(param_1 + 0xc04) != 100.0)) {
    *(undefined8 *)(param_1 + 0xc00) = 0x42c8000000000000;
    FUN_0091ada4(param_1 + 0xbc0);
  }
  local_70 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0xbc0) + 0x28))(param_1 + 0xbc0,&local_70);
  if ((*(float *)(param_1 + 0x840) != 0.0) || (*(float *)(param_1 + 0x844) != 94.0)) {
    *(undefined8 *)(param_1 + 0x840) = 0x42bc000000000000;
    FUN_0091ada4(param_1 + 0x800);
  }
  local_70 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0x800) + 0x28))(param_1 + 0x800,&local_70);
  if ((*(float *)(param_1 + 0xcf0) != 100.0) || (*(float *)(param_1 + 0xcf4) != -100.0)) {
    *(undefined8 *)(param_1 + 0xcf0) = 0xc2c8000042c80000;
    FUN_0091ada4(param_1 + 0xcb0);
  }
  if ((*(float *)(param_1 + 0xde0) != 100.0) || (*(float *)(param_1 + 0xde4) != -100.0)) {
    *(undefined8 *)(param_1 + 0xde0) = 0xc2c8000042c80000;
    FUN_0091ada4(param_1 + 0xda0);
  }
  if ((*(float *)(param_1 + 0xed0) != 94.0) || (*(float *)(param_1 + 0xed4) != -94.0)) {
    *(undefined8 *)(param_1 + 0xed0) = 0xc2bc000042bc0000;
    FUN_0091ada4(param_1 + 0xe90);
  }
  lVar2 = param_1 + 0x9a0;
  FUN_00f0db64(0x432a0000,0x3f000000,0x3f800000,lVar2);
  fVar5 = (float)FUN_00f0d4e0(lVar2);
  if (fVar5 <= 170.0) {
    if ((*(float *)(param_1 + 0x9f0) != 0.5) || (*(float *)(param_1 + 0x9f4) != 1.0)) {
      *(undefined8 *)(param_1 + 0x9f0) = 0x3f8000003f000000;
      FUN_0091ada4(lVar2);
    }
    if (*(float *)(param_1 + 0x9e0) == 0.0) goto LAB_00aeb5f8;
    *(undefined4 *)(param_1 + 0x9e0) = 0;
  }
  else {
    if ((*(float *)(param_1 + 0x9f0) != 0.0) || (*(float *)(param_1 + 0x9f4) != 1.0)) {
      *(undefined8 *)(param_1 + 0x9f0) = 0x3f80000000000000;
      FUN_0091ada4(lVar2);
    }
    if (*(float *)(param_1 + 0x9e0) == -84.0) goto LAB_00aeb5f8;
    *(undefined4 *)(param_1 + 0x9e0) = 0xc2a80000;
  }
  FUN_0091ada4(lVar2);
LAB_00aeb5f8:
  puVar3 = &DAT_01bb0440;
  if (*(char *)(param_1 + 0x1070) != '\0') {
    puVar3 = &DAT_01bb043c;
  }
  FUN_00b128a0(0x3ecccccd,lVar1,puVar3);
  puVar3 = &DAT_01bb0440;
  if (*(char *)(param_1 + 0x1070) != '\0') {
    puVar3 = &DAT_01bb043c;
  }
  FUN_00b12b64(0x3dcccccd,lVar1,puVar3);
  puVar3 = &DAT_01bb0440;
  if (*(char *)(param_1 + 0x1070) != '\0') {
    puVar3 = &DAT_01bb043c;
  }
  FUN_00f0e670(param_1 + 0xf80,puVar3,2);
  FUN_00f13f08(0x43480000,0x43480000,param_1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aeb6a4(long param_1)

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
  FUN_00f0e6bc(0,lVar1);
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 4;
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
  FUN_00efcac4(0x3eb33333,puVar4);
  FUN_00efcb24(puVar4,FUN_0091aa80);
  FUN_00f022a0(lVar1,puVar4);
  return;
}




void FUN_00aeb7c0(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
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
    FUN_00efdee0(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efdf2c(0x3f800000,puVar3,param_1 + 0xb8);
  FUN_00efcac4(0x3da3d70a,puVar3);
  FUN_00f022a0(param_1 + 0xb8,puVar3);
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f400000,puVar3);
  FUN_00efcac4(0x3da3d70a,puVar3);
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) | 4;
  FUN_00f02308(param_1 + 0x710,puVar3,puVar4,puVar5,0);
  return;
}




void FUN_00aebab4(long *param_1)

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
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  
  FUN_00ed8798();
  FUN_00948cd8(param_1 + 0x17);
  lVar20 = 0xd0;
  *param_1 = (long)&PTR_FUN_027d9468;
  param_1[0x17] = (long)&PTR_FUN_027d95b8;
  do {
    FUN_00aef470((long)param_1 + lVar20);
    lVar20 = lVar20 + 0x1000;
  } while (lVar20 != 0x80d0);
  plVar1 = param_1 + 0x101a;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x1031;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x108b;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x10a9;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x10c7;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x10e5;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 0x10f6;
  *plVar6 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x1114;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x1132;
  FUN_00f017e8(plVar9);
  *plVar9 = (long)&PTR_FUN_027c1f80;
  plVar10 = param_1 + 0x1143;
  FUN_00f0e4a8(plVar10);
  plVar11 = param_1 + 0x1161;
  FUN_00f0d160(plVar11);
  FUN_00f0d160();
  plVar12 = param_1 + 0x11ad;
  FUN_00f0d160(plVar12);
  FUN_008fcdb8(param_1 + 0x11d3,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x11d6) = 0xff322213;
  *(undefined4 *)((long)param_1 + 0x8eb4) = 0xff000000;
  param_1[0x11d7] = 0xff322213;
  param_1[0x11d8] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x11d9) = 0;
  *(undefined4 *)(param_1 + 0x11db) = 0;
  param_1[0x11da] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x104f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x106d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_00f023ec(plVar9,plVar10,1);
  FUN_00f023ec(plVar9,plVar11,1);
  FUN_00aec53c(param_1);
  uVar16 = FUN_0092ea9c();
  FUN_00f023ec(param_1 + 0xc68,plVar12,1);
  *(uint *)((long)param_1 + 0x8154) = *(uint *)((long)param_1 + 0x8154) & 0xffffffeb;
  if ((*(float *)(param_1 + 0x1024) != 0.0) || (*(float *)((long)param_1 + 0x8124) != 0.5)) {
    param_1[0x1024] = 0x3f00000000000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar14 = *(uint *)((long)param_1 + 0x84dc);
  if ((uVar14 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x84dc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_1 + 0x1095) != 0.0) || (*(float *)((long)param_1 + 0x84ac) != 0.5)) {
    param_1[0x1095] = 0x3f00000000000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7fa,2);
  uVar14 = *(uint *)((long)param_1 + 0x85cc);
  if ((uVar14 & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x85cc) = uVar14 & 0xffff807f | 0x600;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x10b3) != 1.0) || (*(float *)((long)param_1 + 0x859c) != 0.5)) {
    param_1[0x10b3] = 0x3f0000003f800000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar5,&DAT_01bee7fa,2);
  uVar14 = *(uint *)((long)param_1 + 0x86bc);
  if ((uVar14 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x86bc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0xc80;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x10d1) != 1.0) || (*(float *)((long)param_1 + 0x868c) != 0.5)) {
    param_1[0x10d1] = 0x3f0000003f800000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"main_menu_fog_resting");
  FUN_00f0e670(plVar8,&DAT_01bee7f6,2);
  uVar14 = *(uint *)((long)param_1 + 0x8924);
  if ((uVar14 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x8924) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2600;
    FUN_0091ada4(plVar8);
  }
  if ((*(float *)(param_1 + 0x111e) != 0.0) || (*(float *)((long)param_1 + 0x88f4) != 0.5)) {
    param_1[0x111e] = 0x3f00000000000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"main_menu_fog_active");
  FUN_00f0e670(plVar7,&DAT_01bb04e0,2);
  uVar14 = *(uint *)((long)param_1 + 0x8834);
  if ((uVar14 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x8834) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x7900;
    FUN_0091ada4(plVar7);
  }
  if ((*(float *)(param_1 + 0x1100) != 0.0) || (*(float *)((long)param_1 + 0x8804) != 0.5)) {
    param_1[0x1100] = 0x3f00000000000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  if ((*(float *)(param_1 + 0x103b) != 0.0) || (*(float *)((long)param_1 + 0x81dc) != 0.5)) {
    param_1[0x103b] = 0x3f00000000000000;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x1059) != 0.0) || (*(float *)((long)param_1 + 0x82cc) != 0.5)) {
    param_1[0x1059] = 0x3f00000000000000;
    FUN_0091ada4(param_1 + 0x104f);
  }
  if ((*(float *)(param_1 + 0x1077) != 0.0) || (*(float *)((long)param_1 + 0x83bc) != 0.5)) {
    param_1[0x1077] = 0x3f00000000000000;
    FUN_0091ada4(param_1 + 0x106d);
  }
  *(uint *)((long)param_1 + 0x83ec) = *(uint *)((long)param_1 + 0x83ec) & 0xfffffffb;
  uVar14 = *(uint *)((long)param_1 + 0x8a14);
  if ((uVar14 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x8a14) = uVar14 & 0xffff807f;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_frame");
  FUN_00f0d92c(plVar11,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68,&DAT_01bee7fa);
  FUN_00f0d92c(param_1 + 0x1187,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68,&DAT_01bee7f6);
  uVar14 = *(uint *)((long)param_1 + 0x8cbc);
  if ((uVar14 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x8cbc) = uVar14 & 0xffff807f;
    FUN_0091ada4(param_1 + 0x1187);
  }
  fVar15 = DAT_02be3668;
  if (((uVar16 & 1) != 0) &&
     ((*(float *)(param_1 + 9) != DAT_02be3668 || (*(float *)((long)param_1 + 0x4c) != DAT_02be3668)
      ))) {
    *(float *)(param_1 + 9) = DAT_02be3668;
    *(float *)((long)param_1 + 0x4c) = fVar15;
    FUN_0091ada4(param_1);
  }
  uVar18 = FUN_00e6ce7c("MENU_PROFILE_PLAYER_TITLE",0);
  FUN_00f0d75c(param_1 + 0xcb5,uVar18);
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar16 & 1) == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  puVar19 = *ppuVar13;
  if (puVar19 != (undefined *)0x0) {
    param_1[0xe18] = (long)puVar19;
    FUN_00f0d92c(param_1 + 0xcb5,puVar19,&DAT_01bee7fa);
  }
  FUN_00f0d92c(plVar12,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x11b7) != 0.5) || (*(float *)((long)param_1 + 0x8dbc) != 0.5)) {
    param_1[0x11b7] = 0x3f0000003f000000;
    FUN_0091ada4(plVar12);
  }
  uVar16 = *(uint *)((long)param_1 + 0x675c);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x675c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_0091ada4(param_1 + 0xcdb);
  }
  FUN_00b1a8e8(param_1 + 0xd01,"ASCENSION");
  FUN_00b1a8e8(param_1 + 0xd01,"ACCOUNT.*");
  plVar1 = param_1 + 0xb01;
  FUN_00b1a8e8(plVar1,"REWARDS.BASIC_MYSTERY*");
  FUN_00b1a8e8(plVar1,"REWARDS.EPIC_MYSTERY*");
  FUN_00b1a8e8(plVar1,"MARKET.*");
  uVar17 = FUN_00e6a474("main_nav_heroes");
  uVar16 = FUN_0091ed5c("main_nav_heroes",uVar17,0x1234);
  plVar1 = param_1 + 0x301;
  *(uint *)((long)param_1 + 0x13c4) =
       *(uint *)((long)param_1 + 0x13c4) & 0x80000000 |
       *(uint *)((long)param_1 + 0x13c4) & 0x7fff | (uVar16 & 0xffff) << 0xf;
  FUN_00b1a8e8(plVar1,"TUTORIAL");
  FUN_00b1a8e8(plVar1,"TALENTS.UPGRADE.*");
  FUN_00b1a8e8(plVar1,"TALENTS.NEWTALENT.*");
  FUN_00b1a8e8(param_1 + 0x501,"NEWS.*");
  FUN_00b1a8e8(param_1 + 0x101,"PARTY.PENDING_CHATS");
  plVar1 = param_1 + 0x901;
  FUN_00b1a8e8(plVar1,"FRIENDS.*");
  FUN_00b1a8e8(plVar1,&DAT_01bb05c4);
  FUN_00b1a8e8(plVar1,"TEAM.*");
  FUN_00b1a8e8(param_1 + 0x701,"ACADEMY.*");
  *(uint *)((long)param_1 + 0x87ac) = *(uint *)((long)param_1 + 0x87ac) & 0xfffffffb;
  return;
}

