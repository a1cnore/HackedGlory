// functions/00c04 — 25 functions
#include "libGameKindred.h"




void FUN_00c04368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c04374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c04378(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x1398);
  uVar1 = FUN_00f0e668(param_5 + 0x508);
  FUN_00a20e44(*param_2,param_2[1],1.0 - fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,
               uVar1,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00c04410(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x139c);
  uVar1 = FUN_00f0e668(param_5 + 0x608);
  FUN_00a20e44(*param_2,param_2[1],1.0 - fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,
               uVar1,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00c044a8(undefined1 param_1 [16],float param_2,undefined8 param_3,float *param_4,
                 long *param_5,undefined8 param_6,long param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ushort uVar15;
  float fVar16;
  float fVar17;
  undefined3 local_8c;
  undefined1 uStack_89;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  lVar7 = param_7 + 0x708;
  fVar12 = *(float *)(param_7 + 0x13a0);
  fVar10 = (float)(**(code **)(*(long *)(param_7 + 0x708) + 0x48))(lVar7);
  fVar13 = param_4[4];
  fVar14 = param_4[5];
  lVar5 = FUN_00f0e668(lVar7);
  uVar1 = *(ushort *)(lVar5 + 4);
  uVar2 = *(ushort *)(lVar5 + 6);
  uVar3 = *(ushort *)(lVar5 + 8);
  uVar15 = *(ushort *)(lVar5 + 10);
  uVar9 = *(undefined8 *)(*(long *)(*param_5 + 8) + 0x3c);
  puVar6 = (undefined4 *)FUN_00f0e690(lVar7);
  _local_8c = CONCAT13((char)(int)(param_4[6] * 255.0),(int3)*puVar6);
  lVar7 = FUN_00f0e668(lVar7);
  if (lVar7 != 0) {
    fVar11 = (float)NEON_ucvtf((uint)uVar15);
    uVar8 = (uint)uVar9;
    fVar16 = fVar12 * param_2 * fVar14;
    fVar17 = 1.0 / (float)(uVar8 & 0x3fff);
    fVar14 = (param_2 * fVar14 - fVar16) + param_4[1];
    FUN_00965b68(*param_4,fVar14,fVar10 * fVar13 + *param_4,fVar16 + fVar14,0,fVar17 * (float)uVar1,
                 1.0 - (1.0 / (float)(uVar8 >> 0xe & 0x3fff)) *
                       (float)(int)((1.0 - fVar12) * fVar11 + (float)uVar2),
                 ((float)uVar1 + (float)uVar3) * fVar17,param_3,&local_8c,0);
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c04644(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_b8,PTR_s_build___HUDPartsHero__s_png_02be3470);
  FUN_00e6a8a8(auStack_d8,"ability_icon_%d",param_2);
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_00f0e628(param_1 + 0x310);
  }
  FUN_00f0e548(param_1 + 0x310,auStack_b8,auStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c046e0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_00f0e628(param_1 + 0x310);
  }
  FUN_00f0e548(param_1 + 0x310,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448,param_2);
  return;
}




void FUN_00c04724(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_00f0e628(param_1 + 0x310);
  }
  FUN_00f0e548(param_1 + 0x310,param_2,param_3);
  return;
}




void FUN_00c0476c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar1,0x1234);
  *(uint *)(param_1 + 0x126c) =
       *(uint *)(param_1 + 0x126c) & 0x80000000 |
       *(uint *)(param_1 + 0x126c) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  return;
}




void FUN_00c047b0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x49c);
  uVar1 = uVar2 & 3 | (uint)(param_2 != 0) << 2;
  *(uint *)(param_1 + 0x49c) = uVar2 & 0xfffffff8 | uVar1;
  if (param_2 == 3) {
    if ((uVar2 & 0x7f80) == 0x6c00) {
      return;
    }
    iVar3 = 0xd8;
  }
  else if (param_2 == 2) {
    if ((uVar2 & 0x7f80) == 0x5f80) {
      return;
    }
    iVar3 = 0xbf;
  }
  else {
    if ((param_2 != 1) || ((uVar2 & 0x7f80) == 0x5280)) {
      return;
    }
    iVar3 = 0xa5;
  }
  *(uint *)(param_1 + 0x49c) = uVar2 & 0xffff8000 | uVar2 & 0x78 | uVar1 | iVar3 << 7;
  FUN_0091ada4(param_1 + 0x418);
  return;
}




