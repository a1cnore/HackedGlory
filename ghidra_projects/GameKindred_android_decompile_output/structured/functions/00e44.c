// functions/00e44 — 21 functions
#include "libGameKindred.h"




void FUN_00e44068(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xbf28f5c3;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0,2,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xc2c80000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,7,0,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xc2c80000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,8,0,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44140(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,7);
  return;
}




void FUN_00e44190(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d63c7c();
  lVar3 = FUN_00e5d9b0(uVar2,PTR_s_Buff_Catherine_MercilessPursuit__02bf04f0);
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_58[0] = 0x40400000;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_58);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00d44d9c);
  uVar2 = FUN_00d63c7c(param_1);
  lVar3 = FUN_00e5d9b0(uVar2,PTR_s_Buff_Catherine_MercilessPursuit__02bf04e8);
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_58[0] = 0x40400000;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_58);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00d44d9c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44298(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bca4(uVar2,3);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e44318(long param_1)

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
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN_00d418e0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e443e8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"ShieldBreak");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2df44(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Idle_NoShield");
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e44484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Turret_Invulnerable_02bebac8);
  return;
}




void FUN_00e44488(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar3 = FUN_00d66d28(local_50);
  uVar4 = FUN_00daa58c(local_58,uVar3);
  if ((uVar4 & 1) != 0) {
    uVar7 = FUN_009bc24c();
    lVar5 = FUN_00d67c60(local_50);
    uVar2 = FUN_00e6a474("timeOfLastDamage");
    uVar2 = FUN_0091ed5c("timeOfLastDamage",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    *puVar6 = uVar7;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44554(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_90 [64];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00ceace8();
    uVar3 = FUN_00ceae88();
    if ((uVar3 & 1) == 0) {
      FUN_00d69224(param_1,&local_50);
      lVar4 = FUN_00d66d28(local_50);
      fVar7 = (float)FUN_009bc24c();
      uVar2 = FUN_00e6a474("timeOfLastDamage");
      uVar2 = FUN_0091ed5c("timeOfLastDamage",uVar2,0x12345678);
      pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
      if (5.0 < fVar7 - *pfVar5) {
        lVar6 = *(long *)(lVar4 + 0x40);
        fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
                (*(float *)(lVar6 + 0x38) +
                *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
        if (DAT_031bb5c0 <= fVar7) {
          fVar7 = DAT_031bb5c0;
        }
        fVar8 = DAT_031bb500;
        if (DAT_031bb500 <= fVar7) {
          fVar8 = fVar7;
        }
        if (*(float *)(lVar6 + 0x308) < fVar8) {
          FUN_00daa4a4(fVar8 / 60.0,auStack_90,*(undefined4 *)(lVar4 + 0x260),
                       *(undefined4 *)(lVar4 + 0x260),0xffffffff,0xffffffff,0xee,0xffffffff);
          FUN_00910c0c(auStack_90);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e446c4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e44554;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e44488;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("timeOfLastDamage");
  uVar4 = FUN_0091ed5c("timeOfLastDamage",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  uVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar6);
  FUN_00d3e534();
  uVar6 = FUN_00d2a8bc();
  FUN_00d42654(auStack_60,uVar6);
  uVar6 = FUN_00d47c14(uVar6);
  FUN_00da2040(uVar6,"Effect_Nexus_Arcane_LifeTimePFX");
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44854(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d64464();
  FUN_00d4bbf8(uVar1,4);
  uVar1 = FUN_00d4bc24();
  FUN_00d4bce8(uVar1,8);
  lVar2 = FUN_00d4bc38();
  plVar3 = (long *)FUN_00d46828(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e44898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__VainCrystal__HitReact_02bef678);
  return;
}




void FUN_00e4489c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,0xff,3);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_VainCrystal_B_Warning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0x3f800000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3f000000);
  local_68._0_4_ = 0x3fc00000;
  local_60 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_68);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e31e30);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_VainCrystal_B_Impact");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3f800000);
  local_60 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_68);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_rupture_stun_line.mp3");
  (**(code **)(*plVar3 + 0x28))(0x3e99999a);
  plVar3 = (long *)FUN_00d2b778(lVar2);
  local_68 = FUN_00e44ae4;
  local_60 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,&local_68);
  (**(code **)(*plVar3 + 0x20))(0x3e99999a);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Nexus_5v5_AbilityB_Impact_02bf11d8);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3f800000);
  local_60 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e44dc4);
  FUN_00d2ab44(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44ae4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




float FUN_00e44af8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d426b0(*param_1);
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031bb5c0 <= fVar3) {
    fVar3 = DAT_031bb5c0;
  }
  fVar5 = DAT_031bb500;
  if (DAT_031bb500 <= fVar3) {
    fVar5 = fVar3;
  }
  fVar4 = (float)FUN_00d59f54(uVar1,2,0,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  fVar3 = fVar3 + fVar4 * fVar5;
  if ((*(byte *)(param_2 + 0x2f4) & 8) != 0) {
    fVar3 = fVar3 * 0.5;
  }
  return fVar3;
}




