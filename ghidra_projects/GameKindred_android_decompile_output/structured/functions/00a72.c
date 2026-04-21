// functions/00a72 — 22 functions
#include "libGameKindred.h"




void FUN_00a7207c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a72084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00a7208c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  FUN_00abaee8(param_1,param_2 & 1);
  puVar1 = param_1 + 0xbf;
  *param_1 = &PTR_FUN_027cd398;
  FUN_00f0eda4(puVar1);
  puVar2 = param_1 + 0xdf;
  FUN_00f0d160(puVar2);
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x105] = 0;
  param_1[0x107] = 0;
  *(byte *)((long)param_1 + 0x834) = *(byte *)((long)param_1 + 0x834) & 0xfe;
  FUN_00f023ec(param_1 + 0x34,puVar1,1);
  FUN_00f023ec(param_1 + 0x34,puVar2,1);
  if ((*(float *)(param_1 + 0xc9) != 0.5) || (*(float *)((long)param_1 + 0x64c) != 0.5)) {
    param_1[0xc9] = 0x3f0000003f000000;
    FUN_0091ada4(puVar1);
  }
  FUN_00f0e540(puVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(puVar1,"circle_button_fill");
  FUN_00f0e670(puVar1,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x67c);
  if ((uVar3 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x67c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5f80;
    FUN_0091ada4(puVar1);
  }
  FUN_00f0eea0(puVar1,FUN_00a72214,param_1);
  FUN_00f0d92c(puVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0xe9) != 0.5) || (*(float *)((long)param_1 + 0x74c) != 0.5)) {
    param_1[0xe9] = 0x3f0000003f000000;
    FUN_0091ada4(puVar2);
  }
  FUN_00f08c18(param_1 + 0xf9,0);
  return;
}




void FUN_00a72214(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x830),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"circle_button_fill");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a722c0(long param_1,ulong param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_03210d00;
  puVar1 = (ushort *)(DAT_03210d00 + 0x20010);
  uVar3 = *puVar1;
  if ((param_2 & 1) == 0) {
    if (uVar3 == 0xffff) {
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
      *puVar1 = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825268;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar5 = 0x3eb33333;
  }
  else {
    if (uVar3 == 0xffff) {
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
      *puVar1 = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825220;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar5 = 0x3ba3d70a;
  }
  FUN_00efcac4(uVar5,puVar4);
  FUN_00f022a0(param_1 + 0x6f8,puVar4);
  return;
}




void FUN_00a72420(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)(param_2 + 0x828);
  if ((param_1 <= 0.0) || (fVar2 != 0.0)) {
    if ((0.0 < param_1) || (fVar2 <= 0.0)) goto LAB_00a72474;
    FUN_00a722c0(param_2,0);
    *(undefined4 *)(param_2 + 0x828) = 0;
    *(float *)(param_2 + 0x82c) = param_1;
  }
  else {
    FUN_00a722c0(param_2,1);
    *(float *)(param_2 + 0x828) = param_1;
    fVar2 = param_1;
LAB_00a72474:
    *(float *)(param_2 + 0x82c) = param_1;
    if (fVar2 != 0.0) {
      *(float *)(param_2 + 0x830) = param_1 / fVar2;
      FUN_00e70510(&local_48);
      FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)param_1);
      goto LAB_00a72508;
    }
  }
  *(undefined4 *)(param_2 + 0x830) = 0;
  FUN_00e705c8(&local_48,&DAT_01e277f2);
