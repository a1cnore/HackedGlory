// functions/00c47 — 23 functions
#include "libGameKindred.h"




void FUN_00c471cc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_74;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0x110;
  FUN_00f0d7fc(plVar1,&DAT_01bee7fa);
  FUN_00f0da30(plVar1,1);
  local_70 = 0x4040000000000000;
  FUN_00f0da8c(plVar1,&local_70);
  FUN_00f0da80(plVar1,&DAT_01bc02e0);
  local_74 = 0xffffffff;
  if (*(char *)((long)param_1 + 0x1bd9) == '\0') {
    plVar2 = param_1 + 0x136;
    local_74 = 0xffddcbc6;
    FUN_00f0da30(plVar2,1);
    FUN_00f0da80(plVar2,&DAT_01bc02e0);
    local_70 = 0x4000000000000000;
    FUN_00f0da8c(plVar2,&local_70);
  }
  else {
    FUN_00f0da30(param_1 + 0x136,0);
  }
  iVar10 = *(int *)((long)param_1 + 0x25c);
  if (iVar10 == 2) {
    if (param_1[0x176] == 0) {
      FUN_00f0e548(param_1 + 0x15c,PTR_s_build___MenuHomepagePartsCommon__02be35e8,
                   "shiny_checkbox_on");
      iVar10 = *(int *)((long)param_1 + 0x25c);
      goto LAB_00c472f8;
    }
    *(uint *)((long)param_1 + 0xb64) = *(uint *)((long)param_1 + 0xb64) | 4;
  }
  else {
LAB_00c472f8:
    *(uint *)((long)param_1 + 0xb64) =
         *(uint *)((long)param_1 + 0xb64) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0xb64) & 3 | (uint)(iVar10 == 2) << 2;
    if (iVar10 != 2) {
      if (iVar10 == 1) {
        fVar18 = 0.8;
        fVar16 = 0.2;
      }
      else {
        fVar16 = 1.0;
        fVar18 = 1.0;
      }
      goto LAB_00c47344;
    }
  }
  fVar16 = 0.35;
  fVar18 = 1.0;
