// functions/00e19 — 23 functions
#include "libGameKindred.h"




void FUN_00e19080(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar5 = FUN_00d9e390();
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onEndName_02bed518;
    uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e18dd8;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
    FUN_00d59f54(uVar5,1,4,0x19,0);
    FUN_00d67d04(param_1);
  }
  lVar7 = FUN_00d63f30(param_1);
  plVar8 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Celeste_Ability_B_Cast");
  lVar9 = FUN_00d09310();
  FUN_00d09830(*(undefined4 *)(lVar9 + 0x19c));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  plVar8 = (long *)FUN_00d2887c(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_DelayedKill_02beb3e0);
  local_58[0] = (float)FUN_00d59f54(uVar5,1,4,0x19,0);
  local_50 = 1;
  local_58[0] = local_58[0] + 0.2;
  (**(code **)(*plVar8 + 0x18))(plVar8,local_58);
  lVar7 = FUN_00d65010(param_1);
  plVar8 = (long *)FUN_00d2945c(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Celeste_EventHorizon_Enemy");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x50))(plVar8,"Effect_Celeste_EventHorizon");
  (**(code **)(*plVar8 + 0x78))(plVar8,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1926c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00d63f30(param_1);
    plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Celeste_Shockwave_Impact_Enemy");
    (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Celeste_Shockwave_Impact");
    plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Celeste_Ability_B_Damage_1");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Celeste_Ability_B_Damage_2");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Celeste_Ability_B_Damage_3");
    lVar2 = FUN_00d09310();
    FUN_00d09830(*(undefined4 *)(lVar2 + 0x1a0));
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  return;
}




void FUN_00e1933c(void)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d63b38();
  lVar1 = FUN_00d4b770();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e19368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Celeste_DeathVFX_02bf0540);
  return;
}




void FUN_00e1936c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Staff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_Staff_Explode");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Frozen");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_UpperBack");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_SNW_coldMist_Idle");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  lVar1 = FUN_00d65fac(param_1);
  FUN_00d2a320(lVar1 + 0x10);
  return;
}