LAB_00a72508:
  FUN_00f0d75c(param_2 + 0x6f8,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00a72548(long param_1)

{
  return *(undefined4 *)(param_1 + 0x830);
}




void FUN_00a72550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd398;
  FUN_00f0d3a4(param_1 + 0xdf);
  param_1[0xbf] = &PTR_FUN_028266f0;
  param_1[0xd6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd9);
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  *param_1 = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00a72628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd398;
  FUN_00f0d3a4(param_1 + 0xdf);
  param_1[0xbf] = &PTR_FUN_028266f0;
  param_1[0xd6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd9);
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  *param_1 = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a72708(long *param_1,byte param_2)

{
  long lVar1;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00a291cc();
  *param_1 = (long)&PTR_FUN_027cd518;
  param_1[0x17] = (long)&PTR_FUN_027cd678;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe | param_2 & 1;
  local_40 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  local_68 = FUN_00a72804;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_68 = FUN_00a72804;
  local_40 = DAT_03210f84;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_68 = (code *)0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a72804(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210c64,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a72870(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfe | param_2 & 1;
  return;
}




byte FUN_00a72880(long param_1)

{
  return *(byte *)(param_1 + 0x100) & 1;
}




void FUN_00a7288c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210c64,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a728f8(void *param_1)

{
  FUN_00a29250();
  operator_delete(param_1);
  return;
}




void FUN_00a7291c(long param_1)

{
  FUN_00a29250(param_1 + -0xb8);
  return;
}




void FUN_00a72924(long param_1)

{
  FUN_00a29250((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00a7294c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027cd6c0;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x2a;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x48;
  FUN_00b89cd8(plVar3);
  FUN_00a749d4(param_1 + 0x61,1);
  FUN_00a749d4(param_1 + 0x110,2);
  FUN_00a49c7c(param_1 + 0x1bf);
  FUN_00a31368(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x25b) = 0x3f800000;
  *(byte *)((long)param_1 + 0x12dc) = *(byte *)((long)param_1 + 0x12dc) | 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1bf,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x228,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x61,1);
  FUN_00f023ec(plVar3,param_1 + 0x110,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 8;
  *(uint *)((long)param_1 + 0x11c4) = *(uint *)((long)param_1 + 0x11c4) | 8;
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_1 + 0x1d4);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1d4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x34) == 0.5) && (*(float *)((long)param_1 + 0x1a4) == 1.0)) {
    return;
  }
  param_1[0x34] = 0x3f8000003f000000;
  FUN_0091ada4(plVar2);
  return;
}




void FUN_00a72b60(long param_1)

{
  FUN_00a49df8(param_1 + 0xdf8,0);
  FUN_00a72b8c(param_1);
  return;
}




void FUN_00a72b8c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&local_64,&local_68);
  uVar7 = FUN_00f00438("root-layer");
  local_74 = 0.0;
  local_70 = 1.0;
  local_6c = 0x3f800000;
  pbVar3 = (byte *)(param_3 + 0x12dc);
  if ((*pbVar3 & 1) == 0) {
    local_60 = (ulong)local_60._4_4_ << 0x20;
  }
  else {
    local_60 = CONCAT44(local_60._4_4_,1);
  }
  FUN_009399dc(&local_60,0,&local_6c,&local_70,&local_74,0,0,0);
  lVar1 = param_3 + 0xdf8;
  uVar5 = FUN_0092ea9c();
  fVar8 = (float)FUN_00a49ff0(lVar1,uVar5 & 1);
  fVar10 = param_2;
  uVar9 = FUN_00a49fe0(lVar1);
  local_60 = CONCAT44(fVar10,uVar9);
  FUN_00f13f18(lVar1,&local_60);
  if ((*pbVar3 & 1) == 0) {
    local_60 = 0x3f800000;
    FUN_00f0acd4(lVar1,&local_60);
    fVar10 = local_64 + -10.0;
    fVar12 = local_74 + 10.0;
    if (*(float *)(param_3 + 0xe38) != fVar10) goto LAB_00a72d50;
LAB_00a72d44:
    if (*(float *)(param_3 + 0xe3c) != fVar12) goto LAB_00a72d50;
  }
  else {
    iVar6 = FUN_00da2c48();
    if (iVar6 == 2) {
      local_60 = 0;
      FUN_00f0acd4(lVar1,&local_60);
      if ((*(float *)(param_3 + 0xe38) != 10.0) || (*(float *)(param_3 + 0xe3c) != 10.0)) {
        uVar11 = NEON_fmov(0x41200000,4);
        *(undefined8 *)(param_3 + 0xe38) = uVar11;
        FUN_0091ada4(lVar1);
      }
      fVar12 = *(float *)(param_3 + 0xe40);
      fVar10 = local_70 * 1.2;
      goto LAB_00a72d68;
    }
    local_60 = 0x3f8000003f000000;
    FUN_00f0acd4(lVar1,&local_60);
    fVar10 = local_64 * 0.5;
    fVar12 = (local_68 + -10.0) - local_74;
    if (*(float *)(param_3 + 0xe38) == fVar10) goto LAB_00a72d44;
LAB_00a72d50:
    *(float *)(param_3 + 0xe38) = fVar10;
    *(float *)(param_3 + 0xe3c) = fVar12;
    FUN_0091ada4(lVar1);
  }
  fVar12 = *(float *)(param_3 + 0xe40);
  fVar10 = local_70;