LAB_00c47344:
  if ((int)param_1[0x4b] == 2) {
    fVar18 = fVar18 * 0.2;
  }
  else if ((int)param_1[0x4b] == 1) {
    fVar16 = fVar16 * 0.15;
  }
  uVar8 = *(uint *)((long)param_1 + 0x7a4);
  fVar17 = 1.0;
  uVar13 = (uint)((1.0 - fVar16) * 255.0);
  uVar11 = uVar8 >> 7 & 0xff;
  if (uVar11 != uVar13) {
    *(uint *)((long)param_1 + 0x7a4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | (uVar13 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0xe4);
    uVar8 = *(uint *)((long)param_1 + 0x7a4);
    uVar11 = uVar8 >> 7 & 0xff;
  }
  uVar13 = *(uint *)((long)param_1 + 0x1b84);
  uVar15 = (uint)((1.0 - fVar18) * 255.0);
  uVar14 = uVar13 >> 7 & 0xff;
  *(uint *)((long)param_1 + 0x7a4) =
       uVar8 & 0xfffffff8 | uVar8 & 3 | (uint)(0.0 < (float)uVar11 / 255.0) << 2;
  if (uVar14 != uVar15) {
    *(uint *)((long)param_1 + 0x1b84) = uVar13 & 0xffff8000 | uVar13 & 0x7f | (uVar15 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0x360);
    uVar13 = *(uint *)((long)param_1 + 0x1b84);
    uVar14 = uVar13 >> 7 & 0xff;
  }
  fVar16 = 0.0;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    fVar16 = fVar17;
  }
  *(uint *)((long)param_1 + 0x1b84) =
       uVar13 & 0xfffffff8 | uVar13 & 3 | (uint)(0.0 < (float)uVar14 / 255.0) << 2;
  FUN_00f0e6bc(fVar16,param_1 + 0xc6);
  uVar12 = 5;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    uVar12 = 2;
  }
  FUN_00f0e698(param_1 + 0xc6,uVar12);
  uVar8 = *(uint *)(param_1 + 0x4b);
  *(uint *)((long)param_1 + 0x87c) =
       *(uint *)((long)param_1 + 0x87c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x87c) & 3 | (uint)((long)(int)uVar8 != 1) << 2;
  if (uVar8 < 3) {
    fVar17 = *(float *)(&DAT_01bbd608 + (long)(int)uVar8 * 4);
  }
  uVar8 = *(uint *)((long)param_1 + 0x904);
  bVar5 = false;
  bVar6 = true;
  bVar7 = false;
  if (*(int *)((long)param_1 + 0x25c) == 2) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar17)) {
      bVar5 = fVar17 < 0.3;
      bVar6 = fVar17 == 0.3;
      bVar7 = false;
    }
  }
  uVar11 = 0x4c;
  if (bVar6 || bVar5 != bVar7) {
    uVar11 = (int)(fVar17 * 255.0);
  }
  if ((uVar8 >> 7 & 0xff) != uVar11) {
    *(uint *)((long)param_1 + 0x904) = uVar8 & 0xffff8000 | uVar8 & 0x7f | (uVar11 & 0xff) << 7;
    FUN_0091ada4(plVar1);
  }
  uVar8 = *(uint *)((long)param_1 + 0xa34);
  if ((uVar8 >> 7 & 0xff) != uVar11) {
    *(uint *)((long)param_1 + 0xa34) = uVar8 & 0xffff8000 | uVar8 & 0x7f | (uVar11 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0x136);
  }
  uVar8 = *(uint *)((long)param_1 + 0xd44);
  if ((uVar8 >> 7 & 0xff) != uVar11) {
    *(uint *)((long)param_1 + 0xd44) = uVar8 & 0xffff8000 | uVar8 & 0x7f | (uVar11 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0x198);
  }
  puVar3 = &DAT_0313b678;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    puVar3 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(plVar1,puVar3);
  puVar3 = &DAT_0313b678;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    puVar3 = &local_74;
  }
  FUN_00f0d7fc(param_1 + 0x136,puVar3);
  puVar3 = &DAT_0313b678;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    puVar3 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0x198,puVar3);
  uVar8 = 0;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    uVar9 = FUN_00f08be8(param_1 + 0x150);
    uVar8 = FUN_00e70b88(uVar9,&DAT_03210450);
    uVar8 = (uVar8 & 1) << 2;
  }
  *(uint *)((long)param_1 + 0xa34) = *(uint *)((long)param_1 + 0xa34) & 0xfffffffb | uVar8;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c475d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c48600(param_1,param_4);
  return;
}




void FUN_00c475e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fbfe8;
  if (param_1[0x4a] != 0) {
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  FUN_00f13d08(param_1 + 0x360);
  FUN_00f13d08(param_1 + 0x349);
  param_1[0x31e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x335);
  FUN_00f13d08(param_1 + 0x31e);
  param_1[0x1d5] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2f6);
  FUN_00c925cc(param_1 + 0x1d5);
  FUN_00f13d08(param_1 + 0x1be);
  FUN_00f0d3a4(param_1 + 0x198);
  param_1[0x17a] = &PTR_FUN_028266f0;
  param_1[0x191] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x194);
  FUN_00f13d08(param_1 + 0x17a);
  param_1[0x15c] = &PTR_FUN_028266f0;
  param_1[0x173] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x176);
  FUN_00f13d08(param_1 + 0x15c);
  FUN_00f0d3a4(param_1 + 0x136);
  FUN_00f0d3a4(param_1 + 0x110);
  FUN_00f01868(param_1 + 0xff);
  FUN_00f13d08(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_028266f0;
  param_1[0xdd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe0);
  FUN_00f13d08(param_1 + 0xc6);
  param_1[0x7e] = &PTR_FUN_028263c0;
  FUN_00f01868(param_1 + 0xb2);
  FUN_00f13d08(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 99);
  FUN_00f13d08(param_1 + 0x4c);
  if ((void *)param_1[0x4a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4a]);
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
  }
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c47774(void *param_1)

