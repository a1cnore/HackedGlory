// functions/00c3e — 18 functions
#include "libGameKindred.h"




undefined8 FUN_00c3e000(void)

{
  return 0;
}




void FUN_00c3e008(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong *puVar13;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027fb188;
  FUN_00f1306c(plVar1);
  plVar2 = param_3 + 0x42;
  FUN_00f017e8(plVar2);
  param_3[0x42] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_3 + 0x53);
  FUN_00f0e4a8();
  plVar3 = param_3 + 0x8f;
  FUN_00f0d160(plVar3);
  plVar4 = param_3 + 0xb5;
  FUN_00f13ca4(plVar4);
  plVar5 = param_3 + 0xcc;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_3 + 0xea;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_3 + 0x108;
  FUN_00f0d160(plVar7);
  FUN_00b1a1c4(param_3 + 0x12e);
  thunk_FUN_00e7051c(param_3 + 0x202,param_6);
  *(undefined4 *)(param_3 + 0x204) = param_1;
  *(undefined4 *)((long)param_3 + 0x1024) = param_2;
  *(undefined4 *)(param_3 + 0x205) = param_4;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,param_3 + 0x53,1);
  FUN_00f023ec(plVar2,param_3 + 0x71,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f133a4(plVar1,plVar7,1);
  FUN_00f133a4(plVar1,param_3 + 0x12e,1);
  uVar11 = FUN_00e6a474(param_5);
  uVar12 = FUN_0091ed5c(param_5,uVar11,0x1234);
  *(uint *)((long)param_3 + 0x62c) =
       *(uint *)((long)param_3 + 0x62c) & 0x80000000 |
       *(uint *)((long)param_3 + 0x62c) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  FUN_00f0e548(plVar5,PTR_s_build___MenuHomepagePartsCommon__02be35e8,param_5);
  puVar10 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  FUN_008fa54c(local_a8,param_5);
  puVar13 = (ulong *)FUN_0090de84(local_a8,"_off",4);
  local_80 = (void *)puVar13[2];
  uStack_88 = puVar13[1];
  local_90 = *puVar13;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  pvVar8 = (void *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pvVar8 = local_80;
  }
  FUN_00f0e548(plVar6,puVar10,pvVar8);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0d75c(plVar7,param_3 + 0x202);
  FUN_00c3e30c(param_3,0);
  *(uint *)((long)param_3 + 0x294) = *(uint *)((long)param_3 + 0x294) & 0xfffffffb;
  (**(code **)(*param_3 + 0x90))(param_3);
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3e30c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x750;
  lVar3 = param_1 + 0x660;
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 0x660;
    lVar3 = param_1 + 0x750;
  }
  uVar4 = FUN_00efee28(0x3f800000,0x3e800000,FUN_009b6a3c);
  uVar5 = FUN_00efee28(0,0x3e800000,FUN_009b6a3c);
  FUN_00f01980(lVar3);
  FUN_00f022a0(lVar3,uVar4);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar5);
  if ((param_2 & 1) == 0) {
    local_5c = 0xff968282;
  }
  else {
    local_5c = 0xffffffff;
  }
  param_1 = param_1 + 0x840;
  uVar4 = FUN_00eff224(0x3e800000,param_1,&local_5c,FUN_009b6a3c);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,uVar4);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00c3e438(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x58))(param_3,0,0,0,1);
  return CONCAT44((int)(param_2 / *(float *)((long)param_3 + 0x104)),
                  (int)(fVar1 / *(float *)(param_3 + 0x20)));
}