LAB_00a72d68:
  if ((fVar12 != fVar8 * fVar10) || (*(float *)(param_3 + 0xe44) != param_2 * fVar10)) {
    *(float *)(param_3 + 0xe40) = fVar8 * fVar10;
    *(float *)(param_3 + 0xe44) = param_2 * fVar10;
    FUN_0091ada4(lVar1);
  }
  FUN_00a49f5c(lVar1);
  FUN_00a33210(param_3 + 0x1140);
  FUN_00f07940(0,0,param_3 + 0x1140,5,uVar7,5);
  uVar9 = *(undefined4 *)(&DAT_01ba13f0 + (ulong)((*pbVar3 & 1) == 0) * 4);
  iVar6 = FUN_00da2c48();
  fVar8 = local_64 * 0.5 + -40.0;
  fVar10 = local_64 * 0.5;
  if (iVar6 != 2) {
    fVar10 = local_64 * 0.38;
  }
  lVar1 = param_3 + 0x308;
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  FUN_00a74d34(local_6c,lVar1);
  plVar2 = (long *)(param_3 + 0x880);
  FUN_00a74d34(local_6c,plVar2);
  FUN_00f13f08(fVar10,uVar9,lVar1);
  FUN_00f13f08(fVar10,uVar9,plVar2);
  if ((*(float *)(param_3 + 0x348) != 0.0) || (*(float *)(param_3 + 0x34c) != local_68)) {
    *(undefined4 *)(param_3 + 0x348) = 0;
    *(float *)(param_3 + 0x34c) = local_68;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x308) + 0x28))(lVar1,&local_60);
  if ((*(float *)(param_3 + 0x8c0) != local_64) || (*(float *)(param_3 + 0x8c4) != local_68)) {
    *(float *)(param_3 + 0x8c0) = local_64;
    *(float *)(param_3 + 0x8c4) = local_68;
    FUN_0091ada4(plVar2);
  }
  local_60 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
  FUN_00a74dac(lVar1);
  FUN_00a74dac(plVar2);
  if ((*pbVar3 & 1) != 0) {
    fVar10 = local_64 * 0.5;
    if ((*(float *)(param_3 + 400) != fVar10) || (*(float *)(param_3 + 0x194) != local_68)) {
      *(float *)(param_3 + 400) = fVar10;
      *(float *)(param_3 + 0x194) = local_68;
      FUN_0091ada4(param_3 + 0x150);
    }
    FUN_00f0d0d0(lVar1);
    FUN_00f13f08(local_64,fVar10 * 1.2,param_3 + 0x150);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a72f90(long param_1,byte param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x12dc) = *(byte *)(param_1 + 0x12dc) & 0xfe | param_2 & 1;
  uVar1 = *(uint *)(param_1 + 0x1d4) | 4;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x1d4) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x1d4) = uVar1;
  return;
}




void FUN_00a72fc0(float param_1,long param_2)

{
  *(float *)(param_2 + 0x12d8) = param_1;
  if ((*(float *)(param_2 + 0x350) != param_1) || (*(float *)(param_2 + 0x354) != param_1)) {
    *(float *)(param_2 + 0x350) = param_1;
    *(float *)(param_2 + 0x354) = param_1;
    FUN_0091ada4(param_2 + 0x308);
    param_1 = *(float *)(param_2 + 0x12d8);
  }
  if ((*(float *)(param_2 + 0x8c8) == param_1) && (*(float *)(param_2 + 0x8cc) == param_1)) {
    return;
  }
  *(float *)(param_2 + 0x8c8) = param_1;
  *(float *)(param_2 + 0x8cc) = param_1;
  FUN_0091ada4(param_2 + 0x880);
  return;
}