void FUN_00c0483c(long *param_1,int param_2)

{
  if (*(int *)((long)param_1 + 0x1394) != param_2) {
    (**(code **)(*param_1 + 0x1e0))(param_1);
  }
  *(int *)((long)param_1 + 0x1394) = param_2;
  return;
}




void FUN_00c0487c(float param_1,long param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)(param_1 + 0.99));
  FUN_00f0d75c(param_2 + 0x9e8,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0490c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa6c) =
       *(uint *)(param_1 + 0xa6c) & 0xfffffff8 | *(uint *)(param_1 + 0xa6c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x58c) =
       *(uint *)(param_1 + 0x58c) & 0xfffffff8 | *(uint *)(param_1 + 0x58c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c04928(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x68c) =
       *(uint *)(param_1 + 0x68c) & 0xfffffff8 | *(uint *)(param_1 + 0x68c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c0493c(long param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x126c) =
       *(uint *)(param_1 + 0x126c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x126c) & 3 | (param_2 & 1) << 2;
  FUN_00c81168(param_1 + 0x11e8,param_3 & 1);
  return;
}




void FUN_00c04960(long param_1)

{
  *(undefined1 *)(param_1 + 0x13a6) = 1;
  return;
}




void FUN_00c04970(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0xc08,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c049f8(long *param_1,uint param_2)

{
  *(uint *)((long)param_1 + 0xc8c) =
       *(uint *)((long)param_1 + 0xc8c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xc8c) & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c04a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))();
  return;
}




void FUN_00c04a14(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch(param_4) {
  case 0:
  case 3:
    pcVar2 = "ability_stunned_badge";
    break;
  case 1:
    pcVar2 = "ability_silenced_badge";
    break;
  case 2:
    lVar3 = param_3 + 0xb18;
    FUN_00f0e578(lVar3,"ability_energy_badge");
    local_40[0] = 0xffffa060;
    FUN_00f0e670(lVar3,local_40,2);
    fVar4 = (float)FUN_00f08314(lVar3,param_3);
    fVar4 = fVar4 * 0.25;
    param_2 = param_2 * 0.25;
    if (*(float *)(param_3 + 0xb60) == fVar4) goto LAB_00c04b10;
    goto LAB_00c04b1c;
  default:
    goto switchD_00c04a58_default;
  }
  lVar3 = param_3 + 0xb18;
  FUN_00f0e578(lVar3,pcVar2);
  FUN_00f0e670(lVar3,&DAT_01bee7fa,2);
  fVar4 = (float)FUN_00f08314(lVar3,param_3);
  fVar4 = fVar4 * 0.45;
  param_2 = param_2 * 0.45;
  if (*(float *)(param_3 + 0xb60) == fVar4) {
LAB_00c04b10:
    if (*(float *)(param_3 + 0xb64) == param_2) goto switchD_00c04a58_default;
  }
LAB_00c04b1c:
  *(float *)(param_3 + 0xb60) = fVar4;
  *(float *)(param_3 + 0xb64) = param_2;
  FUN_0091ada4(param_3 + 0xb18);
switchD_00c04a58_default:
  *(int *)(param_3 + 0x1390) = param_4;
  *(uint *)(param_3 + 0xb9c) =
       *(uint *)(param_3 + 0xb9c) & 0xfffffff8 |
       *(uint *)(param_3 + 0xb9c) & 3 | (uint)(param_4 != 3) << 2;
  *(uint *)(param_3 + 0x78c) =
       *(uint *)(param_3 + 0x78c) & 0xfffffff8 |
       *(uint *)(param_3 + 0x78c) & 3 | (uint)(param_4 == 2) << 2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c04b80(undefined4 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x1398) = fVar1;
  return;
}




