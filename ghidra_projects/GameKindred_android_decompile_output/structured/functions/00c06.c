// functions/00c06 — 14 functions
#include "libGameKindred.h"




void FUN_00c06034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5870;
  FUN_00f0d3a4(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x62] = &PTR_FUN_02827290;
  param_1[0x79] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x80);
  param_1[0x62] = &PTR_FUN_028266f0;
  param_1[0x79] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7c);
  FUN_00f13d08(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_028266f0;
  param_1[0x5b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e);
  FUN_00f13d08(param_1 + 0x44);
  FUN_00f01868(param_1 + 0x33);
  FUN_00c034bc(param_1);
  return;
}




void FUN_00c06100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5870;
  FUN_00f0d3a4(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x62] = &PTR_FUN_02827290;
  param_1[0x79] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x80);
  param_1[0x62] = &PTR_FUN_028266f0;
  param_1[0x79] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7c);
  FUN_00f13d08(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_028266f0;
  param_1[0x5b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e);
  FUN_00f13d08(param_1 + 0x44);
  FUN_00f01868(param_1 + 0x33);
  FUN_00c034bc(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c061d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f5a70;
  FUN_00f13ca4(param_1 + 0x18);
  FUN_00f017e8(param_1 + 0x2f);
  plVar1 = param_1 + 0x40;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x5e;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x7c;
  FUN_00f0e4a8(plVar3);
  param_1[0x9a] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  param_1[0x9f] = 0x4248000043520000;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if ((*(float *)(param_1 + 0x68) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x344) != DAT_03218f08._4_4_)) {
    param_1[0x68] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x86) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x434) != DAT_03218f08._4_4_)) {
    param_1[0x86] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_item_node_highlighted")
  ;
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  plVar2 = param_1 + 0x19;
  local_50 = DAT_03210f58;
  local_78 = FUN_00c06538;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  local_78 = FUN_00c06538;
  local_50 = DAT_03210f84;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  local_50 = DAT_03210f5c;
  local_78 = FUN_00c06540;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  local_78 = FUN_00c06540;
  local_50 = DAT_03210f88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  local_50 = DAT_03210f60;
  local_78 = FUN_00c06548;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  local_78 = FUN_00c06548;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  local_50 = DAT_03210fa4;
  local_78 = thunk_FUN_00c07b7c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar2,&local_78);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsJoystick_tga_02be3480,"joystick_cancel");
  FUN_00f0e670(plVar1,&DAT_01bee802,2);
  uVar5 = *(uint *)((long)param_1 + 0x284);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x284) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
    uVar5 = *(uint *)((long)param_1 + 0x284);
  }
  *(uint *)((long)param_1 + 0x284) = uVar5 & 0xfffffffb | 0x10;
  FUN_00f13f08(0x437a0000,0x437a0000,plVar1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffbb;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffffffbf;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c06538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c07408(param_1,param_4);
  return;
}




void FUN_00c06540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c07520(param_1,param_4);
  return;
}




void FUN_00c06548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c079a8(param_1,param_4);
  return;
}




void FUN_00c06554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f5a70;
  param_1[0x7c] = &PTR_FUN_028266f0;
  param_1[0x93] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_028266f0;
  param_1[0x75] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x78);
  FUN_00f13d08(param_1 + 0x5e);
  param_1[0x40] = &PTR_FUN_028266f0;
  param_1[0x57] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5a);
  FUN_00f13d08(param_1 + 0x40);
  FUN_00f01868(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c06600(void *param_1)

{
  FUN_00c06554();
  operator_delete(param_1);
  return;
}




long FUN_00c06624(long param_1)

{
  return param_1 + 0xc0;
}




long FUN_00c0662c(long param_1)

{
  return param_1 + 0x178;
}




long FUN_00c06634(long param_1)

{
  return param_1 + 0x200;
}




long FUN_00c0663c(long param_1)

{
  return param_1 + 0x2f0;
}




void FUN_00c06644(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  long local_98;
  code *pcStack_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0x510) = 1;
  FUN_00c06e84();
  lVar1 = param_1 + 0x2f0;
  local_98 = CONCAT44(local_98._4_4_,0xffffde95);
  FUN_00f0e670(lVar1,&local_98,2);
  pcStack_90 = thunk_FUN_00c07c08;
  local_98 = param_1;
  FUN_00f02e98(0xbf800000,&local_98,0,1);
  *(undefined8 *)(param_1 + 0x500) = 0;
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
LAB_00c067a8:
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar12);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) goto LAB_00c067a8;
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efeb30(puVar11);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efeb88(0,0x410cbe4c,puVar11,param_1 + 0x500);
  FUN_00efcac4(0x40000000,puVar11);
  FUN_00efcb24(puVar11,FUN_00aa89f4);
  uVar4 = FUN_00efed6c(0x3f000000);
  FUN_00efd2dc(puVar12,puVar11,uVar4,0);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar11);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 != 0xffff) {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efeb30(puVar10);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      goto LAB_00c06950;
    }
  }
  puVar10 = (ushort *)0x0;
