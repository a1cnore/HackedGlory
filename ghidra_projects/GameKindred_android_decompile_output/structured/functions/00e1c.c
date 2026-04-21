// functions/00e1c — 14 functions
#include "libGameKindred.h"




uint FUN_00e1c038(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_00d66d28();
  uVar2 = FUN_00d9ea08();
  uVar1 = FUN_00d6bbac(uVar2,DAT_031b9508,0);
  return ~uVar1 & 1;
}




void FUN_00e1c068(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  code *local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d67b84();
  lVar5 = FUN_00d9e390();
  FUN_00d66d04(param_1,0x100,1);
  FUN_00d6a324(param_1,FUN_00e1c038);
  FUN_00d67b04(0x3f000000,param_1);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    fVar12 = (float)FUN_009bc24c();
    fVar13 = (float)FUN_00d59f54(lVar5,2,3,0x19,0);
    lVar7 = FUN_00d67c60(param_1);
    lVar8 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_grace_period_02bf05a8;
    uVar4 = FUN_00e6a474(PTR_s_grace_period_02bf05a8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar8 + 0x100) + 8))(lVar8 + 0x100,uVar4);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar4);
    *pfVar9 = fVar12 + fVar13;
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
  lVar7 = FUN_00d63f30(param_1);
  plVar11 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Flicker_Stealth_In");
  lVar7 = FUN_00d09310();
  FUN_00d09d70(*(undefined4 *)(lVar7 + 0x37c));
  (**(code **)(*plVar11 + 0x28))(plVar11);
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
  local_80 = FUN_00e1c4d8;
  local_78 = 3;
  FUN_00d47690(uVar10,1,&local_80);
  FUN_00d2b638(lVar7);
  plVar11 = (long *)FUN_00d29c34(lVar7);
  (**(code **)(*plVar11 + 0x30))(plVar11,0xf);
  FUN_00d2b688(lVar7);
  plVar11 = (long *)FUN_00d2ccfc(lVar7);
  (**(code **)(*plVar11 + 0x38))();
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar5 + 0x260),
                       PTR_s_Buff_Flicker_Talent_FairyHealing_02bf1e88);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    FUN_00d425ec(&local_80,lVar7 + 0x28);
    lVar7 = *(long *)(lVar5 + 0x40);
    fVar12 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
             (*(float *)(lVar7 + 0x38) +
             *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
    if (DAT_031b95d0 <= fVar12) {
      fVar12 = DAT_031b95d0;
    }
    fVar13 = DAT_031b9510;
    if (DAT_031b9510 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = (float)FUN_00d5a3d0(lVar5,DAT_0320e64c,0,9);
    fVar14 = (float)FUN_00d67b0c(param_1);
    FUN_00d3e534();
    lVar5 = FUN_00d29738();
    FUN_00d42654(&local_80,lVar5);
    *(float *)(lVar5 + 0x10) = fVar14 * fVar12 * fVar13;
  }
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar5 + 0x10);
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




void FUN_00e1c4d8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void * FUN_00e1c4ec(long param_1)

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
    memset(__s,0,0x88);
    FUN_00d3f7a4(__s);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return __s;
}




void FUN_00e1c5c4(undefined8 *param_1,float *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FUN_00d67c60(*param_1);
  puVar1 = PTR_s_ChargeTime_02bf0608;
  uVar2 = FUN_00e6a474(PTR_s_ChargeTime_02bf0608);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x18))(lVar3 + 0x100,uVar2);
  fVar7 = *pfVar4 + *(float *)((long)param_1 + 0x454);
  uVar5 = FUN_00d426b0(*param_1);
  fVar6 = (float)thunk_FUN_00d086f0(uVar5,1,1);
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  *param_2 = fVar7;
  return;
}




void FUN_00e1c670(undefined8 *param_1,float *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  
  lVar3 = FUN_00d67c60(*param_1);
  puVar1 = PTR_s_ChargeTime_02bf0608;
  uVar2 = FUN_00e6a474(PTR_s_ChargeTime_02bf0608);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x18))(lVar3 + 0x100,uVar2);
  fVar5 = *pfVar4 - *(float *)((long)param_1 + 0x454);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *param_2 = fVar5;
  return;
}




void FUN_00e1c700(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d426b0(*param_1);
  uVar2 = thunk_FUN_00d086f0(uVar1,1,1);
  *param_2 = uVar2;
  return;
}




float FUN_00e1c734(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = FUN_00d426b0();
  lVar5 = FUN_00d67dd4(param_1);
  puVar1 = PTR_s_ChargeTime_02bf0608;
  uVar2 = FUN_00e6a474(PTR_s_ChargeTime_02bf0608);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x18))(lVar5 + 0x100,uVar2);
  fVar8 = *pfVar6;
  iVar3 = FUN_00d66cf4(param_1);
  fVar7 = (float)thunk_FUN_00d086f0(uVar4,iVar3 != 0,1);
  return fVar8 / fVar7;
}




