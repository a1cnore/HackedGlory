// functions/00dbb — 23 functions
#include "libGameKindred.h"




void FUN_00dbb024(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  
  uVar3 = FUN_00d50ef8();
  uVar4 = FUN_00ceace8();
  uVar1 = FUN_00d55870(uVar3);
  iVar2 = FUN_00ceb12c(uVar4,uVar1);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  __x = (6.2831855 / (float)iVar2) * 3.0 - 3.1415927;
  FUN_00d55794(uVar3,param_2,0);
  fVar5 = sinf(__x);
  *param_2 = *param_2 + fVar5 * 3.0;
  fVar5 = cosf(__x);
  param_2[2] = param_2[2] + fVar5 * 3.0;
  FUN_00d557c4(uVar3,param_3,&DAT_03218f68);
  return;
}




void FUN_00dbb0fc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dba2dc(param_1,4);
  *param_4 = uVar1;
  return;
}




void FUN_00dbb124(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  
  uVar3 = FUN_00d50ef8();
  uVar4 = FUN_00ceace8();
  uVar1 = FUN_00d55870(uVar3);
  iVar2 = FUN_00ceb12c(uVar4,uVar1);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  __x = (6.2831855 / (float)iVar2) * 4.0 - 3.1415927;
  FUN_00d55794(uVar3,param_2,0);
  fVar5 = sinf(__x);
  *param_2 = *param_2 + fVar5 * 3.0;
  fVar5 = cosf(__x);
  param_2[2] = param_2[2] + fVar5 * 3.0;
  FUN_00d557c4(uVar3,param_3,&DAT_03218f68);
  return;
}




void FUN_00dbb200(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dba2dc(param_1,5);
  *param_4 = uVar1;
  return;
}




void FUN_00dbb228(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  
  uVar3 = FUN_00d50ef8();
  uVar4 = FUN_00ceace8();
  uVar1 = FUN_00d55870(uVar3);
  iVar2 = FUN_00ceb12c(uVar4,uVar1);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  __x = (6.2831855 / (float)iVar2) * 5.0 - 3.1415927;
  FUN_00d55794(uVar3,param_2,0);
  fVar5 = sinf(__x);
  *param_2 = *param_2 + fVar5 * 3.0;
  fVar5 = cosf(__x);
  param_2[2] = param_2[2] + fVar5 * 3.0;
  FUN_00d557c4(uVar3,param_3,&DAT_03218f68);
  return;
}




undefined8 * FUN_00dbb304(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281fc00;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00dbb360(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d9977c(param_2);
  if (lVar1 != 0) {
    FUN_00d99c88(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_00dbb39c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = (local_58 - fVar3) * (local_58 - fVar3) + (fStack_54 - param_2) * (fStack_54 - param_2) +
          (local_50 - param_3) * (local_50 - param_3);
  fVar4 = SQRT(fVar3);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar3);
  }
  uVar2 = FUN_00d588cc(param_5,"Ability__Generic__Jump");
  fVar3 = (float)FUN_00d59f54(param_5,uVar2,3,0x19,0);
  *param_6 = fVar4 / fVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbb47c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d588cc(param_1,"Ability__Generic__Jump");
  FUN_00d59f54(param_1,uVar1,3,0x19,0);
  return;
}




void FUN_00dbb4b8(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d588cc(param_2,"Ability__Generic__Jump");
  fVar3 = (float)FUN_00d59f54(param_2,uVar2,4,0x19,0);
  *param_3 = fVar3;
  local_4c = 0.0;
  FUN_00dbb39c(param_1,param_2,&local_4c);
  *param_4 = local_4c * *param_3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbb568(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfa6cc(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar2,FUN_00dbb6dc);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa12c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_38 = FUN_00dbb47c;
  local_30 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,&local_38);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Generic_Test",0,0,1,0,0);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9bd4(auStack_48);
  FUN_00cf834c(uVar2,FUN_00dbb4b8,0,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00dbb39c);
  FUN_00cfb56c(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar2,FUN_00dbb718);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbb6dc(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d588cc(param_1,"Ability__Generic__Jump");
  FUN_00d59f54(param_1,uVar1,2,0x19,0);
  return;
}




void FUN_00dbb718(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d588cc(param_1,"Ability__Generic__Jump");
  FUN_00d59f54(param_1,uVar1,5,0x19,0);
  return;
}




void FUN_00dbb754(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Spawn",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,"build://Sounds/5v5/SFX/sfx_ghostwing_spawn_fly_in.mp3",0
               ,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40a00000,uVar3,PTR_s_Buff_Kraken5v5_BlackclawUncaptur_02bf0380,1,0);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x409ccccd,uVar3,PTR_s_Buff_GloballyVisibleTrueSight_5v_02bebae8,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40266666);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar3,"build://Sounds/5v5/SFX/sfx_ghostwing_spawn_landing.mp3",
               0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_ghostwing_spawn_global_roar.mp3",0,0,0xffffffff,0,1);
  FUN_00da07e0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbb920(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return;
}




void FUN_00dbb92c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_00dbb938(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Breath",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_breathe_in.mp3",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f99999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_stream_attack.mp3",0,0,0xffffffff,0,1)
  ;
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x3c,"Mouth");
  FUN_00da07e0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbbc7c(void)

{
  FUN_00dbb938();
  return;
}




void FUN_00dbbc84(void)

{
  FUN_00dbb938();
  return;
}




void FUN_00dbbc8c(void)

{
  FUN_00dbb938();
  return;
}




void FUN_00dbbc94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3eb33333;
  return;
}




