// functions/00e1a — 13 functions
#include "libGameKindred.h"




void FUN_00e1a1b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_60,lVar2 + 0x30);
  lVar2 = FUN_00d66d28(param_1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar3);
  fVar5 = *(float *)(*(long *)(lVar2 + 0x38) + 0xe4);
  fVar4 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  FUN_00d40e24(-(fVar5 - fVar5 / (fVar4 + 1.0)),uVar3,0,1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar3);
  fVar5 = *(float *)(*(long *)(lVar2 + 0x38) + 0x114);
  fVar4 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  FUN_00d40e24(-(fVar5 - fVar5 / (fVar4 + 1.0)),uVar3,7,1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar3);
  fVar5 = *(float *)(*(long *)(lVar2 + 0x38) + 0x11c);
  fVar4 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  FUN_00d40e24(-(fVar5 - fVar5 / (fVar4 + 1.0)),uVar3,8,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1a314(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Phinn_Ability_B_Defense_Bonus");
  lVar3 = FUN_00d09310();
  FUN_00d099d4(*(undefined4 *)(lVar3 + 0x22c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar3 + 0x30);
  fVar14 = *(float *)(*(long *)(lVar2 + 0x40) + 0x108);
  fVar15 = *(float *)(*(long *)(lVar2 + 0x40) + 0x54);
  fVar7 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  fVar8 = (float)FUN_00d59f54(lVar2,1,8,0x19,0);
  fVar16 = *(float *)(*(long *)(lVar2 + 0x40) + 0x10c);
  fVar17 = *(float *)(*(long *)(lVar2 + 0x40) + 0x58);
  fVar9 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  fVar10 = (float)FUN_00d59f54(lVar2,1,8,0x19,0);
  fVar18 = *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
  fVar19 = *(float *)(*(long *)(lVar2 + 0x40) + 0x38);
  fVar11 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  fVar12 = (float)FUN_00d59f54(lVar2,1,7,0x19,0);
  fVar13 = (float)FUN_00d59f54(lVar2,1,6,0x19,0);
  fVar13 = fVar13 + fVar8 * (fVar14 + (fVar15 - fVar15 / (fVar7 + 1.0))) +
                    fVar10 * (fVar16 + (fVar17 - fVar17 / (fVar9 + 1.0))) +
                    fVar12 * (fVar18 + (fVar19 - fVar19 / (fVar11 + 1.0)));
  uVar5 = FUN_00d67b84(param_1);
  uVar6 = FUN_00d44008(uVar5,PTR_s_Buff_Phinn_Talent_Phaster_02bf2048);
  if ((uVar6 & 1) != 0) {
    fVar7 = (float)FUN_00d5a3d0(lVar2,DAT_0320ea34,0,9);
    fVar13 = fVar13 * fVar7;
    FUN_00d3e534();
    uVar5 = FUN_00d29584();
    FUN_00d42654(auStack_80,uVar5);
    FUN_00d5a3d0(lVar2,DAT_0320ea34,1,9);
    FUN_00d472ec(uVar5,1);
  }
  FUN_00d3e534();
  uVar5 = FUN_00d2b564();
  FUN_00d42654(auStack_80,uVar5);
  FUN_00d40908(fVar13,uVar5,5);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(auStack_80,uVar5);
  uVar5 = FUN_00d47dc4(uVar5,"CenterBody");
  FUN_00da2040(uVar5,"Effect_Phinn_B_Buff");
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar2 + 8);
  FUN_00d3e534();
  uVar5 = FUN_00d29a68();
  FUN_00d42654(auStack_80,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e1a5dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar2 = *(long *)(lVar1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  fVar3 = (float)FUN_00d53a18(lVar2,2);
  fVar4 = (float)FUN_00d59f54(lVar1,2,5,0x19,0);
  return fVar3 * (1.0 - fVar4);
}




void FUN_00e1a660(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6624c();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Phinn__C_02bee9e0);
  local_38 = FUN_00e1a5dc;
  local_30 = 4;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1a6e8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar6 = FUN_00d66d28(local_50);
  fVar9 = (float)FUN_009bc24c();
  puVar2 = PTR_s_grace_period_02bf05a8;
  uVar5 = FUN_00e6a474(PTR_s_grace_period_02bf05a8);
  uVar5 = FUN_0091ed5c(puVar2,uVar5,0x12345678);
  pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  if (*pfVar7 <= fVar9) {
    uVar8 = FUN_00daa578(local_58,uVar6);
    bVar3 = false;
    if ((uVar8 & 1) != 0) {
      bVar3 = *(int *)(local_58 + 8) != 3;
    }
    if (*(long *)(local_58 + 0x28) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*(byte *)(*(long *)(local_58 + 0x28) + 0x2f4) & 0x10) == 0;
    }
    uVar8 = FUN_00daa58c(local_58,uVar6);
    if ((uVar8 & 1) == 0) {
      if (!bVar3) goto LAB_00e1a7f0;
    }
    else if (!bVar3 && !(bool)(bVar4 & (*(byte *)(local_58 + 0xc) & 0x10) == 0)) goto LAB_00e1a7f0;
    FUN_00d436dc(local_50);
  }
LAB_00e1a7f0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00e1a81c(undefined8 param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = FUN_00d67b78();
  iVar1 = *(int *)(lVar4 + 0x260);
  iVar3 = FUN_00d67b84(param_1);
  lVar4 = *param_2;
  if ((iVar1 != iVar3) || (bVar2 = false, *(char *)(lVar4 + 0x8a) == '\0')) {
    if (*(char *)(lVar4 + 0x7e) == '\0') {
      bVar2 = *(char *)(lVar4 + 0x8e) != '\0';
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}




void FUN_00e1a888(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 auStack_c0 [88];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_c8);
  lVar9 = FUN_00d66d28(local_c8);
  lVar10 = *(long *)(lVar9 + 0x18);
  while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar10 = *(long *)(lVar10 + 0x20);
  }
  uVar4 = FUN_00d7d300();
  uVar11 = FUN_00d9ea34(lVar9);
  local_cc = 0xffffffff;
  uVar12 = FUN_00d6bbac(uVar11,DAT_031b94e0,&local_cc);
  uVar5 = 0;
  if (((uVar12 & 1) != 0) &&
     (uVar5 = FUN_00d6c2bc(uVar11,local_cc,1), uVar1 = local_cc,
     ((uVar4 | uVar5 ^ 0xffffffff) & 1) == 0)) {
    uVar8 = *(undefined4 *)(lVar9 + 0x260);
    thunk_FUN_00d086f0(lVar9,2,1);
    FUN_00d04628(auStack_c0,uVar8,uVar1);
    FUN_00ce20fc(auStack_c0);
  }
  local_d0 = 0xffffffff;
  uVar6 = FUN_00d6bbac(uVar11,DAT_031b94e4,&local_d0);
  uVar12 = FUN_00d6bbac(uVar11,DAT_031b94e8,0);
  uVar7 = FUN_00d6bbac(uVar11,DAT_0315c930,0);
  puVar3 = PTR_s_Buff_Flicker_BrushStealth_Chargi_02bf05b0;
  if (((((uVar5 & 1) == 0) && ((uVar6 & 1) == 0)) && (((uVar4 ^ 1) & 1) == 0)) &&
     (((uVar12 & 1) == 0 && ((uVar7 & 1) == 0)))) {
    uVar1 = *(undefined4 *)(lVar9 + 0x260);
    uVar11 = thunk_FUN_00d086f0(lVar9,0,1);
    uVar8 = FUN_00ceb350();
    FUN_00cfe864(uVar11,0,0,auStack_c0,uVar1,uVar1,puVar3,uVar8,1,0,0);
  }
  else {
    if ((uVar6 & (uVar7 | uVar4 ^ 1) & 1) == 0) goto LAB_00e1aa58;
    FUN_00d009d0(auStack_c0,*(undefined4 *)(lVar9 + 0x260),local_d0);
  }
  FUN_00ce20fc(auStack_c0);
LAB_00e1aa58:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1aa8c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d67b04(0x3dcccccd,param_1);
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1a888;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  lVar5 = FUN_00d65010(param_1);
  plVar6 = (long *)FUN_00d3bc68(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00e1ab48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x58))(plVar6,0);
  return;
}




void FUN_00e1ab4c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d67dcc(param_1,FUN_00d69f90);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_grace_period_02bf05a8;
    uVar4 = FUN_00e6a474(PTR_s_grace_period_02bf05a8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar7 + 0x100) + 8))(lVar7 + 0x100,uVar4);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar8 = 0;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1a6e8;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  uVar9 = FUN_00d634b4(param_1);
  lVar6 = FUN_00d4aab0(uVar9,FUN_00e1a81c);
  FUN_00d2a320(lVar6 + 0x10);
  uVar9 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,uVar9);
  FUN_00d3e534();
  uVar9 = FUN_00d2a504();
  FUN_00d42654(auStack_70,uVar9);
  FUN_00d3e534();
  uVar9 = FUN_00d2cb84();
  FUN_00d42654(auStack_70,uVar9);
  puVar3 = PTR_s_Buff_Flicker_BrushStealth_Chargi_02bf05c0;
  fVar11 = (float)FUN_00d67b34(param_1);
  FUN_00d3e888(fVar11 + 0.1,0,0,uVar9,puVar3,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar9 = FUN_00d2a6c0();
  FUN_00d42654(auStack_70,uVar9);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar6 + 0x10);
  FUN_00d3e534();
  uVar9 = FUN_00d2a504();
  FUN_00d42654(auStack_70,uVar9);
  FUN_00d3e534();
  uVar9 = FUN_00d2a994();
  FUN_00d42654(auStack_70,uVar9);
  FUN_00d46fc0(uVar9,PTR_s_Buff_Flicker_BrushStealth_Chargi_02bf05c0);
  FUN_00d3e534();
  uVar9 = FUN_00d2a6c0();
  FUN_00d42654(auStack_70,uVar9);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar6 + 0x20);
  FUN_00d3e534();
  uVar9 = FUN_00d2a504();
  FUN_00d42654(auStack_70,uVar9);
  FUN_00d3e534();
  uVar9 = FUN_00d2cb84();
  FUN_00d42654(auStack_70,uVar9);
  FUN_00d3e888(0xbf800000,0,0,uVar9,PTR_s_Buff_Flicker_BrushStealth_02bf05c8,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar9 = FUN_00d2a6c0();
  FUN_00d42654(auStack_70,uVar9);
  lVar6 = FUN_00d65010(param_1);
  plVar10 = (long *)FUN_00d3bc68(lVar6 + 0x10);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x48))();
  (**(code **)(*plVar10 + 0x58))(plVar10,1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1ae50(void)

{
  return;
}




uint FUN_00e1ae54(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d66d28();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d7d300();
  return ~uVar1 & 1;
}




void FUN_00e1ae9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return;
}