void FUN_00c04b98(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x139c) = param_1;
  return;
}




void FUN_00c04ba0(undefined4 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x13a0) = fVar1;
  return;
}




void FUN_00c04bb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00eff63c(0x3fe00000,0x3fe00000,0x3c23d70a,0);
  uVar2 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e800000,FUN_00a269a4);
  FUN_00f01980(param_1 + 0x198);
  FUN_00f02308(param_1 + 0x198,uVar1,uVar2,0);
  return;
}




void FUN_00c04c30(long param_1)

{
  FUN_00c81208(param_1 + 0x11e8);
  return;
}




void FUN_00c04c3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  if (*(char *)(param_1 + 0x13a4) == '\0') {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x88c);
  lVar1 = param_1 + 0x808;
  *(uint *)(param_1 + 0x88c) = uVar5 | 4;
  if ((uVar5 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x88c) = uVar5 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3d4ccccd,0);
  uVar4 = FUN_00efee28(0,0x3ecccccd,FUN_0091aa80);
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
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar3,uVar4,puVar7,0);
  lVar1 = param_1 + 0x8f8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x940) != 1.0) || (*(float *)(param_1 + 0x944) != 1.0)) {
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x940) = uVar3;
    FUN_0091ada4(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x97c);
  if ((~uVar5 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x97c) = uVar5 | 0x7f80;
    FUN_0091ada4(lVar1);
    uVar5 = *(uint *)(param_1 + 0x97c);
  }
  *(uint *)(param_1 + 0x97c) = uVar5 | 4;
  uVar3 = FUN_00efee28(0,0x3f99999a,FUN_0091aa80);
  uVar4 = FUN_00eff63c(0x40400000,0x40400000,0x3f99999a,FUN_009a7608);
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
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 != 0xffff) {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00c04f54;
    }
  }
  puVar8 = (ushort *)0x0;
LAB_00c04f54:
  FUN_00efcea4(puVar7,uVar3,uVar4,0);
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,puVar7,puVar8,0);
  return;
}