void thunk_FUN_00a72b8c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&fStack_64,&fStack_68);
  uVar7 = FUN_00f00438("root-layer");
  fStack_74 = 0.0;
  fStack_70 = 1.0;
  uStack_6c = 0x3f800000;
  pbVar3 = (byte *)(param_3 + 0x12dc);
  if ((*pbVar3 & 1) == 0) {
    uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
  }
  else {
    uStack_60 = CONCAT44(uStack_60._4_4_,1);
  }
  FUN_009399dc(&uStack_60,0,&uStack_6c,&fStack_70,&fStack_74,0,0,0);
  lVar1 = param_3 + 0xdf8;
  uVar5 = FUN_0092ea9c();
  fVar8 = (float)FUN_00a49ff0(lVar1,uVar5 & 1);
  fVar10 = param_2;
  uVar9 = FUN_00a49fe0(lVar1);
  uStack_60 = CONCAT44(fVar10,uVar9);
  FUN_00f13f18(lVar1,&uStack_60);
  if ((*pbVar3 & 1) == 0) {
    uStack_60 = 0x3f800000;
    FUN_00f0acd4(lVar1,&uStack_60);
    fVar10 = fStack_64 + -10.0;
    fVar12 = fStack_74 + 10.0;
    if (*(float *)(param_3 + 0xe38) != fVar10) goto LAB_00a72d50;
LAB_00a72d44:
    if (*(float *)(param_3 + 0xe3c) != fVar12) goto LAB_00a72d50;
  }
  else {
    iVar6 = FUN_00da2c48();
    if (iVar6 == 2) {
      uStack_60 = 0;
      FUN_00f0acd4(lVar1,&uStack_60);
      if ((*(float *)(param_3 + 0xe38) != 10.0) || (*(float *)(param_3 + 0xe3c) != 10.0)) {
        uVar11 = NEON_fmov(0x41200000,4);
        *(undefined8 *)(param_3 + 0xe38) = uVar11;
        FUN_0091ada4(lVar1);
      }
      fVar12 = *(float *)(param_3 + 0xe40);
      fVar10 = fStack_70 * 1.2;
      goto LAB_00a72d68;
    }
    uStack_60 = 0x3f8000003f000000;
    FUN_00f0acd4(lVar1,&uStack_60);
    fVar10 = fStack_64 * 0.5;
    fVar12 = (fStack_68 + -10.0) - fStack_74;
    if (*(float *)(param_3 + 0xe38) == fVar10) goto LAB_00a72d44;
LAB_00a72d50:
    *(float *)(param_3 + 0xe38) = fVar10;
    *(float *)(param_3 + 0xe3c) = fVar12;
    FUN_0091ada4(lVar1);
  }
  fVar12 = *(float *)(param_3 + 0xe40);
  fVar10 = fStack_70;
LAB_00a72d68:
  if ((fVar12 != fVar8 * fVar10) || (*(float *)(param_3 + 0xe44) != param_2 * fVar10)) {
    *(float *)(param_3 + 0xe40) = fVar8 * fVar10;
    *(float *)(param_3 + 0xe44) = param_2 * fVar10;
    FUN_0091ada4(lVar1);
  }
  FUN_00a49f5c(lVar1);
  FUN_00a33210(param_3 + 0x1140);
  FUN_00f07940(0,0,param_3 + 0x1140,5,uVar7,5);
  uVar9 = *(undefined4 *)(&DAT_01ba13f0 + (ulong)((*pbVar3 & 1) == 0) * 4);
  iVar6 = FUN_00da2c48();
  fVar8 = fStack_64 * 0.5 + -40.0;
  fVar10 = fStack_64 * 0.5;
  if (iVar6 != 2) {
    fVar10 = fStack_64 * 0.38;
  }
  lVar1 = param_3 + 0x308;
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  FUN_00a74d34(uStack_6c,lVar1);
  plVar2 = (long *)(param_3 + 0x880);
  FUN_00a74d34(uStack_6c,plVar2);
  FUN_00f13f08(fVar10,uVar9,lVar1);
  FUN_00f13f08(fVar10,uVar9,plVar2);
  if ((*(float *)(param_3 + 0x348) != 0.0) || (*(float *)(param_3 + 0x34c) != fStack_68)) {
    *(undefined4 *)(param_3 + 0x348) = 0;
    *(float *)(param_3 + 0x34c) = fStack_68;
    FUN_0091ada4(lVar1);
  }
  uStack_60 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x308) + 0x28))(lVar1,&uStack_60);
  if ((*(float *)(param_3 + 0x8c0) != fStack_64) || (*(float *)(param_3 + 0x8c4) != fStack_68)) {
    *(float *)(param_3 + 0x8c0) = fStack_64;
    *(float *)(param_3 + 0x8c4) = fStack_68;
    FUN_0091ada4(plVar2);
  }
  uStack_60 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_60);
  FUN_00a74dac(lVar1);
  FUN_00a74dac(plVar2);
  if ((*pbVar3 & 1) != 0) {
    fVar10 = fStack_64 * 0.5;
    if ((*(float *)(param_3 + 400) != fVar10) || (*(float *)(param_3 + 0x194) != fStack_68)) {
      *(float *)(param_3 + 400) = fVar10;
      *(float *)(param_3 + 0x194) = fStack_68;
      FUN_0091ada4(param_3 + 0x150);
    }
    FUN_00f0d0d0(lVar1);
    FUN_00f13f08(fStack_64,fVar10 * 1.2,param_3 + 0x150);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