void FUN_00e1aea8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  code *local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d66d04(param_1,8,1);
  FUN_00d66d04(param_1,0x100,1);
  FUN_00d6a324(param_1,FUN_00e1ae54);
  FUN_00d67b04(0x3f000000,param_1);
  lVar5 = FUN_00d66d28(param_1);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    lVar8 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_grace_period_02bf05a8;
    uVar4 = FUN_00e6a474(PTR_s_grace_period_02bf05a8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar8 + 0x100) + 8))(lVar8 + 0x100,uVar4);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar4);
    *puVar9 = 0;
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1a6e8;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
  }
  uVar10 = FUN_00d634b4(param_1);
  lVar7 = FUN_00d4aab0(uVar10,FUN_00e1a81c);
  FUN_00d2a320(lVar7 + 0x10);
  uVar10 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,uVar10);
  FUN_00d3e534();
  uVar10 = FUN_00e1c4ec();
  FUN_00d42654(&local_80,uVar10);
  uVar10 = FUN_00d3f7dc(uVar10,4);
  uVar10 = FUN_00d47c3c(uVar10,"CenterBody");
  FUN_00da2040(uVar10,"Effect_Flicker_Stealth_Activate");
  uVar10 = FUN_00da2058(0x3f800000);
  uVar10 = FUN_00da2070(uVar10,1);
  uVar10 = FUN_00da20a0(uVar10,1);
  FUN_00da2088(uVar10,0);
  lVar7 = FUN_00d63f30(param_1);
  plVar11 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Flicker_Stealth_In");
  lVar8 = FUN_00d09310();
  FUN_00d09d70(*(undefined4 *)(lVar8 + 0x37c));
  (**(code **)(*plVar11 + 0x28))(plVar11);
  uVar10 = FUN_00d2d01c(lVar7 + 0x10);
  uVar12 = FUN_00d9b294();
  FUN_00d9b610(uVar12,PTR_s_Buff_Flicker_Talent_FairyHealing_02bf1e88);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar10);
  plVar11 = (long *)FUN_00d2887c();
  plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,PTR_s_Buff_TalentSuiteStandard_02beb4a0);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3f800000);
  local_78 = 1;
  (**(code **)(*plVar11 + 0x18))(plVar11,&local_80);
  lVar7 = FUN_00d65010(param_1);
  lVar7 = lVar7 + 0x10;
  FUN_00d3e3ec(lVar7);
  plVar11 = (long *)FUN_00d2945c(lVar7);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x68))(plVar11,"OverHead");
  plVar11 = (long *)(**(code **)(*plVar11 + 0x48))(plVar11,"Effect_Totem_TrueVision");
  (**(code **)(*plVar11 + 0xb0))(plVar11,1);
  plVar11 = (long *)FUN_00d2945c(lVar7);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x68))(plVar11,"CenterBody");
  plVar11 = (long *)(**(code **)(*plVar11 + 0x48))(plVar11,"Effect_Flicker_Ethereal_Form");
  (**(code **)(*plVar11 + 0x88))(plVar11,1);
  uVar10 = FUN_00d29f44(lVar7);
  local_80 = FUN_00e1b420;
  local_78 = 3;
  FUN_00d47690(uVar10,1,&local_80);
  FUN_00d2b638(lVar7);
  plVar11 = (long *)FUN_00d29c34(lVar7);
  (**(code **)(*plVar11 + 0x30))(plVar11,0xf);
  FUN_00d2b688(lVar7);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,lVar7 + 8);
  FUN_00d3e534();
  uVar10 = FUN_00e17320();
  FUN_00d42654(&local_80,uVar10);
  FUN_00d3e744(uVar10,FUN_00e1ae9c);
  FUN_00d3e534();
  uVar10 = FUN_00e1c4ec();
  FUN_00d42654(&local_80,uVar10);
  uVar10 = FUN_00d3f7dc(uVar10,4);
  uVar10 = FUN_00d47c3c(uVar10,"CenterBody");
  FUN_00da2040(uVar10,"Effect_Flicker_Stealth_Activate");
  uVar10 = FUN_00da2058(0x3f800000);
  uVar10 = FUN_00da2070(uVar10,1);
  uVar10 = FUN_00da20a0(uVar10,1);
  FUN_00da2088(uVar10,0);
  lVar7 = FUN_00d65e5c(param_1);
  plVar11 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Flicker_Stealth_In");
  lVar7 = FUN_00d09310();
  FUN_00d09d70(*(undefined4 *)(lVar7 + 0x37c));
  (**(code **)(*plVar11 + 0x28))(plVar11);
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar5 + 0x260),
                       PTR_s_Buff_Flicker_Talent_FairyHealing_02bf1e88);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    FUN_00d425ec(&local_80,lVar7 + 0x28);
    lVar7 = *(long *)(lVar5 + 0x40);
    fVar13 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
             (*(float *)(lVar7 + 0x38) +
             *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
    if (DAT_031b95d0 <= fVar13) {
      fVar13 = DAT_031b95d0;
    }
    fVar15 = DAT_031b9510;
    if (DAT_031b9510 <= fVar13) {
      fVar15 = fVar13;
    }
    fVar13 = (float)FUN_00d5a3d0(lVar5,DAT_0320e64c,0,9);
    fVar14 = (float)FUN_00d67b0c(param_1);
    FUN_00d3e534();
    lVar5 = FUN_00d29738();
    FUN_00d42654(&local_80,lVar5);
    *(float *)(lVar5 + 0x10) = fVar14 * fVar13 * fVar15;
  }
  lVar5 = FUN_00d64980(param_1);
  plVar11 = (long *)FUN_00d2cc5c(lVar5 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Flicker_Stealth_Out");
  lVar5 = FUN_00d09310();
  FUN_00d09d70(*(undefined4 *)(lVar5 + 0x37c));
  (**(code **)(*plVar11 + 0x28))(plVar11);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