void FUN_00c04f9c(undefined1 param_1 [16],float param_2,long *param_3)

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
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar11 = tpidr_el0;
  local_a8 = *(long *)(lVar11 + 0x28);
  FUN_00c03758();
  uVar10 = *(uint *)((long)param_3 + 0x2a4);
  plVar1 = param_3 + 0x44;
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x2a4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  local_b0 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_ac = param_2;
  FUN_00f13f18(plVar1,&local_b0);
  plVar17 = param_3 + 0x62;
  local_b0 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_b0 = local_b0 + -20.0;
  fStack_ac = param_2 + -20.0;
  fVar22 = fStack_ac;
  FUN_00f13f18(plVar17,&local_b0);
  plVar2 = param_3 + 0x83;
  local_b0 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_ac = fVar22;
  FUN_00f13f18(plVar2,&local_b0);
  plVar3 = param_3 + 0xe1;
  local_b0 = (float)FUN_00f0e700(plVar17);
  fStack_ac = fVar22;
  FUN_00f13f18(plVar3,&local_b0);
  local_b0 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_b0 = local_b0 * 0.85;
  fStack_ac = fVar22 * 0.85;
  fVar22 = fStack_ac;
  FUN_00f13f18(param_3 + 0x23d,&local_b0);
  plVar4 = param_3 + 0x101;
  local_b0 = (float)FUN_00f0e700(plVar17);
  fStack_ac = fVar22;
  FUN_00f13f18(plVar4,&local_b0);
  plVar5 = param_3 + 0x11f;
  local_b0 = (float)FUN_00f0e700(plVar17);
  fStack_ac = fVar22;
  FUN_00f13f18(plVar5,&local_b0);
  plVar6 = param_3 + 0x13d;
  if ((*(float *)(param_3 + 0x146) != 1.33) || (*(float *)((long)param_3 + 0xa34) != 1.33)) {
    param_3[0x146] = 0x3faa3d713faa3d71;
    FUN_0091ada4(plVar6);
  }
  fVar22 = *(float *)(param_3 + 0x18a);
  if ((fVar22 != 1.8) || (fVar22 = *(float *)((long)param_3 + 0xc54), fVar22 != 1.8)) {
    param_3[0x18a] = 0x3fe666663fe66666;
    FUN_0091ada4(param_3 + 0x181);
  }
  plVar7 = param_3 + 0xa1;
  fVar19 = (float)FUN_00f0e700(plVar17);
  fVar21 = fVar22;
  fVar20 = (float)FUN_00f0eaf4(plVar7);
  fVar22 = fVar22 / fVar21;
  if ((*(float *)(param_3 + 0xaa) != fVar19 / fVar20) ||
     (*(float *)((long)param_3 + 0x554) != fVar22)) {
    *(float *)(param_3 + 0xaa) = fVar19 / fVar20;
    *(float *)((long)param_3 + 0x554) = fVar22;
    FUN_0091ada4(plVar7);
  }
  plVar8 = param_3 + 0xc1;
  fVar19 = (float)FUN_00f0e700(plVar17);
  fVar21 = fVar22;
  fVar20 = (float)FUN_00f0eaf4(plVar8);
  fVar22 = fVar22 / fVar21;
  if ((*(float *)(param_3 + 0xca) != fVar19 / fVar20) ||
     (*(float *)((long)param_3 + 0x654) != fVar22)) {
    *(float *)(param_3 + 0xca) = fVar19 / fVar20;
    *(float *)((long)param_3 + 0x654) = fVar22;
    FUN_0091ada4(plVar8);
  }
  plVar9 = param_3 + 0x163;
  if ((int)param_3[0x272] == 2) {
    local_b0 = -NAN;
    FUN_00f0e670(plVar9,&local_b0,2);
    fVar21 = (float)FUN_00f08314(plVar9,param_3);
    fVar21 = fVar21 * 0.25;
    fVar22 = fVar22 * 0.25;
    if (*(float *)(param_3 + 0x16c) == fVar21) {
LAB_00c052bc:
      if (*(float *)((long)param_3 + 0xb64) == fVar22) goto LAB_00c052d8;
    }
  }
  else {
    FUN_00f0e670(plVar9,&DAT_01bee7fa,2);
    fVar21 = (float)FUN_00f08314(plVar9,param_3);
    fVar21 = fVar21 * 0.45;
    fVar22 = fVar22 * 0.45;
    if (*(float *)(param_3 + 0x16c) == fVar21) goto LAB_00c052bc;
  }
  *(float *)(param_3 + 0x16c) = fVar21;
  *(float *)((long)param_3 + 0xb64) = fVar22;
  FUN_0091ada4(plVar9);
