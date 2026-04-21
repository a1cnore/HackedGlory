// functions/00db2 — 19 functions
#include "libGameKindred.h"




void FUN_00db2078(void)

{
  FUN_00db1e48(0x3f800000,0x3f000000,"Attack","Effect_Blackclaw_Cleave",
               &PTR_s_build___Sounds_5v5_SFX_sfx_black_02bee690,2,FUN_00cfb6d0,0);
  return;
}




void FUN_00db20ac(void)

{
  FUN_00db1e48(0x3f800000,0x3e428f5c,"Attack_Alt","Effect_Blackclaw_Cleave_Alt",
               &PTR_s_build___Sounds_5v5_SFX_sfx_black_02bee6a0,1,FUN_00cfb6d0,0);
  return;
}




void FUN_00db20e4(void)

{
  FUN_00db1e48(0x3f800000,0x3f000000,"Attack_Crit","Effect_Blackclaw_Cleave",
               &PTR_s_build___Sounds_5v5_SFX_sfx_black_02bee690,2,FUN_00cfb8b4,0);
  return;
}




void FUN_00db2118(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_58);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"FireBreath",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_blackclaw_turret_attacks_breath_attack_breathe_in.mp3",0,
               0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3ff33333);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_blackclaw_turret_attacks_breath_attack_breathe_out.mp3",0
               ,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Blackclaw_Lane_BreathSelf");
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  FUN_00cfb0a4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db2520(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"build://Sounds/5v5/SFX/sfx_blackclaw_spawn_fly_in.mp3",0
               ,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Kraken5v5_BlackclawUncaptur_02bf0380,1,0);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x409ccccd,uVar2,PTR_s_Buff_GloballyVisibleTrueSight_5v_02bebae8,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40266666);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar2,"build://Sounds/5v5/SFX/sfx_blackclaw_spawn_land.mp3",0,0
               ,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_land_landing_global_roar.mp3",0,0,0xffffffff,0,
               1);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db26e4(void)

{
  uint uVar1;
  uint *in_x3;
  
  FUN_00d50ef8();
  uVar1 = FUN_00d5bc64();
  *in_x3 = uVar1 & 0xff;
  return;
}




void FUN_00db2710(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40e9999a,uVar2,PTR_s_Buff_GloballyVisibleTrueSight_5v_02bebae8,1,0);
  uVar2 = FUN_00cf9ab4(auStack_48);
  uVar2 = FUN_00cf44e8(0x40e9999a,uVar2,PTR_s_Buff_Kraken5v5_UncapturedColor_02bf0390,1,0);
  FUN_00cf45d4(uVar2,FUN_00db26e4);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_land_landing_global_roar.mp3",0,0,0xffffffff,0,
               1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x402ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_captured_fly_away.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db28d0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Kraken5v5_BlackclawUncaptur_02bf0380,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40133333);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_lane_landing_fly_in.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fc00000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_captured_global_roar.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f99999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db2a60(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40e9999a,uVar2,PTR_s_Buff_GloballyVisibleTrueSight_5v_02bebae8,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_land_landing_global_roar.mp3",0,0,0xffffffff,0,
               1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x402ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/5v5/SFX/sfx_blackclaw_captured_fly_away.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db2bec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"VictoryRoar",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40a00000);
  FUN_00cf7578(uVar2,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db2c90(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar3 = FUN_00cfab94(auStack_68);
  uVar5 = *param_3;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09a28(*(undefined4 *)(lVar4 + 0x240));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar5,0,0,0xffffffff,0,1);
  if (1 < param_4) {
    lVar4 = (ulong)param_4 - 1;
    do {
      param_3 = param_3 + 1;
      FUN_00cf41bc(uVar3,*param_3);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  FUN_00cf99dc(auStack_68);
  uVar2 = FUN_00cfa00c(auStack_68);
  FUN_00cf6bb0(uVar2,param_5);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf456c(uVar2,PTR_s_Buff_Blackfeather_HeartThrob_02bf03c0,FUN_00db2e40,1,0);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db2e40(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00db2e4c(void)

{
  FUN_00db2c90("Attack","Effect_Blackfeather_AA",&PTR_s_Sound_Blackfthr_Basic_1_02bee6f8,3,
               FUN_00cfb6d0);
  return;
}




void FUN_00db2e74(void)

{
  FUN_00db2c90("AltAttack","Effect_Blackfeather_AA_Alt",&PTR_s_Sound_Blackfthr_Basic_1_02bee6f8,3,
               FUN_00cfb6d0);
  return;
}




void FUN_00db2e9c(void)

{
  FUN_00db2c90("CritAttack","Effect_Blackfeather_AA_Crit",&PTR_s_Sound_Blackfthr_Crit_1_02bee720,3,
               FUN_00cfb8b4);
  return;
}




float FUN_00db2ec4(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,0,2,0x19,0);
  fVar3 = (float)FUN_00d50cc8(param_1);
  fVar4 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  fVar5 = (float)FUN_00d59f54(uVar1,0,4,0x19,0);
  fVar6 = (float)FUN_00d59f54(uVar1,0,5,0x19,0);
  return fVar6 + fVar5 + fVar2 + fVar3 / fVar4;
}




void FUN_00db2f6c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00db2f80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,0,2,0x19,0);
  *param_3 = uVar2;
  return;
}




float FUN_00db2fb8(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar4 = *(float *)(*(long *)(param_2 + 0x38) + 100);
  fVar2 = (*(float *)(lVar1 + 0x1e0) + 1.0) *
          (*(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0));
  if (DAT_031b01f0 <= fVar2) {
    fVar2 = DAT_031b01f0;
  }
  fVar3 = DAT_031b0130;
  if (DAT_031b0130 <= fVar2) {
    fVar3 = fVar2;
  }
  return (*(float *)(*(long *)(param_2 + 0x38) + 0x68) * (fVar4 + *(float *)(param_2 + 0x2e8))) /
         fVar4 + fVar3 * 0.5;
}

