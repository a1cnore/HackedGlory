// functions/00e54 — 32 functions
#include "libGameKindred.h"




void FUN_00e54010(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e5401c(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e54080;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e54080(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,0x19,0);
  return;
}




void FUN_00e54094(void)

{
  return;
}




void FUN_00e54098(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Caine_C_Passthrough");
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_C_Attack_Impact");
  lVar1 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar1 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x00e54128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




undefined1  [16] FUN_00e5412c(undefined8 param_1)

{
  ulong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = FUN_00d59f54(param_1,2,3,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  uVar1 = FUN_00d44be0(param_1,PTR_s_Buff_Caine_Talent_TalentB_02bf2318);
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d5a3d0(param_1,DAT_0320ed1c,0,9);
    uVar4 = (ulong)(uint)(auVar3._0_4_ + fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




void FUN_00e541a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = FUN_00d64ad0();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00e546dc(lVar1 + 0x10);
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(code **)(lVar2 + 8) = FUN_00e5412c;
  *(undefined4 *)(lVar2 + 0x10) = 3;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  lVar2 = FUN_00d29e8c(lVar1 + 0x88);
  lVar3 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Caine_C_KillMarker_PFX_02bf18c0;
  plVar4 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Caine_C_KillMarker_PFX_02bf18c0);
  plVar4 = (long *)FUN_00d2a160(lVar1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00e5424c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Caine_C_KillMarker_PFX_02bf18c0);
  return;
}




void FUN_00e54250(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Caine_C_LowHP");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00e542b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e542b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d66d28(*param_1);
  uVar3 = 0;
  if ((*(byte *)(lVar2 + 0x2f9) >> 1 & 1) == 0) {
    lVar4 = FUN_00d9ea34(lVar2);
    if (lVar4 != 0) {
      thunk_FUN_00d9ff34(local_40,PTR_s_Buff_Caine_C_KillMarker_PFX_02bf18c0);
      uVar5 = FUN_00d6bbac(lVar4,local_40[0],0);
      uVar3 = 0;
      if ((uVar5 & 1) == 0) goto LAB_00e543b4;
      thunk_FUN_00d9ff34(local_48,PTR_s_Buff_Item_SeraphicShell_02beb9a8);
      uVar5 = FUN_00d6bbac(lVar4,local_48[0],0);
      if ((uVar5 & 1) != 0) {
        thunk_FUN_00d9ff34(local_50,PTR_s_Buff_Item_SeraphicShell_IsActive_02beb9b0);
        uVar5 = FUN_00d6bbac(lVar4,local_50[0],0);
        uVar3 = 0;
        if ((uVar5 & 1) != 0) goto LAB_00e543b4;
        local_58[0] = 0x1d654a0e;
        lVar2 = thunk_FUN_00d9f258(lVar2,local_58);
        if (lVar2 != 0) {
          fVar6 = (float)FUN_00d6d9f4();
          uVar3 = 0;
          if (fVar6 <= 0.0) goto LAB_00e543b4;
        }
      }
    }
    uVar3 = 1;
  }
LAB_00e543b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00e543dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  lVar3 = FUN_00d29e8c(lVar2 + 0x10);
  lVar4 = FUN_00d29edc(lVar3 + 0x10);
  lVar2 = lVar3 + 0x88;
  *(code **)(lVar4 + 8) = FUN_00e542b8;
  FUN_00d39534(lVar2);
  plVar5 = (long *)FUN_00d2a414(lVar2);
  (**(code **)(*plVar5 + 0x30))(plVar5,0x18);
  plVar5 = (long *)FUN_00e4c798(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Caine_C_Execute_Reaction_02bf18d0);
  local_48[0] = 0x40a00000;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
  FUN_00d2ab44(lVar2);
  plVar5 = (long *)FUN_00d2945c(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"CenterBody");
  (**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Caine_C_ExecuteSuccess");
  FUN_00d39534(lVar3 + 0xa0);
  plVar5 = (long *)FUN_00d2b818(lVar3 + 0xa0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"EXPLOSIONDAMAGE",2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e54518(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65a7c();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_AmmoControl_02bf1898);
  local_58 = FUN_00e00564;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  local_58 = FUN_00e00564;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  uVar4 = FUN_00d635f4(param_1);
  uVar4 = FUN_00d4ac24(uVar4,PTR_s_Ability__Caine__C_02befe70);
  lVar2 = FUN_00d4ac68(uVar4,1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00e54808(lVar2 + 0x10);
  if (PTR_s_Ability__Caine__C_02befe70 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Caine__C_02befe70;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Caine__C_02befe70;
    if (*PTR_s_Ability__Caine__C_02befe70 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  *(undefined4 *)(lVar5 + 0xc) = 1;
  uVar4 = FUN_00d31490(lVar2 + 0x88);
  FUN_00d9ca38(uVar4,FUN_00e53b98);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x88);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_C_KillMarker_02bf18b8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e54698(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2882c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"ultimateKill");
                    /* WARNING: Could not recover jumptable at 0x00e546d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(0x3e19999a);
  return;
}




void FUN_00e546d8(void)

{
  return;
}




undefined8 * FUN_00e546dc(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_0281fe28;
      *puVar2 = 0;
      puVar2[2] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00e5474c(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar1 = FUN_00d99120(param_2);
  if (lVar1 != 0) {
    uVar3 = FUN_00d9ed38(lVar1,*(undefined4 *)(param_1 + 0x1c));
    if (*(char *)(param_1 + 0x20) != '\0') {
      fVar2 = (float)FUN_00d9ed48(lVar1,*(undefined4 *)(param_1 + 0x1c));
      fVar5 = (float)uVar3;
      uVar3 = 0;
      if (1.1920929e-07 <= ABS(fVar2)) {
        uVar3 = (ulong)(uint)(fVar5 / fVar2);
      }
    }
    uVar4 = FUN_00a83478(param_1 + 8,param_2,0);
    FUN_00d99988(uVar3,uVar4,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}




undefined8 * FUN_00e54808(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281fe50;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00e54864(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d9944c(param_2);
  if (lVar1 != 0) {
    FUN_00d99c88(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_00e548a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2ccac(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__Enhanced_Basic_02befe90);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e54958;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e54958(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e54964(void)

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
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_B_Grenade_02bf18f8);
  local_38 = FUN_00e549e8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e549e8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e549fc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_B_Warning");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_00d63f30(param_1);
  FUN_00e0c91c(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2cf7c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_B_DetonateAvailable_02bf1900);
  lVar1 = FUN_00d64980(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d46828(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Warhawk__B_Grenade_Expl_02befeb0);
  FUN_00e0c91c(lVar1);
  plVar2 = (long *)FUN_00d2cfcc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e54ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_B_DetonateAvailable_02bf1900);
  return;
}




void FUN_00e54ad4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Warhawk__B_02befea0,PTR_s_Ability__Warhawk__B_Detonate_02befea8)
  ;
  lVar1 = FUN_00d64980(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00e213ac(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__B_02befea0);
  FUN_00d44ee8(lVar1);
  plVar3 = (long *)FUN_00d2cfcc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e54b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_B_Grenade_02bf18f8);
  return;
}




void FUN_00e54b5c(void)

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
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  (**(code **)(*plVar3 + 0x98))();
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_38 = FUN_00e54c28;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e54c28(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e54c3c(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x1f,"Effect_Stunned_buff",0);
  return;
}




void FUN_00e54c50(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  FUN_00d29be4(lVar1 + 0x10);
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Warhawk__C_02befeb8,PTR_s_Ability__Warhawk__C_Aim_02befec0);
  lVar1 = FUN_00d65bcc(param_1);
  FUN_00d2a320(lVar1 + 0x10);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00d44df8(lVar1);
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_00d46828(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_Fire_02befec8);
  plVar3 = (long *)FUN_00e213ac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e54d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_02befeb8);
  return;
}




void FUN_00e54d14(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  FUN_00d29be4(lVar1 + 0x10);
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Warhawk__C_02befeb8,PTR_s_Ability__Warhawk__C_Aim_02befec0);
  lVar1 = FUN_00d65bcc(param_1);
  FUN_00d2a320(lVar1 + 0x10);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00d44df8(lVar1);
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_00d46828(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_Fire_02befec8);
  plVar3 = (long *)FUN_00e213ac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e54dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_02befeb8);
  return;
}




void FUN_00e54dd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40400000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e54e88(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Warhawk_C_Warning");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_C_Control_02bf1930);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e54f5c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d64980();
  FUN_00d2ab44(lVar1 + 0x10);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e54f90(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Warhawk_C_FireAOE");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_C_Control_02bf1930);
  local_48 = FUN_00e55144;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Warhawk_C_Burning");
  lVar2 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar2 + 0x628));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f000000,uVar4,1);
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00d31490(lVar2);
  FUN_00d9ca38(uVar4,FUN_00e54dd8);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_C_Slow_02bf1940);
  local_48 = FUN_00e55158;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_C_BurnDamage_02bf1948);
  local_48 = FUN_00e55158;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