LAB_00c06950:
  FUN_00efeba8(0x3f800000,puVar10,param_1 + 0x504);
  FUN_00efcac4(0x3f800000,puVar10);
  FUN_00efcb24(puVar10,FUN_00aa89f4);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efeb30(puVar13);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efeba8(0,puVar13,param_1 + 0x504);
  FUN_00efcac4(0x3f800000,puVar13);
  FUN_00efcb24(puVar13,FUN_00aa89f4);
  uVar4 = FUN_00efed6c(0x3f000000);
  FUN_00efd2dc(puVar11,puVar10,puVar13,uVar4,0);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efce98(puVar10,puVar12,puVar11);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar12);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar12,puVar10,0);
  FUN_00efd3bc(puVar12);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar12);
  local_98 = CONCAT44(local_98._4_4_,0xffd2b277);
  param_1 = param_1 + 0x3e0;
  uVar4 = FUN_00eff108(0x3dcccccd,param_1,&local_98,0,2);
  uVar5 = FUN_00eff108(0x3e99999a,param_1,&DAT_01bee7fa,0,2);
  uVar6 = FUN_00eff108(0x3dcccccd,param_1,&local_98,0,2);
  uVar7 = FUN_00eff108(0x3e99999a,param_1,&DAT_01bee7fa,0,2);
  uVar8 = FUN_00efed6c(0x3fd9999a);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar12);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar12,uVar4,uVar5,uVar6,uVar7,uVar8,0);
  FUN_00efd3bc(puVar12);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar12);
  uVar4 = FUN_00eff108(0x3dcccccd,lVar1,&local_98,0,2);
  uVar5 = FUN_00eff108(0x3e99999a,lVar1,&DAT_01bee7fa,0,2);
  uVar6 = FUN_00eff108(0x3dcccccd,lVar1,&local_98,0,2);
  uVar7 = FUN_00eff108(0x3e99999a,lVar1,&DAT_01bee7fa,0,2);
  uVar8 = FUN_00efed6c(0x3fd9999a);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar12);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar12,uVar4,uVar5,uVar6,uVar7,uVar8,0);
  FUN_00efd3bc(puVar12);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar12);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c06e84(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((*(char *)(param_1 + 0x50d) == '\0') && (*(char *)(param_1 + 0x50a) == '\0')) {
    uVar4 = (uint)*(byte *)(param_1 + 0x510) << 2;
  }
  else {
    uVar4 = 4;
  }
  uVar3 = *(uint *)(param_1 + 0x374);
  lVar1 = param_1 + 0x2f0;
  uVar4 = uVar3 & 0xfffffffb | uVar4;
  *(uint *)(param_1 + 0x374) = uVar4;
  if (*(char *)(param_1 + 0x50d) == '\0') {
    if (*(char *)(param_1 + 0x50a) == '\0') {
      *(uint *)(param_1 + 0x464) =
           *(uint *)(param_1 + 0x464) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x510) << 2;
      goto LAB_00c06f28;
    }
    *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) | 4;
  }
  else {
    *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) | 4;
    if (*(char *)(param_1 + 0x50a) == '\0') {
LAB_00c06f28:
      cVar5 = '\0';
      uVar6 = 0x4c;
      if (*(char *)(param_1 + 0x510) != '\0') {
        uVar6 = 0xd8;
      }
      goto LAB_00c06f40;
    }
  }
  uVar6 = 0xd8;
  cVar5 = '\x01';
LAB_00c06f40:
  if ((uVar4 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_1 + 0x374) = uVar3 & 0xffff8000 | uVar4 & 0x7f | uVar6 << 7;
    FUN_0091ada4(lVar1);
    cVar5 = *(char *)(param_1 + 0x50a);
  }
  lVar2 = param_1 + 0x3e0;
  uVar4 = 0xd8;
  if ((cVar5 == '\0') && (uVar4 = 0x4c, *(char *)(param_1 + 0x510) != '\0')) {
    uVar4 = 0xd8;
  }
  uVar3 = *(uint *)(param_1 + 0x464);
  if ((uVar3 >> 7 & 0xff) != uVar4) {
    *(uint *)(param_1 + 0x464) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar4 << 7;
    FUN_0091ada4(lVar2);
  }
  fVar7 = *(float *)(param_1 + 0x1b8);
  fVar8 = *(float *)(param_1 + 0x1bc);
  if ((*(float *)(param_1 + 0x330) != fVar7) || (*(float *)(param_1 + 0x334) != fVar8)) {
    *(float *)(param_1 + 0x330) = fVar7;
    *(float *)(param_1 + 0x334) = fVar8;
    FUN_0091ada4(lVar1);
    fVar7 = *(float *)(param_1 + 0x1b8);
    fVar8 = *(float *)(param_1 + 0x1bc);
  }
  if ((*(float *)(param_1 + 0x420) != fVar7) || (*(float *)(param_1 + 0x424) != fVar8)) {
    *(float *)(param_1 + 0x420) = fVar7;
    *(float *)(param_1 + 0x424) = fVar8;
    FUN_0091ada4(lVar2);
  }
  if (*(char *)(param_1 + 0x50f) != '\0') {
    *(uint *)(param_1 + 0x284) =
         *(uint *)(param_1 + 0x284) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x509) << 2;
  }
  FUN_00f13f08(0x44162666,0x44162666,lVar1);
  FUN_00f13f08(0x432f0000,0x432f0000,lVar2);
  return;
}

