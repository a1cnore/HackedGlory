// functions/00df1 — 16 functions
#include "libGameKindred.h"




void FUN_00df127c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00df1290(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_00cf9f7c();
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 8) = puVar1;
  plVar4 = (long *)FUN_00cfac24(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Kinetic_Mini_Projectiles_01");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Kinetic_Mini_Projectiles_02");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Kinetic_Mini_Projectiles_03");
  lVar3 = FUN_00d09310();
  FUN_00d0a160(*(undefined4 *)(lVar3 + 0x4c8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar5 = FUN_00cfb17c(lVar2 + 0xb0);
  FUN_00cfcad8(uVar5,0x8f,"Aemit");
  lVar2 = FUN_00cf9f7c(param_1);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0;
  *(undefined4 *)(lVar3 + 0x10) = 2;
  *(undefined **)(lVar3 + 8) = puVar1;
  uVar5 = FUN_00cfb17c(lVar2 + 0xb0);
  FUN_00cfcad8(uVar5,0x8f,"Aemit");
  lVar2 = FUN_00cf9f7c(param_1);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0;
  *(undefined4 *)(lVar3 + 0x10) = 3;
  *(undefined **)(lVar3 + 8) = puVar1;
  uVar5 = FUN_00cfb17c(lVar2 + 0xb0);
  FUN_00cfcad8(uVar5,0x8f,"Aemit");
  lVar2 = FUN_00cf9f7c(param_1);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0;
  *(undefined4 *)(lVar3 + 0x10) = 4;
  *(undefined **)(lVar3 + 8) = puVar1;
  uVar5 = FUN_00cfb17c(lVar2 + 0xb0);
  FUN_00cfcad8(uVar5,0x8f,"Aemit");
  return;
}




void FUN_00df1404(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Kinetic_Ranged_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Kinetic_Ranged_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Kinetic_Ranged_Attack_03");
  lVar4 = FUN_00d09310();
  FUN_00d0a160(*(undefined4 *)(lVar4 + 0x4c8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,param_2,param_3);
  FUN_00df1290(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df1554(void)

{
  FUN_00df1404("RangedDefaultAttack",0x8e,"AutoAttack");
  return;
}




void FUN_00df156c(void)

{
  FUN_00df1404("RangedAltAttack",0x8e,"AutoAttack_Alt");
  return;
}




void FUN_00df1584(void)

{
  FUN_00df1404("RangedCritAttack",0x90,"AutoAttack_Crit");
  return;
}




void FUN_00df159c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Kinetic_A");
  lVar2 = FUN_00d09310();
  FUN_00d0a160(*(undefined4 *)(lVar2 + 0x4cc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b128(uVar5,PTR_s_Buff_Kinetic_B_SwapAbilityA_02bf14c0);
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfb17c();
  FUN_00cfcad8(uVar5,0x92,"Aemit");
  FUN_00d9b100(uVar3);
  uVar3 = FUN_00cfb17c();
  FUN_00cfcad8(uVar3,0x91,"Aemit");
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b128(uVar5,PTR_s_Buff_Kinetic_Talent_TalentB_02bee360);
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfa294();
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,0);
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfb17c();
  FUN_00cfcad8(uVar5,0x91,"Aemit");
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfa294();
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,0);
  FUN_00d9b0f8(uVar3);
  uVar3 = FUN_00cfb17c();
  FUN_00cfcad8(uVar3,0x91,"Aemit");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Kinetic_B_SwapAbilityA_02bf14c0);
  FUN_00cf9eec(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df1800(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Kinetic_B");
  lVar2 = FUN_00d09310();
  FUN_00d0a160(*(undefined4 *)(lVar2 + 0x4d0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Kinetic_B");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Kinetic_B_SwapAbilityA_02bf14c0);
  local_48 = FUN_00df1a18;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00df1a2c;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  local_58 = FUN_00df1a40;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00df1a40);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df1a18(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00df1a2c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00df1a40(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00df1a54(undefined8 param_1,float *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d5048c();
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  thunk_FUN_00d9ff34(local_40,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0);
  uVar4 = FUN_00d6bbac(lVar3,local_40[0],0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_00d9ff34(local_48,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0);
    uVar2 = FUN_00d6bb44(lVar3,local_48[0]);
    *param_2 = (float)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df1b14(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Kinetic_C_Charging");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Kinetic_C_Channel");
  lVar2 = FUN_00d09310();
  FUN_00d0a160(*(undefined4 *)(lVar2 + 0x4d4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00cf99dc(auStack_58);
  plVar4 = (long *)FUN_00cf9b44(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Kinetic_C_Target_Laser_02bf14c8);
  local_48 = FUN_00df1db0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cf9b44(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40000000);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cfa51c(auStack_58);
  FUN_00cfc924(uVar3,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0,FUN_00d91c34);
  FUN_00cf9ea4(auStack_58);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00df1db0);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Kinetic_C_Fire");
  lVar2 = FUN_00d09310();
  FUN_00d0a160(*(undefined4 *)(lVar2 + 0x4d4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfb17c(auStack_58);
  uVar3 = FUN_00cfcad8(uVar3,0x93,"CenterBody");
  FUN_00cfcbbc(uVar3,FUN_00df1a54);
  uVar3 = FUN_00cfa834(auStack_58);
  FUN_00cf4dc4(uVar3,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0,0,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df1db0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00df1dc4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float local_730 [4];
  float local_720 [4];
  undefined4 local_710 [2];
  undefined1 auStack_708 [112];
  undefined8 local_698 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    thunk_FUN_00d9ff34(local_710,PTR_s_Buff_Hero049_PetLocator_02bf1518);
    FUN_00d4e934(auStack_708,local_710[0]);
    FUN_00d4e998(auStack_708,0);
    FUN_00d4db40(auStack_708,uVar4);
    FUN_00d4daf4(auStack_708,1,0,0,0);
    FUN_00d4ddc4(auStack_708);
    FUN_00d4dca4(auStack_708,"Hero049_Pet",0);
    uVar2 = FUN_00d9e840(auStack_708,local_698,200,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      puVar6 = local_698;
      do {
        uVar5 = *puVar6;
        uVar4 = FUN_00d51778(param_1);
        FUN_00d55794(uVar5,local_730,0);
        FUN_00d55794(uVar4,local_720,0);
        fVar7 = (float)local_730._4_8_ - (float)local_720._4_8_;
        fVar8 = SUB84(local_730._4_8_,4) - SUB84(local_720._4_8_,4);
        fVar8 = (local_730[0] - local_720[0]) * (local_730[0] - local_720[0]) + fVar7 * fVar7 +
                fVar8 * fVar8;
        fVar7 = SQRT(fVar8);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(fVar8);
        }
        if (fVar7 <= 10.0) {
          FUN_008ff6ec(*puVar6,0,uVar4);
        }
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df1f60(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Hero049_PetIsAttached_02bf14f8;
  uVar4 = FUN_00cf9cf4(lVar2 + 200);
  FUN_00cf2e48(uVar4,FUN_00df1dc4);
  uVar4 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar4,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,FUN_00cfb9b0);
  uVar4 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar4,param_2,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

