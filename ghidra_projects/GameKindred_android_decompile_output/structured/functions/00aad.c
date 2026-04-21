// functions/00aad — 11 functions
#include "libGameKindred.h"




void FUN_00aad020(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 local_90 [2];
  void *local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027d3638;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x67;
  FUN_00c939c4(plVar3,0);
  plVar4 = param_1 + 0x1e1;
  FUN_00f10d7c(plVar4);
  plVar5 = param_1 + 0x202;
  FUN_00f10d7c(plVar5);
  plVar6 = param_1 + 0x224;
  param_1[0x223] = 0;
  FUN_00f1306c(plVar6);
  lVar10 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar10 + 0x1278);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined4 *)((long)param_1 + 0x172c) = 0xff;
  *(undefined1 *)((long)param_1 + 0x1732) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  lVar10 = 0;
  do {
    lVar7 = (long)param_1 + lVar10 + 0x1278;
    FUN_00f0e548(lVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_person_counter");
    FUN_00f133a4(plVar6,lVar7,1);
    *(uint *)((long)param_1 + lVar10 + 0x12fc) =
         *(uint *)((long)param_1 + lVar10 + 0x12fc) & 0xfffffffb;
    if (lVar10 != 0) {
      FUN_00f07b18(0,lVar7,3,lVar7 + -0xf0,1);
    }
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  FUN_00f0e548(plVar2,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"shiny_checkbox_off");
  FUN_00f13f08(0x432a0000,0x432a0000,plVar2);
  *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) & 0xffffffbb;
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"shiny_checkbox_off");
  FUN_00f13f08(0x432a0000,0x432a0000,plVar1);
  *(uint *)((long)param_1 + 0x1dc) = *(uint *)((long)param_1 + 0x1dc) & 0xffffffbb;
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xffffffbf;
  FUN_00c9228c(plVar3,0);
  puVar9 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  FUN_008fa54c(local_90,"shiny_checkbox_off");
  FUN_00c93a88(plVar3,puVar9,local_90,&DAT_0320ffa8);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00c93b48(plVar3,&DAT_01ba3e5c);
  local_90[0] = 0x42f0000042f00000;
  FUN_00f13f18(plVar4,local_90);
  FUN_00f0e698(plVar5,0xb);
  local_90[0] = 0x42f0000042f00000;
  FUN_00f13f18(plVar5,local_90);
  *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) & 0xfffffffb;
  FUN_00f10dc8(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f07940(0,0,plVar1,8,param_1,8);
  FUN_00f07940(0,0,plVar3,8,plVar1,8);
  FUN_00f13238(param_1);
  FUN_00aad3b0(param_1,0);
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aad3b0(long param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1730) == '\0') {
    if ((~*(uint *)(param_1 + 0xf8c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0xf8c) = *(uint *)(param_1 + 0xf8c) | 0x7f80;
      FUN_0091ada4(param_1 + 0xf08);
    }
    if ((param_2 & 1) == 0) {
      FUN_00f0e670(param_1 + 0xf08,&DAT_01bee7fa,2);
      if ((*(float *)(param_1 + 0x48) != 1.0) || (*(float *)(param_1 + 0x4c) != 1.0)) {
        uVar1 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0x48) = uVar1;
        FUN_0091ada4(param_1);
      }
      *(uint *)(param_1 + 0x1dc) = *(uint *)(param_1 + 0x1dc) & 0xfffffffb;
    }
    else {
      if ((*(float *)(param_1 + 0x48) != 1.2) || (*(float *)(param_1 + 0x4c) != 1.2)) {
        *(undefined8 *)(param_1 + 0x48) = 0x3f99999a3f99999a;
        FUN_0091ada4(param_1);
      }
      *(uint *)(param_1 + 0x1dc) = *(uint *)(param_1 + 0x1dc) | 4;
      if (*(char *)(param_1 + 0x1731) == '\0') {
        FUN_00aad720(param_1);
      }
    }
    *(byte *)(param_1 + 0x1731) = param_2 & 1;
  }
  return;
}