void FUN_00c3e48c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f13db4();
  if ((*(byte *)(param_3 + 0x294) >> 2 & 1) == 0) {
    FUN_00e705c8(&local_68,&DAT_01bb47ff);
    FUN_00f0d75c(param_3 + 0x478,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  lVar1 = param_3 + 0x750;
  lVar2 = param_3 + 0x5a8;
  uVar5 = FUN_00f0e700(lVar1);
  local_68 = CONCAT44(param_2,uVar5);
  FUN_00f13f18(lVar2,&local_68);
  *(uint *)(param_3 + 0x294) = *(uint *)(param_3 + 0x294) & 0xffffffbf;
  *(uint *)(param_3 + 0x9f4) = *(uint *)(param_3 + 0x9f4) & 0xffffffbf;
  FUN_00f07940(0,0,param_3 + 0x660,6,lVar2,6);
  fVar6 = 0.0;
  FUN_00f07940(0,0,lVar1,6,lVar2,6);
  lVar3 = param_3 + 0x840;
  FUN_00f0d4e0(lVar3);
  FUN_00f07940(0,fVar6 * -0.5,lVar2,8,param_3,8);
  FUN_00f07b18(0xc1a00000,lVar3,0,lVar2,2);
  FUN_00f07b18(0,lVar3,4,lVar2,4);
  FUN_00f07940(0,0,param_3 + 0x210,8,lVar2,8);
  FUN_00f07940(*(undefined4 *)(param_3 + 0x1020),*(undefined4 *)(param_3 + 0x1024),param_3 + 0x970,8
               ,lVar1,1);
  param_3 = param_3 + 0xb8;
  FUN_00f130f0(param_3,&DAT_03218f08);
  FUN_00f13238(param_3);
  FUN_00f07a18(0,0,param_3,8);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3e660(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x84);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c3e680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_00c3e688(long *param_1,uint param_2)

{
  long *plVar1;
  
  *(uint *)((long)param_1 + 0x62c) =
       *(uint *)((long)param_1 + 0x62c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x62c) & 3 | (~param_2 & 1) << 2;
  *(uint *)((long)param_1 + 0x294) =
       *(uint *)((long)param_1 + 0x294) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x294) & 3 | (param_2 & 1) << 2;
  if ((~param_2 & 1) == 0) {
    plVar1 = param_1 + 0x53;
    if (param_1[0x6d] == 0) {
      FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_home_in_queue");
    }
    if (param_1[0x8b] == 0) {
      FUN_00f0e548(param_1 + 0x71,PTR_s_build___MenuHomepagePartsCommon__02be35e8,
                   "main_nav_circle_in_queue");
    }
    FUN_00f07940(0,0,plVar1,8,param_1 + 0x42,8);
    FUN_00f07940(0,0,param_1 + 0x71,8,plVar1,8);
    FUN_00f07940(0,0,param_1 + 0x8f,8,plVar1,8);
    plVar1 = (long *)FUN_00e6ce7c("MENU_FRIENDS_STATUS_MATCHING",0);
  }
  else {
    plVar1 = param_1 + 0x202;
  }
  FUN_00f0d75c(param_1 + 0x108,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00c3e7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c3e7b8(long param_1)

{
  if ((*(byte *)(param_1 + 0x294) >> 2 & 1) == 0) {
    return;
  }
  FUN_00f0d75c(param_1 + 0x478);
  return;
}




void FUN_00c3e7cc(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar2 = (param_2 & 1) == 0;
  uVar7 = 0x3f800000;
  if (bVar2) {
    uVar7 = 0;
  }
  uVar8 = 0x3f800000;
  if (bVar2) {
    uVar8 = 0x3ecccccd;
  }
  puVar3 = (ushort *)FUN_00efee28(uVar7,uVar8,FUN_0091aa80);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc9c0(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efca10(puVar6,param_2 & 1);
  FUN_00f01980(param_1 + 0xb8);
  puVar4 = puVar3;
  if ((param_2 & 1) != 0) {
    puVar4 = puVar6;
    puVar6 = puVar3;
  }
  FUN_00f02308(param_1 + 0xb8,puVar4,puVar6,0);
  return;
}




void FUN_00c3e8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_3 + 0xb8;
  if ((*(uint *)(param_3 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x13c) = *(uint *)(param_3 + 0x13c) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_3 + 0x100) != 2.0) || (*(float *)(param_3 + 0x104) != 2.0)) {
    *(undefined8 *)(param_3 + 0x100) = 0x4000000040000000;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efed6c(param_1);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar4 = FUN_00efee28(0x3f800000,param_2,FUN_0091aa80);
  uVar5 = FUN_00eff63c(0x3f800000,0x3f800000,param_2,FUN_0091aa80);
  FUN_00efcea4(puVar7,uVar4,uVar5,0);
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar3,puVar7,0);
  return;
}




void FUN_00c3ea6c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined8 local_58;
  long *plStack_50;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027fb2d0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x36;
  FUN_00f13ca4(plVar2);
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  FUN_00e70510(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  uVar4 = FUN_0093d808();
  if ((uVar4 & 1) != 0) {
    *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) & 0xfffffffb;
  }
  FUN_00f0e548(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"VGX_logo");
  fVar6 = (float)FUN_00f002bc();
  FUN_00f13f68(param_1,(ulong)(uint)(int)fVar6 << 0x20 | 0x102);
  local_58 = CONCAT62(local_58._2_6_,0x70);
  FUN_00f14070(param_1,&local_58);
  lVar5 = FUN_00f136e0();
  param_1[0x4d] = lVar5;
  FUN_00f13fd8(plVar2,lVar5);
  lVar5 = FUN_00a06b24();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00c3f0e8;
  plStack_50 = param_1;
  local_48 = param_1;
  FUN_00933ec0(lVar5 + 0x40,&local_58);
  lVar5 = FUN_00a06b24();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00c3f230;
  plStack_50 = param_1;
  local_48 = param_1;
  FUN_00c2de34(lVar5 + 0x50,&local_58);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3ebe0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x4e);
  *param_1 = &PTR_FUN_027fb2d0;
  if (*(uint *)(param_1 + 0x4e) != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      plVar1 = *(long **)(param_1[0x4f] + lVar7);
      if (plVar1 == (long *)0x0) {
        puVar6 = (undefined8 *)(param_1[0x4f] + uVar8 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar4 = (ulong)*(uint *)(param_1 + 0x4e);
        puVar6 = (undefined8 *)(param_1[0x4f] + lVar7);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
      *puVar6 = 0;
    } while (uVar8 < uVar4);
  }
  lVar2 = FUN_00a06b24();
  lVar5 = (ulong)*(uint *)(lVar2 + 0x40) << 5;
  lVar7 = *(long *)(lVar2 + 0x48);
  do {
    lVar3 = lVar7;
    if (lVar5 == 0) goto LAB_00c3ec88;
    lVar5 = lVar5 + -0x20;
    lVar7 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar2 + 0x40),lVar3);
LAB_00c3ec88:
  lVar2 = FUN_00a06b24();
  lVar5 = (ulong)*(uint *)(lVar2 + 0x50) << 5;
  lVar7 = *(long *)(lVar2 + 0x58);
  do {
    lVar3 = lVar7;
    if (lVar5 == 0) goto LAB_00c3ecb8;
    lVar5 = lVar5 + -0x20;
    lVar7 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00bd28cc((uint *)(lVar2 + 0x50),lVar3);
LAB_00c3ecb8:
  if ((void *)param_1[0x51] != (void *)0x0) {
    operator_delete__((void *)param_1[0x51]);
    param_1[0x51] = 0;
    param_1[0x50] = 0;
  }
  if ((void *)param_1[0x4f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4f]);
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c3ed24(void *param_1)

{
  FUN_00c3ebe0();
  operator_delete(param_1);
  return;
}




void FUN_00c3ed48(void)

{
  return;
}




uint FUN_00c3ed4c(long *param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  void *local_90;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0x4e] == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00f15198(param_1[0x4d],0x28);
    uVar5 = *(uint *)(param_1 + 0x4e);
  }
  pvVar2 = operator_new(0x1030);
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*param_2 + 0x40))(param_2);
  FUN_00c3e008(pvVar2,uVar5,uVar3,uVar4);
  local_90 = pvVar2;
  FUN_00c3eef8(param_1 + 0x4e,&local_90);
  FUN_00f023ec(param_1 + 0x36,local_90,1);
  FUN_00f1515c(param_1[0x4d],local_90,1,2);
  local_60 = DAT_03210f60;
  local_88 = FUN_00c3ef80;
  local_78 = 0;
  uStack_70 = 0;
  plStack_80 = param_1;
  local_68 = (ulong)uVar5;
  FUN_009693a0((long)local_90 + 8,&local_88);
  local_88 = FUN_00c3ef80;
  local_60 = DAT_03210f8c;
  local_78 = 0;
  uStack_70 = 0;
  plStack_80 = param_1;
  local_68 = (ulong)uVar5;
  FUN_009693a0((long)local_90 + 8,&local_88);
  *(uint *)((long)local_90 + 0x84) = *(uint *)((long)local_90 + 0x84) | 0x10;
  (**(code **)(*param_2 + 0x38))(param_2,(long)local_90 + 0x970);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3eef8(uint *param_1,undefined8 *param_2)

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
    FUN_00c3f86c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c3ef80(long param_1)

{
  undefined8 *puVar1;
  undefined4 in_w4;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,in_w4);
    return;
  }
  return;
}




void FUN_00c3ef9c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_3 + 0x278) + 8);
  lVar4 = plVar2[8];
  fVar3 = (float)(**(code **)(*plVar2 + 0x48))();
  local_40 = CONCAT44((float)((ulong)lVar4 >> 0x20) + param_2 * 0.5,(float)lVar4 + fVar3 * 0.5);
  FUN_00f0862c(&local_40,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x278) + 8) + 0x20));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