void FUN_00e44bbc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_38 = FUN_00e44c90;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_38 = FUN_00e44af8;
  local_30 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,3,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44c90(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,0x19,0);
  return;
}




void FUN_00e44ca4(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00d6a078();
  if (iVar1 != -1) {
    *param_3 = "CenterBody";
    lVar2 = FUN_00d9e390();
    if (lVar2 != 0) {
      *param_2 = lVar2;
    }
  }
  return;
}




void FUN_00e44cf4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_40,lVar3 + 0x30);
    FUN_00d6a078(param_1);
    lVar3 = FUN_00d9e390();
    if (lVar3 != 0) {
      FUN_00d3e534();
      uVar4 = FUN_00d294ac();
      FUN_00d42654(auStack_40,uVar4);
      uVar4 = FUN_00d47dc4(uVar4,"CenterBody");
      uVar4 = FUN_00da2040(uVar4,"Effect_VainCrystal_Target_Laser");
      uVar4 = FUN_00da2070(uVar4,1);
      FUN_00da20cc(uVar4,FUN_00e44ca4);
      uVar4 = FUN_00da20b8(0);
      FUN_00da20dc(uVar4,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e44dbc(void)

{
  return;
}




void FUN_00e44dc0(void)

{
  return;
}




void FUN_00e44dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fd9999a;
  return;
}




void FUN_00e44dd4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1a8 [16];
  undefined8 local_198;
  undefined1 auStack_190 [96];
  undefined1 auStack_130 [96];
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_198);
  lVar6 = FUN_00d66d28(local_198);
  uVar2 = FUN_00e6a474("time_last_barrier_disabled");
  uVar2 = FUN_0091ed5c("time_last_barrier_disabled",uVar2,0x12345678);
  pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  lVar9 = *(long *)(lVar6 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  uVar8 = FUN_00d6bbac(lVar9,DAT_0315c904,0);
  if ((uVar8 & 1) == 0) {
    FUN_00d55794(lVar6,auStack_1a8,0);
    FUN_00d4d9e8(auStack_d0);
    FUN_00d4daf4(auStack_d0,0,1,0,lVar6);
    FUN_00d4db48(0x418c0000,auStack_d0,auStack_1a8);
    FUN_00d4dabc(auStack_d0,4);
    FUN_00d4d9e8(auStack_130);
    FUN_00d4daf4(auStack_130,0,1,0,lVar6);
    FUN_00d4db48(0x418c0000,auStack_130,auStack_1a8);
    FUN_00d4dabc(auStack_130,0x10);
    FUN_00d4d9e8(auStack_190);
    FUN_00d4daf4(auStack_190,0,1,0,lVar6);
    FUN_00d4db48(0x418c0000,auStack_190,auStack_1a8);
    FUN_00d4dabc(auStack_190,1);
    iVar3 = FUN_00d9e840(auStack_d0,auStack_60,1,0);
    iVar4 = FUN_00d9e840(auStack_130,auStack_68,1,0);
    iVar5 = FUN_00d9e840(auStack_190,auStack_70,1,0);
    if ((iVar4 != 0 || iVar3 != 0) || iVar5 != 0) {
      fVar10 = (float)FUN_009bc24c();
      *pfVar7 = fVar10;
      FUN_00d66d34(local_198);
      lVar9 = FUN_00d7bcfc();
      if (lVar9 != 0) {
        FUN_00d7f9ec(lVar6,lVar9);
      }
      goto LAB_00e4508c;
    }
  }
  fVar10 = (float)FUN_009bc24c();
  FUN_00d66d34(local_198);
  lVar9 = FUN_00d7bcfc();
  if (lVar9 == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)FUN_00d7bce4(lVar9);
    if (800.0 <= fVar11) goto LAB_00e4508c;
  }
  if (*pfVar7 + 3.0 < fVar10) {
    fVar10 = (float)FUN_00d67b0c(local_198);
    fVar10 = (float)NEON_fminnm(fVar11 + fVar10 * 200.0,0x44480000);
    if (lVar9 == 0) {
      uVar2 = FUN_00d66d34(local_198);
      FUN_00d7f914(fVar10,lVar6,lVar6,4,uVar2);
    }
    else {
      FUN_00d7fa78(fVar10 - fVar11,lVar6,lVar6,lVar9);
    }
  }
LAB_00e4508c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