void FUN_00aad4c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d3638;
  if ((long *)param_1[0x223] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x223] + 8))();
  }
  param_1[0x223] = 0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x2c7;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  param_1[0x224] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x23b);
  FUN_00f13d08(param_1 + 0x224);
  param_1[0x202] = &PTR_FUN_02827290;
  param_1[0x219] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x220);
  param_1[0x202] = &PTR_FUN_028266f0;
  param_1[0x219] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x21c);
  FUN_00f13d08(param_1 + 0x202);
  param_1[0x1e1] = &PTR_FUN_02827290;
  param_1[0x1f8] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x1ff);
  param_1[0x1e1] = &PTR_FUN_028266f0;
  param_1[0x1f8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1fb);
  FUN_00f13d08(param_1 + 0x1e1);
  FUN_00aad654(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aad654(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806448;
  if ((*(byte *)(param_1 + 0x177) & 1) != 0) {
    operator_delete((void *)param_1[0x179]);
  }
  if ((*(byte *)(param_1 + 0x174) & 1) != 0) {
    operator_delete((void *)param_1[0x176]);
  }
  param_1[0x156] = &PTR_FUN_028266f0;
  param_1[0x16d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x170);
  FUN_00f13d08(param_1 + 0x156);
  param_1[0x138] = &PTR_FUN_028266f0;
  param_1[0x14f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x152);
  FUN_00f13d08(param_1 + 0x138);
  FUN_00f13d08(param_1 + 0x121);
  FUN_00c925cc(param_1);
  return;
}




void FUN_00aad6fc(void *param_1)

{
  FUN_00aad4c8();
  operator_delete(param_1);
  return;
}




void FUN_00aad720(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = param_3 + 0x49;
  uStack_5c = param_2;
  local_60 = (**(code **)(*param_3 + 0x50))();
  FUN_00f13f18(plVar1,&local_60);
  if ((*(float *)(param_3 + 0x53) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x29c) != DAT_03218f08._4_4_)) {
    param_3[0x53] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00f01980(plVar1);
  uVar5 = *(uint *)((long)param_3 + 0x2cc) | 4;
  *(uint *)((long)param_3 + 0x2cc) = uVar5;
  if ((*(float *)(param_3 + 0x52) != 1.0) || (*(float *)((long)param_3 + 0x294) != 1.0)) {
    lVar8 = NEON_fmov(0x3f800000,4);
    param_3[0x52] = lVar8;
    FUN_0091ada4(plVar1);
    uVar5 = *(uint *)((long)param_3 + 0x2cc);
  }
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  uVar3 = FUN_00efee28(0,0x3ecccccd,FUN_0091aa80);
  uVar4 = FUN_00eff63c(0x3fb9999a,0x3fb9999a,0x3ecccccd,FUN_0091aa80);
  lVar8 = DAT_03210d00;
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
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,uVar3,uVar4,0);
  FUN_00f022a0(plVar1,puVar7);
  lVar8 = DAT_03210d00;
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
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar1,puVar7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aad9ec(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) | 4;
  *(uint *)((long)param_1 + 0xf8c) = *(uint *)((long)param_1 + 0xf8c) & 0xfffffffb;
  plVar1 = param_1 + 0x202;
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  local_ac = param_2;
  lVar5 = FUN_00ce9ba0(&local_ac);
  if (lVar5 != 0) {
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    FUN_00e6a8a8(&local_a8,"portrait_%s",*(undefined8 *)(lVar5 + 0x10));
    if (param_1[0x21c] == 0) {
      FUN_00a9bbc4(plVar1,&local_a8);
      local_b8 = 0x4308000043080000;
      FUN_00f13f18(plVar1,&local_b8);
      FUN_00f10dc8(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
    }
    else {
      FUN_00f0e578(plVar1,&local_a8);
    }
    FUN_00f07940(0,0,plVar1,8,param_1,8);
  }
  fVar9 = *(float *)(param_1 + 9);
  if ((fVar9 != 1.2) || (fVar9 = *(float *)((long)param_1 + 0x4c), fVar9 != 1.2)) {
    param_1[9] = 0x3f99999a3f99999a;
    FUN_0091ada4(param_1);
  }
  if ((~*(uint *)((long)param_1 + 0x1094) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1094) = *(uint *)((long)param_1 + 0x1094) | 0x7f80;
    FUN_0091ada4(plVar1);
  }
  if (*(char *)((long)param_1 + 0x1732) != '\0') {
    *(undefined1 *)(param_1 + 0x2e6) = 1;
  }
  plVar2 = param_1 + 0x223;
  if ((long *)param_1[0x223] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x223] + 8))();
    *plVar2 = 0;
  }
  pvVar6 = operator_new(0x1738);
  FUN_00aad020();
  param_1[0x223] = (long)pvVar6;
  FUN_00aadcd8(pvVar6,(int)param_1[0x2e5]);
  if (*(char *)((long)param_1 + 0x1732) == '\0') {
    lVar5 = *plVar2;
  }
  else {
    lVar5 = *plVar2;
    *(undefined1 *)(lVar5 + 0x1730) = 1;
  }
  if ((*(float *)(lVar5 + 0x48) != 0.5) || (*(float *)(lVar5 + 0x4c) != 0.5)) {
    *(undefined8 *)(lVar5 + 0x48) = 0x3f0000003f000000;
    FUN_0091ada4(lVar5);
    lVar5 = *plVar2;
  }
  if ((~*(uint *)(lVar5 + 0xf8c) & 0x7f80) != 0) {
    *(uint *)(lVar5 + 0xf8c) = *(uint *)(lVar5 + 0xf8c) | 0x7f80;
    FUN_0091ada4(lVar5 + 0xf08);
    lVar5 = *plVar2;
  }
  (**(code **)(*param_1 + 0x78))(param_1,lVar5,1);
  fVar7 = (float)FUN_00f0eac0(plVar1);
  fVar9 = fVar9 * 0.5;
  fVar3 = fVar9 * 0.70710677;
  fVar8 = (float)(**(code **)(*(long *)param_1[0x223] + 0x50))(fVar7 * 0.5,fVar9);
  FUN_00f07940(fVar7 * 0.5 * 0.70710677 + fVar8 * 0.5 * 0.70710677 * 0.5,
               -fVar3 - fVar9 * 0.5 * 0.70710677 * 0.5,param_1[0x223],8,param_1,8);
  FUN_00aadd94(param_1,*(undefined4 *)((long)param_1 + 0x172c));
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aadcd8(long param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  
  *(undefined4 *)(param_1 + 0x1728) = param_2;
  switch(param_2) {
  case 0:
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
    pcVar1 = "lobby_position_captain";
    break;
  case 1:
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
    pcVar1 = "lobby_position_jungle";
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
    pcVar1 = "lobby_position_carry";
    break;
  case 6:
    ppuVar2 = &PTR_s_build___MenuDraftPartsCommon_tga_02be3618;
    pcVar1 = "draft_shrug_emoji";
    break;
  default:
    goto switchD_00aadd08_default;
  }
  FUN_00f0e548(param_1 + 0xf08,*ppuVar2,pcVar1);
switchD_00aadd08_default:
  FUN_00f07940(0,0,param_1 + 0xf08,8,param_1 + 0x338,8);
  return;
}