void FUN_00dbbca4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [64];
  undefined4 local_88;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_d8);
  FUN_00cfb05c(auStack_d8);
  uVar3 = FUN_00cfa9e4(auStack_d8);
  FUN_00cf3048(uVar3,param_3,0,1,0,"AttackToCombatIdle");
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(param_2);
  FUN_00cf7578(uVar3,0);
  if (0 < (int)param_6) {
    uVar3 = FUN_00cfab94(auStack_d8);
    uVar6 = *param_5;
    lVar4 = FUN_00d09310();
    uVar7 = FUN_00d09638(*(undefined4 *)(lVar4 + 0x108));
    FUN_00cf4164(0x3f800000,uVar7,uVar3,uVar6,0,0,0xffffffff,0,1);
    if (param_6 != 1) {
      lVar4 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        FUN_00cf41bc(uVar3,*param_5);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(param_1 - (float)param_2);
  FUN_00cf7578(uVar3,0);
  plVar5 = (long *)FUN_00cfb134(auStack_d8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3ecccccd);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_d8);
  FUN_00d4d9e8(auStack_c8);
  FUN_00d4dabc(auStack_c8,0x40000);
  FUN_00d4daf4(auStack_c8,0,1,0,0);
  FUN_00d4dba0(0x42f00000,auStack_c8);
  FUN_00d4dcdc(auStack_c8,1);
  FUN_00d4d354(auStack_c8,0);
  local_88 = 0x3f266666;
  uVar3 = FUN_00cfaf84(auStack_d8);
  FUN_00cf5460(0x40a9999a,uVar3,auStack_c8,0,1,1,0);
  puVar2 = PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8;
  uVar3 = FUN_00cf9ab4(auStack_d8);
  uVar3 = FUN_00cf44e8(0x40200000,uVar3,puVar2,1,0);
  FUN_00cf45d4(uVar3,FUN_00dbbc94);
  uVar3 = FUN_00cfa00c(auStack_d8);
  FUN_00cf6bb0(uVar3,param_7);
  FUN_00da0fa4(0x40400000,auStack_d8,PTR_s_Buff_MortalWound_02beb418);
  uVar3 = FUN_00cfaa74(auStack_d8);
  FUN_00cf32cc(0,uVar3,param_4,1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_d8);
  FUN_00cf4164(0x3f800000,0x3f333333,uVar3,
               "build://Sounds/5v5/SFX/sfx_ghostwing_post_basic_attack_roar.mp3",0,0,0xffffffff,0,1)
  ;
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb5c4(auStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbbfe8(void)

{
  FUN_00dbbca4(0x3f800000,0x3f000000,"Ability_A","Effect_Ghostwing_Cleave",
               &PTR_s_build___Sounds_5v5_SFX_sfx_ghost_02beeab0,3,FUN_00cfb6d0);
  return;
}

