// functions/00e37 — 9 functions
#include "libGameKindred.h"




void FUN_00e3753c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_70);
    lVar6 = FUN_00d66d28(local_70);
    lVar7 = *(long *)(lVar6 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    uVar5 = FUN_00d6bbac(lVar7,DAT_031bacd0,0);
    if ((uVar5 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      uVar3 = FUN_00d66d34(local_70);
      iVar4 = FUN_00d66cf4(local_70);
      FUN_00d048bc(auStack_68,uVar1,uVar3,iVar4 + 1,1);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e37620(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d66d28();
  FUN_00d67b04(0x3f800000,param_1);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3753c;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d2b564();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d59f54(uVar5,2,5,0x19,0);
  FUN_00d40908(uVar7,5);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e37734(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4403c(param_1,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_LeftAxe");
  FUN_00da2040(uVar3,"Effect_Rona_Weapon");
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_RightAxe");
  FUN_00da2040(uVar3,"Effect_Rona_Weapon2");
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Rona_Withdraw");
  FUN_00da2070(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e37830(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d3f068(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e37900(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099e78c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void * FUN_00e37950(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    memset(__s,0,0x78);
    FUN_00e5d4b4(__s);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return __s;
}




void FUN_00e37a28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67dcc(param_1,FUN_00d69f90);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2cb84();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e888(0xbf800000,0,0,uVar3,PTR_s_Buff_Samuel_EmpoweredAttackAvail_02bf0e70,1,0xffffffff,0,0
              );
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e37b00(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  int local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f9;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined2 local_89;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    FUN_00d69224(param_1,&local_168);
    uVar5 = FUN_00d66d28(local_168);
    plVar6 = (long *)FUN_00d5bae0();
    puVar2 = PTR_s_left_pfx_id_02bf0e78;
    local_ac = DAT_03218f40;
    uStack_d8 = 0;
    local_e0 = 0;
    local_d0 = 0xa9df1176;
    local_b4 = _DAT_03218ef8;
    uStack_e8 = 0;
    local_f0 = 0;
    local_a4 = DAT_03218f48;
    local_c4 = 0;
    local_bc = 0xff000000;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 2;
    local_8c = 0x101;
    local_8a = 0;
    local_89 = 0;
    local_cc = 0xbf800000;
    local_c8 = 0xffffffff;
    uVar3 = FUN_00e6a474(PTR_s_left_pfx_id_02bf0e78);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    local_c8 = (int)*pfVar7;
    uStack_d8 = (**(code **)(*plVar6 + 0x178))(plVar6);
    FUN_00d5a578(uVar5,&local_f0,"Bone_Wand_L");
    puVar2 = PTR_s_right_pfx_id_02bf0e80;
    local_140 = 0xa9df1176;
    uStack_13c = 0xbf800000;
    local_138 = 0xffffffff;
    local_124 = _DAT_03218ef8;
    local_11c = DAT_03218f40;
    local_114 = DAT_03218f48;
    uStack_158 = 0;
    local_160 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_134 = 0;
    local_12c = 0xff000000;
    local_110 = 0;
    local_108 = 0;
    local_104 = 2;
    local_fc = 0x101;
    local_fa = 0;
    local_f9 = 0;
    uVar3 = FUN_00e6a474(PTR_s_right_pfx_id_02bf0e80);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    local_138 = (int)*pfVar7;
    local_148 = (**(code **)(*plVar6 + 0x178))(plVar6);
    FUN_00d5a578(uVar5,&local_160,"Bone_Wand_R");
  }
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e37d44(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar7 = FUN_00d66d28();
  uVar4 = FUN_00ceb350();
  uVar5 = FUN_00ceb350();
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) == 0) {
    lVar9 = FUN_00d67c60(param_1);
    lVar11 = lVar9 + 0x100;
    uVar6 = (*(code *)**(undefined8 **)(lVar9 + 0x100))(lVar11,PTR_s_left_pfx_id_02bf0e78);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x100) + 0x10))(lVar11,uVar6);
    *pfVar10 = (float)uVar4;
    uVar6 = (*(code *)**(undefined8 **)(lVar9 + 0x100))(lVar11,PTR_s_right_pfx_id_02bf0e80);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x100) + 0x10))(lVar11,uVar6);
    *pfVar10 = (float)uVar5;
    lVar11 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onActorRespawnName_02bed598;
    uVar6 = FUN_00e6a474(PTR_s_onActorRespawnName_02bed598);
    uVar6 = FUN_0091ed5c(puVar3,uVar6,0x12345678);
    *(undefined4 *)(lVar11 + 0x38 + (ulong)*(uint *)(lVar11 + 0xf8) * 4) = uVar6;
    uVar1 = *(uint *)(lVar11 + 0xf8);
    *(code **)(lVar11 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e37b00;
    *(uint *)(lVar11 + 0xf8) = uVar1 + 1;
  }
  uVar14 = thunk_FUN_00d086f0(lVar7,0,1);
  uVar8 = FUN_00d44008(*(undefined4 *)(lVar7 + 0x260),PTR_s_Buff_Samuel_Talent_PowerSiphon_02bee270)
  ;
  if ((uVar8 & 1) != 0) {
    uVar14 = FUN_00d5a3d0(lVar7,DAT_031ac740,1,9);
  }
  lVar7 = FUN_00d63f30(param_1);
  plVar12 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x38))(plVar12,"Sound_Samuel_attack_empowered_ready");
  lVar7 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar7 + 0x30c));
  (**(code **)(*plVar12 + 0x28))(plVar12);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar7 + 0x30);
  FUN_00d3e534();
  uVar13 = FUN_00e2d174();
  FUN_00d42654(auStack_70,uVar13);
  FUN_00d3f364(uVar13,PTR_s_Ability__Samuel__EmpoweredAttack_02bef488);
  FUN_00d3e534();
  uVar13 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar13);
  uVar13 = FUN_00d47dec(uVar13,"Bone_Wand_L");
  uVar13 = FUN_00da2040(uVar13,"Effect_Samuel_EmpoweredAttackAvailable");
  FUN_00da2060(uVar13,uVar4);
  FUN_00d3e534();
  uVar13 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar13);
  uVar13 = FUN_00d47dec(uVar13,"Bone_Wand_R");
  uVar13 = FUN_00da2040(uVar13,"Effect_Samuel_EmpoweredAttackAvailable");
  FUN_00da2060(uVar13,uVar5);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar7 + 0x18);
  FUN_00d3e534();
  uVar13 = FUN_00d2a504();
  FUN_00d42654(auStack_70,uVar13);
  FUN_00d3e534();
  uVar13 = FUN_00d2cb84();
  FUN_00d42654(auStack_70,uVar13);
  FUN_00d3e888(uVar14,0,0,uVar13,PTR_s_Buff_Samuel_EmpoweredAttackCharg_02bf0e68,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar14 = FUN_00d2a6c0();
  FUN_00d42654(auStack_70,uVar14);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

