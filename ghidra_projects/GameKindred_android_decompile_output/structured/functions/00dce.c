// functions/00dce — 10 functions
#include "libGameKindred.h"




void FUN_00dce060(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00cf9f7c();
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Koshka_Talent_Frenzied_02bf1f60;
  plVar4 = (long *)FUN_00cfa8c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Koshka__A_02beefb0);
  local_48 = FUN_00dcddd8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfa8c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Koshka__B_02beefb8);
  local_48 = FUN_00dcde6c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfa8c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Koshka__C_02beefc0);
  local_48 = FUN_00dcdf00;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dce184(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_DefaultAttack_Impact",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_basic_attack_01",0,0,0xffffffff,FUN_00dcdff8,1);
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_attack_02");
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_attack_03");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_catnip_attack_01",0,0,0xffffffff,FUN_00dcdf94,1)
  ;
  FUN_00cf41bc(uVar2,"Sound_Koshka_catnip_attack_02");
  FUN_00cf41bc(uVar2,"Sound_Koshka_catnip_attack_03");
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_basic_impact_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_impact_02");
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_impact_03");
  FUN_00dce060(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dce3e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_AltAttack_Impact",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_basic_kick_01",0,0,0xffffffff,FUN_00dcdff8,1);
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_kick_02");
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_kick_03");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_catnip_kick_01",0,0,0xffffffff,FUN_00dcdf94,1);
  FUN_00cf41bc(uVar2,"Sound_Koshka_catnip_kick_02");
  FUN_00cf41bc(uVar2,"Sound_Koshka_catnip_kick_03");
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_basic_impact_04",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_impact_05");
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_impact_06");
  FUN_00dce060(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dce63c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_crit",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_CritAttack_Impact",1,0,1,0,0);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,2);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x44));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_basic_impact_04",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_impact_05");
  FUN_00cf41bc(uVar2,"Sound_Koshka_basic_impact_06");
  FUN_00dce060(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dce80c(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_00da0288(0x3dcccccd), (uVar4 & 1) != 0)) {
    lVar5 = FUN_00d5048c(param_1);
    iVar3 = FUN_00d5c238(lVar5,2);
    if (iVar3 != 0) {
      uVar6 = 0x811c9dc5;
      uVar7 = (uint)(byte)*PTR_s_Ability__Koshka__C_02beefc0;
      pbVar2 = PTR_s_Ability__Koshka__C_02beefc0;
      if (*PTR_s_Ability__Koshka__C_02beefc0 != 0) {
        do {
          uVar8 = (uint)pbVar2[1];
          uVar6 = (uVar6 ^ uVar7) * 0x1000193;
          uVar7 = uVar8;
          pbVar2 = pbVar2 + 1;
        } while (uVar8 != 0);
      }
      FUN_00d04e08(0,auStack_58,*(undefined4 *)(lVar5 + 0x260),uVar6,1);
      FUN_00ce20fc(auStack_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dce8d4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CatnipAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_Attack_Hit_Buffed",1,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d093ec(*(undefined4 *)(lVar4 + 0x44));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Koshka_crit",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  plVar5 = (long *)FUN_00cfa09c(auStack_48);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"EmpoweredAttackDamage",1);
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  FUN_00cf9eec(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cfa204(auStack_48);
  FUN_00cf4b90(uVar2,PTR_s_Buff_Koshka_TwirlEmpoweredAttack_02bf0a78,1,1);
  FUN_00cf9eec(auStack_48);
  FUN_00dce060(auStack_48);
  FUN_00cfb0a4(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dceaa8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 auStack_80 [24];
  float local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  uVar4 = FUN_00d59f54(uVar2,0,3,0x19,0);
  *param_6 = uVar4;
  FUN_00d55794(param_5,auStack_a0,0);
  local_90 = FUN_00d51830(param_4);
  uStack_8c = param_2;
  local_88 = param_3;
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    fVar7 = -1.0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    fVar7 = -1.0;
    if ((*(byte *)(lVar3 + 0x2f4) & 1) != 0) {
      fVar7 = 0.2;
    }
  }
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    local_68 = 0.0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    local_68 = 0.0;
    if ((*(byte *)(lVar3 + 0x2f5) & 0x10) != 0) {
      local_68 = -0.5;
    }
  }
  uVar4 = thunk_FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,auStack_a0,&local_90,uVar4);
  local_60 = 1;
  lVar3 = *(long *)(param_5 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x1e0) + 1.0) *
          (*(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0));
  if (DAT_031b1170 <= fVar5) {
    fVar5 = DAT_031b1170;
  }
  fVar6 = DAT_031b10b0;
  if (DAT_031b10b0 <= fVar5) {
    fVar6 = fVar5;
  }
  local_68 = local_68 + (fVar7 - fVar6);
  FUN_00da32dc(auStack_80,param_7,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcec44(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  FUN_00dceaa8(param_1,param_2,&local_3c,&local_58);
  __x = (local_48 - local_58) * (local_48 - local_58) +
        (fStack_44 - fStack_54) * (fStack_44 - fStack_54) +
        (local_40 - local_50) * (local_40 - local_50);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  *param_3 = fVar2 / local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dced0c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FUN_00dcec44();
  *param_3 = *param_3 + 0.25;
  return;
}




void FUN_00dced3c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Pounce_Windup",1,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x48));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_Ability1_start",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9c1c(auStack_48);
  FUN_00cf816c(uVar2,FUN_00dceaa8,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00dcec44);
  FUN_00cfb56c(auStack_48);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_Pounce_LaunchDust",0,0,1,0,0);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf4540(uVar2,PTR_s_Buff_Koshka_Claws_02bf0a88,FUN_00dced0c,1,0);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Pounce_Finish",0,1,0,"AttackToIdle");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfab4c(auStack_48);
  FUN_00cf3a9c(0,uVar2,"Effect_Koshka_Pounce_Hit",0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3d4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x48));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_ability1_impact",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfacb4(auStack_48);
  FUN_00cf50b0(0x3f000000);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x48));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Koshka_ability1_end",0,0,0xffffffff,0,1);
  FUN_00cfb0a4(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0ec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