LAB_00c052d8:
  *(uint *)((long)param_3 + 0x126c) = *(uint *)((long)param_3 + 0x126c) & 0xffffffbf;
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_03218f08);
  if ((*(float *)(param_3 + 0x4e) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x274) != DAT_03218f08._4_4_)) {
    param_3[0x4e] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_3 + 0x6c) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x364) != DAT_03218f08._4_4_)) {
    param_3[0x6c] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar17);
  }
  if ((*(float *)(param_3 + 0x8d) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x46c) != DAT_03218f08._4_4_)) {
    param_3[0x8d] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_3 + 0xab) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x55c) != DAT_03218f08._4_4_)) {
    param_3[0xab] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar7);
  }
  if ((*(float *)(param_3 + 0xcb) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x65c) != DAT_03218f08._4_4_)) {
    param_3[0xcb] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar8);
  }
  if ((*(float *)(param_3 + 0xeb) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x75c) != DAT_03218f08._4_4_)) {
    param_3[0xeb] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_3 + 0x10b) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x85c) != DAT_03218f08._4_4_)) {
    param_3[0x10b] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_3 + 0x129) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x94c) != DAT_03218f08._4_4_)) {
    param_3[0x129] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_3 + 0x147) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0xa3c) != DAT_03218f08._4_4_)) {
    param_3[0x147] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_3 + 0x16d) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0xb6c) != DAT_03218f08._4_4_)) {
    param_3[0x16d] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar9);
  }
  *(uint *)((long)param_3 + 0x97c) = *(uint *)((long)param_3 + 0x97c) & 0xffffffbf;
  FUN_00f07940(0,0,param_3 + 0x33,8,param_3,8);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00f07940(0,0,plVar17,8,param_3,8);
  FUN_00f07940(0,0,plVar2,8,param_3,8);
  FUN_00f07940(0,0,plVar7,8,param_3,8);
  FUN_00f07940(0,0,plVar8,8,param_3,8);
  FUN_00f07940(0,0,plVar3,8,param_3,8);
  FUN_00f07940(0,0,plVar4,8,param_3,8);
  FUN_00f07940(0,0,plVar5,8,param_3,8);
  FUN_00f07940(0,0,plVar6,8,param_3,8);
  FUN_00f07940(0,0,plVar9,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x181,2,plVar1,2);
  uVar10 = *(uint *)((long)param_3 + 0x1394);
  uVar14 = (ulong)uVar10;
  if (*(char *)((long)param_3 + 0x13a5) == '\0') {
    uVar18 = 0;
    puVar16 = (uint *)((long)param_3 + 0xdbc);
    do {
      if (uVar14 <= uVar18) break;
      uVar18 = uVar18 + 1;
      *puVar16 = *puVar16 & 0xfffffffb;
      puVar16 = puVar16 + 0x3c;
    } while (uVar18 < 5);
  }
  else {
    uVar18 = 0;
    plVar17 = param_3 + 0x1a7;
    do {
      if (uVar14 <= uVar18) break;
      uVar12 = *(uint *)((long)plVar17 + 0x84) | 4;
      *(uint *)((long)plVar17 + 0x84) = uVar12;
      if ((*(float *)(plVar17 + 9) != 2.0) || (*(float *)((long)plVar17 + 0x4c) != 2.0)) {
        plVar17[9] = 0x4000000040000000;
        FUN_0091ada4(plVar17);
        uVar12 = *(uint *)((long)plVar17 + 0x84);
      }
      if ((uVar12 & 0x7f80) != 0x6c00) {
        *(uint *)((long)plVar17 + 0x84) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x6c00;
        FUN_0091ada4(plVar17);
      }
      fVar22 = (float)FUN_00f0e700(plVar1);
      fVar21 = ((float)(int)uVar18 * 10.0 - (float)(uVar10 - 1) * 10.0 * 0.5) * 0.017453292;
      fVar19 = fVar22 * 0.5 + 3.0;
      fVar22 = sinf(fVar21);
      fVar21 = cosf(fVar21);
      FUN_00f07940(fVar22 * fVar19,fVar21 * fVar19,plVar17,8,plVar1,8);
      uVar14 = (ulong)*(uint *)((long)param_3 + 0x1394);
      uVar18 = uVar18 + 1;
      plVar17 = plVar17 + 0x1e;
    } while (uVar18 < 5);
    iVar13 = (int)uVar14;
    if (iVar13 < 5) {
      lVar15 = (long)iVar13 + -1;
      puVar16 = (uint *)((long)param_3 + (long)iVar13 * 0xf0 + 0xdbc);
      do {
        lVar15 = lVar15 + 1;
        *puVar16 = *puVar16 & 0xfffffffb;
        puVar16 = puVar16 + 0x3c;
      } while (lVar15 < 4);
    }
  }
  FUN_00f07940(0xc1c00000,0xc1c00000,param_3 + 0x23d,8,param_3,0);
  if (*(long *)(lVar11 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