void FUN_00aadd94(long param_1,int param_2)

{
  *(int *)(param_1 + 0x172c) = param_2;
  if (*(long *)(param_1 + 0x1118) != 0) {
    param_1 = *(long *)(param_1 + 0x1118);
  }
  if (param_2 == 2) {
    FUN_00f0e670(param_1 + 0xf08,&DAT_01ba3e24,2);
    return;
  }
  if (param_2 == 1) {
    FUN_00f0e670(param_1 + 0xf08,&DAT_01ba3e20,2);
    return;
  }
  if (param_2 != 0) {
    FUN_00f0e670(param_1 + 0xf08,&DAT_01bee7fa,2);
    return;
  }
  FUN_00f0e670(param_1 + 0xf08,&DAT_01ba3e1c,2);
  return;
}




void FUN_00aade34(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0xffdb963b;
  if (param_4 == 2) {
    local_4c = 0xff00b6d4;
  }
  else if (2 < param_4) {
    local_4c = 0xff3c54db;
  }
  lVar3 = 0;
  lVar2 = param_3 + 0x1278;
  do {
    *(uint *)(lVar2 + 0x84) =
         (uint)(lVar3 < param_4) << 2 | (uint)(lVar3 < param_4) << 6 |
         *(uint *)(lVar2 + 0x84) & 0xffffffbb;
    FUN_00f0e670(lVar2,&local_4c,2);
    lVar3 = lVar3 + 1;
    lVar2 = lVar2 + 0xf0;
  } while (lVar3 != 5);
  lVar3 = param_3 + 0x1120;
  FUN_00f13238(lVar3);
  FUN_00f13e54(lVar3);
  FUN_00f07b18(param_2 * -0.5,lVar3,0,param_3,2);
  FUN_00f07b18(0,lVar3,4,param_3,4);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aadf5c(long *param_1)

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
  undefined8 uVar12;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d3788;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x4c;
  FUN_00aabd90(plVar3);
  plVar4 = param_1 + 0x20e;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x225;
  param_1[0x20e] = (long)&PTR_FUN_027d3b80;
  FUN_00aab9e4();
  plVar6 = param_1 + 0x30b;
  FUN_00aab9e4();
  plVar7 = param_1 + 0x3f1;
  FUN_00aab9e4();
  FUN_00aab9e4();
  plVar8 = param_1 + 0x5bd;
  FUN_00aab6d4(plVar8);
  plVar11 = param_1 + 0x694;
  FUN_00f13ca4(plVar11);
  plVar9 = param_1 + 0x6ab;
  param_1[0x694] = (long)&PTR_FUN_027d3b80;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_1 + 0x6c9;
  FUN_00f0e4a8(plVar10);
  *(undefined1 *)(param_1 + 0x6e7) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar8,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,param_1 + 0x4d7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f023ec(plVar11,plVar9,1);
  FUN_00f023ec(plVar11,plVar10,1);
  plVar11 = (long *)FUN_00f13624();
  (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  (**(code **)(*plVar11 + 0x58))(plVar11,plVar3);
  (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  plVar11 = (long *)FUN_00f13624();
  (**(code **)(*plVar11 + 0x78))(plVar11,0,5);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar8,2,10);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar5,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar6,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar7,2,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,param_1 + 0x4d7,2,2);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,5);
  FUN_00f13fd8(plVar4,plVar11);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_bg");
  uVar12 = FUN_00f13624();
  FUN_00f13fd8(plVar2,uVar12);
  FUN_00f0e548(param_1 + 0x2cf,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,"draft_info_btn");
  FUN_00f0e548(param_1 + 0x2ed,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,
               "draft_info_btn_press");
  FUN_00f0e548(param_1 + 0x3b5,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,"draft_skins_btn");
  FUN_00f0e548(param_1 + 0x3d3,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,
               "draft_skins_btn_press");
  FUN_00f0e548(param_1 + 0x581,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,"draft_exit_btn");
  FUN_00f0e548(param_1 + 0x59f,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,
               "draft_exit_btn_press");
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  *(byte *)(param_1 + 0x6c6) = *(byte *)(param_1 + 0x6c6) | 1;
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00c93864(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar12 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_WANT_HERO",0);
  FUN_00c938d4(plVar3,uVar12);
  FUN_00c9228c(plVar3,2);
  FUN_00f14070(plVar3,&DAT_03211038);
  FUN_00c928a0(0x41f00000,0,plVar3);
  FUN_00c93904(plVar3,3);
  FUN_00ecf888(plVar5,0);
  uVar12 = FUN_00e6ce7c("MENU_DRAFT_BUTTON_INFO",0);
  FUN_00f0d75c(param_1 + 0x2a9,uVar12);
  FUN_00aabb8c(plVar5);
  uVar12 = FUN_00e6ce7c("MENU_DRAFT_BUTTON_SKINS",0);
  FUN_00f0d75c(param_1 + 0x38f,uVar12);
  FUN_00aabb8c(plVar6);
  uVar12 = FUN_00e6ce7c("MAIN_CHARSELECT_LABEL_SWITCH_TEAMS",0);
  FUN_00f0d75c(param_1 + 0x475,uVar12);
  FUN_00aabb8c(plVar7);
  *(uint *)((long)param_1 + 0x200c) = *(uint *)((long)param_1 + 0x200c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2e6c) = *(uint *)((long)param_1 + 0x2e6c) & 0xfffffffb;
  return;
}