void FUN_00e1c7dc(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e1c7e8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d67c60();
  lVar5 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_ChargeTime_02bf0608;
  uVar3 = FUN_00e6a474(PTR_s_ChargeTime_02bf0608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  uVar3 = (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar3);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar3);
  *puVar6 = 0;
  FUN_00d67dcc(param_1,FUN_00e1c734);
  lVar4 = FUN_00d64ad0(param_1);
  lVar4 = lVar4 + 0x10;
  lVar5 = FUN_00d29e8c(lVar4);
  lVar7 = FUN_00e1e334(lVar5 + 0x10);
  *(code **)(lVar7 + 0x18) = FUN_00e1cab0;
  *(undefined4 *)(lVar7 + 0x20) = 3;
  *(undefined4 *)(lVar7 + 0x28) = 0x80000000;
  *(byte *)(lVar7 + 0x2c) = *(byte *)(lVar7 + 0x2c) & 0xf9;
  uVar8 = FUN_00d314f8(lVar5 + 0x88);
  lVar7 = FUN_00d98a14(uVar8,PTR_s_ChargeTime_02bf0608);
  *(undefined4 *)(lVar7 + 0x18) = 1;
  *(code **)(lVar7 + 0x30) = FUN_00e1c5c4;
  *(undefined1 *)(lVar7 + 0x1c) = 1;
  uVar8 = FUN_00d314f8(lVar5 + 0xa0);
  lVar5 = FUN_00d98a14(uVar8,PTR_s_ChargeTime_02bf0608);
  *(undefined4 *)(lVar5 + 0x18) = 1;
  *(code **)(lVar5 + 0x30) = FUN_00e1c670;
  *(undefined1 *)(lVar5 + 0x1c) = 1;
  lVar5 = FUN_00d29e8c(lVar4);
  lVar7 = FUN_00e1e530(lVar5 + 0x10);
  puVar2 = PTR_s_ChargeTime_02bf0608;
  *(undefined4 *)(lVar7 + 0x18) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 3;
  *(code **)(lVar7 + 8) = FUN_00e1c7dc;
  *(undefined **)(lVar7 + 0x20) = puVar2;
  plVar9 = (long *)FUN_00d39930(lVar5 + 0x88);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))();
  local_68._0_4_ = 1;
  local_60 = 1;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_68);
  lVar4 = FUN_00d29e8c(lVar4);
  lVar5 = FUN_00e1e530(lVar4 + 0x10);
  puVar2 = PTR_s_ChargeTime_02bf0608;
  *(undefined4 *)(lVar5 + 0x18) = 3;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  *(undefined **)(lVar5 + 0x20) = puVar2;
  plVar9 = (long *)FUN_00d39930(lVar4 + 0x88);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))();
  local_68 = (code *)((ulong)local_68._4_4_ << 0x20);
  local_60 = 1;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_68);
  lVar4 = FUN_00d65bcc(param_1);
  plVar9 = (long *)FUN_00d2945c(lVar4 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x60))();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Fortress_Rally");
  (**(code **)(*plVar9 + 0x78))(plVar9,1);
  uVar8 = FUN_00d314f8(lVar4 + 0x10);
  lVar4 = FUN_00d98a14(uVar8,PTR_s_ChargeTime_02bf0608);
  *(undefined4 *)(lVar4 + 0x18) = 1;
  *(code **)(lVar4 + 0x30) = FUN_00e1c700;
  FUN_00d65bcc(param_1);
  lVar4 = FUN_00d48788();
  uVar8 = FUN_00d29f44(lVar4 + 0x10);
  local_68 = FUN_00e1cabc;
  local_60 = 3;
  FUN_00d47690(uVar8,1,&local_68);
  plVar9 = (long *)FUN_00d2ccfc(lVar4 + 0x10);
  (**(code **)(*plVar9 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1cab0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e1cabc(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00e1cac8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Footlf");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_foot");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Footlb");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_foot");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Legrf");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_legRight");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Leglf");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_legLeft");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Legrb");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_backlegRight");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Leglb");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_backlegLeft");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Shoulders");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Back");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Butt");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Tail1");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Tail2");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Tail3");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Tail4");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Tail");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Head");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_EyeGlow");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Footrf");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_foot");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Footrb");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_foot");
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar4);
  uVar4 = FUN_00d47dec(uVar4,"Bone_Shoulders");
  FUN_00da2040(uVar4,"Effect_Fortress_Aura_Back");
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_70,uVar4);
  FUN_00d59f54(uVar2,2,3,9,1);
  FUN_00d40e24(uVar4,0xf,1);
  FUN_00d3e534();
  uVar4 = FUN_00d2b564();
  FUN_00d42654(auStack_70,uVar4);
  FUN_00d59f54(uVar2,2,4,9,1);
  FUN_00d40908(uVar4,5);
  lVar3 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d3bcb8(lVar3 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"u_Ultimate_Active");
  (**(code **)(*plVar5 + 0x38))(0x3f800000);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d29a68();
  FUN_00d42654(auStack_70,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1cf70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Fortress_Bleed");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f000000,uVar4,0);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"BLEED_DAMAGE_BASE",1);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  FUN_00d4bc24();
  uVar4 = FUN_00d4bc38();
  lVar2 = FUN_00d4bcf0(uVar4,0x20000001);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Fortress_Bleeding_02bf0620);
  local_68 = FUN_00dba2c8;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  lVar2 = FUN_00d65bcc(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"ShowHemorrageDamage",1);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_MortalWound_02beb418);
  local_68 = FUN_00e1d224;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  lVar5 = FUN_00d29e8c(lVar2);
  lVar6 = FUN_00e11be0(lVar5 + 0x10);
  if (PTR_s_Ability__Fortress__B_02beea40 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar9 = (uint)(byte)*PTR_s_Ability__Fortress__B_02beea40;
    uVar7 = 0x811c9dc5;
    pbVar8 = PTR_s_Ability__Fortress__B_02beea40;
    if (*PTR_s_Ability__Fortress__B_02beea40 != 0) {
      do {
        uVar10 = (uint)pbVar8[1];
        uVar7 = (uVar7 ^ uVar9) * 0x1000193;
        uVar9 = uVar10;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  *(uint *)(lVar6 + 8) = uVar7;
  plVar3 = (long *)FUN_00d2cf7c(lVar5 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Fortress_Slow_02bf0628);
  local_68 = FUN_00e1d238;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  FUN_00d2a320(lVar2);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_MortalWound_02beb418);
  local_68 = (code *)((ulong)local_68 & 0xffffffff00000000);
  local_60 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