undefined8 * FUN_00e19450(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_0281f488;
      puVar1[1] = 0;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00e194ac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a8bc();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47c14(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_PetalMinion_Explosion");
  FUN_00da20a0(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d29cd4();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19558(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_40,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  FUN_00da2040(uVar2,"Effect_PetalMinion_Explosion");
  FUN_00d3e534();
  uVar2 = FUN_00d3a2b8();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3f5c4(uVar2,PTR_s_Ability__Emote_Dance_02bee7f8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19614(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d6a078();
  uVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x3fc00000,uVar3,0,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x40400000,uVar3,4,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  fVar4 = (float)iVar2 + (float)iVar2;
  FUN_00d40cd4(fVar4,uVar3,0,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(fVar4,uVar3,4,2,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1975c(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031b9280 <= fVar2) {
    fVar2 = DAT_031b9280;
  }
  fVar3 = DAT_031b91c0;
  if (DAT_031b91c0 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3 * 0.25;
  return;
}




void FUN_00e197b8(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031b9280 <= fVar2) {
    fVar2 = DAT_031b9280;
  }
  fVar3 = DAT_031b91c0;
  if (DAT_031b91c0 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3 * 0.1;
  return;
}




void FUN_00e19818(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67ae4();
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d29738();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d402f8(uVar2,FUN_00e1975c);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47d9c(uVar2);
  uVar2 = FUN_00da2040(uVar2,"Effect_AdagioFortunesSmile_buff");
  FUN_00da2070(uVar2,1);
  FUN_00da20b8(0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x28);
  FUN_00d3e534();
  uVar2 = FUN_00d29738();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d402f8(uVar2,FUN_00e197b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19958(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Horde_Ring_Green");
  FUN_00da2070(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e199dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Horde_Ring_Blue");
  FUN_00da2070(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19a60(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Horde_Ring_Purple");
  FUN_00da2070(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19ae4(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_110 [2];
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  thunk_FUN_00d9ff34(local_110,*param_4);
  puVar4 = PTR_s_Buff_Phinn_ResistCC_SlowedInstea_02bf0570;
  uVar2 = *(undefined4 *)(param_3 + 0x260);
  uVar5 = FUN_00ceb350();
  FUN_00cfe864(param_1,0,0,auStack_b0,uVar2,uVar2,puVar4,uVar5,1,0,0);
  FUN_00ce20fc(auStack_b0);
  puVar4 = PTR_s_Buff_Silence_02beb428;
  if (((((local_110[0] == DAT_0315c91c) || (local_110[0] == DAT_0315c928)) ||
       (local_110[0] == DAT_031bae80)) ||
      ((local_110[0] == DAT_0315c950 || (local_110[0] == DAT_031bc740)))) ||
     ((local_110[0] == DAT_031bcc04 ||
      ((local_110[0] == DAT_031bcc00 || (local_110[0] == DAT_031bcdd8)))))) {
    puVar1 = (undefined4 *)(param_3 + 0x260);
    if (param_2 != 0) {
      puVar1 = (undefined4 *)(param_2 + 0x260);
    }
    uVar2 = *(undefined4 *)(param_3 + 0x260);
    uVar5 = *puVar1;
    uVar6 = FUN_00ceb350();
    FUN_00cfe864(param_1,0,0,auStack_108,uVar5,uVar2,puVar4,uVar6,1,0,0);
    FUN_00ce20fc(auStack_108);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19ca0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  uVar3 = FUN_00d66d28(param_1);
  thunk_FUN_00d086f0(uVar3,1,1);
  FUN_00d40cd4(uVar2,0x13,0,1,0);
  lVar4 = FUN_00d65010(param_1);
  uVar2 = FUN_00d29a18(lVar4 + 0x10);
  uVar2 = FUN_00d46cdc(uVar2,0x14);
  uVar2 = FUN_00d46d28(uVar2,FUN_00e19ae4);
  FUN_00d46d30(uVar2,9);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19d6c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e19d78(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e19d6c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2882c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,"perk_laugh");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19dfc(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e19e58;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e19e58(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00e19e6c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    thunk_FUN_00d69224(param_1,&local_98);
    lVar6 = FUN_00d67b78(local_98);
    puVar3 = PTR_s_Buff_Phinn_Perk_DefenseBonus_Per_02bf0588;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e19f1c(float param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = (float)thunk_FUN_00d086f0(param_2,0,1);
  return -(param_1 - param_1 / (fVar1 + 1.0));
}




void FUN_00e19f58(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onActorLevelUpName_02bed550;
  uVar4 = FUN_00e6a474(PTR_s_onActorLevelUpName_02bed550);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e19e6c;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x30);
  lVar5 = FUN_00d66d28(param_1);
  FUN_00d3e534();
  uVar6 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar6);
  fVar9 = *(float *)(*(long *)(lVar5 + 0x38) + 0xe0);
  fVar7 = (float)thunk_FUN_00d086f0(lVar5,0,1);
  FUN_00d40e24(-(fVar9 - fVar9 / (fVar7 + 1.0)),uVar6,0,1);
  FUN_00d3e534();
  uVar6 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar6);
  fVar9 = *(float *)(*(long *)(lVar5 + 0x38) + 0x110);
  fVar7 = (float)thunk_FUN_00d086f0(lVar5,0,1);
  FUN_00d40e24(-(fVar9 - fVar9 / (fVar7 + 1.0)),uVar6,7,1);
  FUN_00d3e534();
  uVar6 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar6);
  fVar9 = *(float *)(*(long *)(lVar5 + 0x38) + 0x118);
  fVar7 = (float)thunk_FUN_00d086f0(lVar5,0,1);
  FUN_00d40e24(-(fVar9 - fVar9 / (fVar7 + 1.0)),uVar6,8,1);
  uVar8 = thunk_FUN_00d086f0(lVar5,0,1);
  FUN_00d3e534();
  uVar6 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar6);
  FUN_00d40e24(uVar8,uVar6,0,2);
  FUN_00d3e534();
  uVar6 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar6);
  FUN_00d40e24(uVar8,uVar6,7,2);
  FUN_00d3e534();
  uVar6 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar6);
  FUN_00d40e24(uVar8,uVar6,8,2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