{
  FUN_00c475e0();
  operator_delete(param_1);
  return;
}




void FUN_00c47798(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 600) = param_2;
  FUN_00c471cc();
  return;
}




void FUN_00c477a0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x25c) = param_2;
  FUN_00c471cc();
  return;
}




void FUN_00c477a8(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00c477d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c477d8(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x136);
  FUN_00c471cc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c4780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c47810(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  if (param_1[0xe0] != 0) {
    FUN_00f0e628(param_1 + 0xc6);
  }
  switch(param_2) {
  case 0:
    ppuVar1 = &PTR_s_build___VGX_play_atlas_02be3548;
    break;
  case 1:
    ppuVar1 = &PTR_s_build___GameModeTiles_atlas_02be35f0;
    break;
  case 2:
    ppuVar1 = &PTR_s_build___GameModeSettingsTiles_pn_02be35f8;
    break;
  case 3:
    ppuVar1 = &PTR_s_build___GameModeSettingsExtTiles_02be3600;
    break;
  default:
    goto switchD_00c4785c_default;
  }
  FUN_00f0e548(param_1 + 0xc6,*ppuVar1,param_3);
switchD_00c4785c_default:
                    /* WARNING: Could not recover jumptable at 0x00c478b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c478b8(long *param_1,uint param_2)

{
  *(uint *)((long)param_1 + 0xe74) =
       *(uint *)((long)param_1 + 0xe74) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe74) & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c478d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c478d4(long param_1,uint param_2)

{
  FUN_00ecf888(param_1 + 0xea8,param_2 & 1);
  FUN_00ecf870(param_1 + 0xea8,~param_2 & 1);
  return;
}




void FUN_00c4790c(long param_1)

{
  FUN_00f0d75c(param_1 + 0xcc0);
  return;
}




void FUN_00c47914(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x37b) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c47928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c4792c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1bd9) = param_2 & 1;
  return;
}




void FUN_00c4793c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1bda) = param_2 & 1;
  return;
}




undefined1 FUN_00c4794c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1bda);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c47958(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  undefined4 local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = _DAT_03218ef8;
  local_38 = param_1 + 0x318;
  local_30 = 0x1010101;
  local_2c = 0;
  uStack_40 = local_48;
  FUN_00c479d4();
  uVar2 = FUN_009b8d90();
  FUN_009ba5e4(uVar2,param_2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c479d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_009baadc(uVar2,param_2);
  local_70 = DAT_03218f38;
  local_78 = DAT_03218f30;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  local_60 = param_1 + 0x630;
  uStack_58 = 0;
  local_3a = 1;
  local_3c = 1;
  _local_6c = CONCAT44(0xc3a50000,(int)_DAT_03218ef8);
  uVar2 = FUN_009b8d90();
  FUN_009baa78(uVar2,param_2,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00c47a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_3 + 0x260;
  if ((*(float *)(param_3 + 0x2a8) != 0.75) || (*(float *)(param_3 + 0x2ac) != 0.75)) {
    uVar7 = NEON_fmov(0x3f400000,4);
    *(undefined8 *)(param_3 + 0x2a8) = uVar7;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(param_3 + 0x2e4) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x2e4) = *(uint *)(param_3 + 0x2e4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  uVar7 = FUN_00efed6c(param_1);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,param_2,FUN_00a269a4);
  uVar4 = FUN_00efee28(0x3f800000,param_2,FUN_0091aa80);
  FUN_00efcea4(puVar6,uVar3,uVar4,0);
  FUN_00f02308(lVar1,uVar7,puVar6,0);
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xffffffef;
  uVar7 = FUN_00efed6c(param_1);
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
    FUN_00efca2c(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efca7c(puVar6,1);
  FUN_00f02308(param_3,uVar7,puVar6,0);
  return (float)param_1 + (float)param_2;
}




float FUN_00c47cd4(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xffffffef;
  uVar2 = FUN_00efed6c();
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
    FUN_00efcd98(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar3 = FUN_00eff63c(0x3f400000,0x3f400000,param_2,FUN_00c47e0c);
  uVar4 = FUN_00efee28(0,param_2,FUN_0091aa80);
  FUN_00efcea4(puVar6,uVar3,uVar4,0);
  FUN_00f02308(param_3 + 0x260,uVar2,puVar6,0);
  FUN_00c47e3c(param_3);
  return param_1 + (float)param_2;
}




float FUN_00c47e0c(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / param_4;
  return param_1 * param_1 * param_3 * (param_1 * 2.70158 + -1.70158) + param_2;
}




void FUN_00c47e3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ushort uVar5;
  ushort *puVar6;
  long *plVar4;
  
  uVar2 = FUN_00efee28(0,0x3e99999a,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(long *)(puVar6 + 0x10) = param_1;
  *(code **)(puVar6 + 8) = FUN_00c4823c;
  FUN_00f01980(param_1 + 0x18f0);
  FUN_00f02308(param_1 + 0x18f0,uVar2,puVar6,0);
  if (*(int *)(param_1 + 0x248) != 0) {
    plVar3 = *(long **)(param_1 + 0x250);
    do {
      plVar4 = plVar3 + 1;
      *(uint *)(*plVar3 + 0x1c4) = *(uint *)(*plVar3 + 0x1c4) & 0xffffffef;
      plVar3 = plVar4;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0x250) + (ulong)*(uint *)(param_1 + 0x248) * 8))
    ;
  }
  return;
}




void FUN_00c47f84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  
  FUN_00f01980(param_1 + 0x18f0);
  if ((~*(uint *)(param_1 + 0x1974) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1974) = *(uint *)(param_1 + 0x1974) | 0x7f80;
    FUN_0091ada4(param_1 + 0x18f0);
  }
  if (*(int *)(param_1 + 0x248) != 0) {
    plVar8 = *(long **)(param_1 + 0x250);
    fVar10 = 0.0;
    do {
      lVar9 = *plVar8;
      lVar1 = lVar9 + 0xb8;
      if ((*(uint *)(lVar9 + 0x13c) & 0x7f80) != 0) {
        *(uint *)(lVar9 + 0x13c) = *(uint *)(lVar9 + 0x13c) & 0xffff807f;
        FUN_0091ada4(lVar1);
      }
      if ((*(float *)(lVar9 + 0x100) != 0.8) || (*(float *)(lVar9 + 0x104) != 0.8)) {
        *(undefined8 *)(lVar9 + 0x100) = 0x3f4ccccd3f4ccccd;
        FUN_0091ada4(lVar1);
      }
      uVar3 = FUN_00efed6c(fVar10);
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
      uVar4 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e99999a,FUN_00a269a4);
      uVar5 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_0091aa80);
      FUN_00efcea4(puVar7,uVar4,uVar5,0);
      FUN_00f02308(lVar1,uVar3,puVar7,0);
      *(uint *)(lVar9 + 0x1c4) = *(uint *)(lVar9 + 0x1c4) & 0xffffffef;
      uVar3 = FUN_00efed6c(fVar10 + 0.3);
      lVar1 = DAT_03210d00;
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
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efca2c(puVar7);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00f02308(lVar9 + 0x140,uVar3,puVar7,0);
      plVar8 = plVar8 + 1;
      fVar10 = fVar10 + 0.045;
    } while (plVar8 != (long *)(*(long *)(param_1 + 0x250) + (ulong)*(uint *)(param_1 + 0x248) * 8))
    ;
  }
  return;
}

