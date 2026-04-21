// functions/00dc6 — 27 functions
#include "libGameKindred.h"




void FUN_00dc6010(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dc6024(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = thunk_FUN_00d086f0(uVar1,1,0x13);
  *param_3 = uVar2;
  *param_5 = 1;
  *param_4 = 1;
  *param_6 = 0;
  return;
}




void FUN_00dc6080(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5,float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  fVar4 = (float)FUN_00d51820(param_4);
  *param_5 = fVar4;
  param_5[1] = param_2;
  param_5[2] = param_3;
  local_78 = 0x412000003e800000;
  local_70 = 0x3e800000;
  uVar2 = FUN_00da2eb4(uVar2);
  uVar3 = FUN_00ef00a0(uVar2,param_5,&local_68,&local_78);
  if ((uVar3 & 1) != 0) {
    param_5[2] = local_60;
    *(undefined8 *)param_5 = local_68;
  }
  local_58[0] = local_58[0] - *param_5;
  local_50 = local_50 - param_5[2];
  *param_6 = local_58[0];
  fVar4 = local_58[0] * local_58[0] + 0.0 + local_50 * local_50;
  param_6[2] = local_50;
  param_6[1] = 0.0;
  if (1e-08 <= fVar4) {
    fVar5 = SQRT(fVar4);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar4);
    }
    *(ulong *)param_6 =
         CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) / fVar5,
                  (float)*(undefined8 *)param_6 / fVar5);
    param_6[2] = param_6[2] / fVar5;
  }
  else {
    param_6[2] = DAT_03218f70;
    *(undefined8 *)param_6 = DAT_03218f68;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc61d8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  fVar3 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  fVar4 = (float)FUN_00d59f54(uVar1,2,9,0x19,0);
  *param_3 = fVar3 + fVar4;
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Reza_Talent_NetherRage_02bee2b0);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_031ac764,1,9);
    *param_3 = fVar3 + *param_3;
  }
  return;
}




void FUN_00dc627c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,9,0x19,0);
  return;
}




void FUN_00dc6290(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar3,"Ability03_Start",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3358(0x3f000000,uVar3,"Effect_Reza_StartingTeleport",0,"CenterBody",0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dc6670);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Reza_C_Teleporting_02beb608,FUN_00dc6684,1,0);
  FUN_00cf9eec(auStack_b8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Reza_C_WarningIndicator*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00dc6080);
  plVar4 = (long *)FUN_00cfb44c(auStack_b8);
  (**(code **)(*plVar4 + 0x58))();
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Reza_C_DamagePostTeleport_02beb610,FUN_00dc627c,1,0);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf4540(uVar3,PTR_s_Buff_Reza_C_Netherform_02beb5f8,FUN_00dc61d8,1,0);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dc6684);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfa324(auStack_b8);
  FUN_00cf868c(uVar3,"Reza_C_WarningIndicator");
  plVar4 = (long *)FUN_00cf9afc(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Reza_C_PostTeleport_No_Coll_02beb618);
  local_a8 = FUN_00dc6698;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dc6698);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Reza_C_PostCastSpeedBonus_02beb638);
  local_a8 = FUN_00dc66ac;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4dabc(&local_a8,0x440000);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4db48(0x40a00000,&local_a8,&DAT_03218f30);
  uVar3 = FUN_00cfadd4(auStack_b8);
  FUN_00cf5df8(uVar3,PTR_s_Buff_Reza_VolatileSpark_02beb5e8,&local_a8,0,1);
  uVar3 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar3,FUN_00dc6024);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf44e8(0x3dcccccd,uVar3,PTR_s_Buff_Reza_PlayVolatileSparkPfx_02beb5f0,1,0);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x40a00000,uVar3,&local_a8,0,0,1,0);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Reza_VolatileSpark_02beb5e8,FUN_00d2d06c,1,0);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dc66c0);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc6670(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00dc6684(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00dc6698(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00dc66ac(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,0xb,0x19,0);
  return;
}




void FUN_00dc66c0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00dc66d4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x58;
  return;
}




undefined8 FUN_00dc66e0(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar2 = FUN_00d6bbac(lVar4,DAT_031b9e20,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  puVar1 = &DAT_031b9e24;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_031b9e28;
  }
  uVar3 = FUN_00d6bbac(lVar4,*puVar1,0);
  return uVar3;
}




void FUN_00dc6774(undefined8 param_1)

{
  FUN_00dc66e0(param_1,1);
  return;
}




void FUN_00dc677c(undefined8 param_1)

{
  FUN_00dc66e0(param_1,0);
  return;
}




float FUN_00dc6784(undefined8 param_1)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = FUN_00dc66e0(param_1,1);
  fVar2 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)thunk_FUN_00d086f0(0,param_1,6,1);
    fVar2 = -fVar2;
  }
  return fVar2;
}




void FUN_00dc67c4(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d5048c();
  *param_3 = 0.0;
  *param_6 = 0;
  *param_4 = 1;
  *param_5 = 1;
  uVar5 = FUN_00dc66e0(lVar4,0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(lVar4 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    lVar6 = *(long *)(lVar4 + 0x40);
    fVar8 = (*(float *)(lVar6 + 0x1b4) + 1.0) *
            (*(float *)(lVar6 + 0x4c) +
            *(float *)(lVar6 + 0x100) * (*(float *)(lVar6 + 0x268) + 1.0));
    if (DAT_031b0bf4 <= fVar8) {
      fVar8 = DAT_031b0bf4;
    }
    fVar9 = DAT_031b0b30._4_4_;
    if (DAT_031b0b30._4_4_ <= fVar8) {
      fVar9 = fVar8;
    }
    fVar8 = (float)thunk_FUN_00d086f0(lVar4,8,1);
    *param_3 = *param_3 + fVar8 * fVar9;
    uVar5 = FUN_00d6bbac(lVar7,DAT_031b9e40,0);
    if ((uVar5 & 1) != 0) {
      fVar8 = (float)FUN_00d59f54(lVar4,0,2,0x19,0);
      *param_3 = *param_3 * (fVar8 + 1.0);
      uVar1 = *(undefined4 *)(lVar4 + 0x260);
      uVar3 = FUN_00d6b630(lVar7,DAT_031b9e40,0xffffffff);
      FUN_00d009d0(auStack_80,uVar1,uVar3);
      FUN_00ce20fc(auStack_80);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc6968(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_94;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d5048c();
  lVar4 = *(long *)(lVar2 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  FUN_00cfb760(param_1,param_2,param_3,param_4,param_5,param_6);
  fVar5 = (float)FUN_00d59f54(lVar2,0,2,0x19,0);
  local_94 = 0xffffffff;
  *param_3 = *param_3 * (fVar5 + 1.0);
  uVar3 = FUN_00d6bbac(lVar4,DAT_031b9e3c,&local_94);
  if ((uVar3 & 1) != 0) {
    FUN_00d009d0(auStack_90,*(undefined4 *)(lVar2 + 0x260),local_94);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc6a9c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d5048c(param_1);
    uVar3 = FUN_00dc66e0(lVar4,1);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x260);
      thunk_FUN_00d086f0(lVar4,7,1);
      FUN_00d043c0(auStack_68,uVar1,3,0);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc6b38(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_2 = "u_Weapon_Path";
  *param_3 = 1;
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00dc66e0(uVar1,1);
  *param_4 = (float)(uVar2 & 1);
  return;
}




void FUN_00dc6b80(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_2 = "u_Crystal_Path";
  *param_3 = 1;
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00dc66e0(uVar1,0);
  *param_4 = (float)(uVar2 & 1);
  return;
}




void FUN_00dc6bc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar2 = FUN_00cfb05c(auStack_78);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_78);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09dc4(*(undefined4 *)(lVar3 + 900));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Idris_Attack 1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Idris_Attack 2");
  FUN_00cf41bc(uVar2,"Sound_Idris_Attack 3");
  FUN_00cf41bc(uVar2,"Sound_Idris_Attack 4");
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfab04(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  (**(code **)(*plVar4 + 0x100))(plVar4,FUN_00dc6b38);
  FUN_00cf99dc(auStack_78);
  uVar2 = FUN_00cfa00c(auStack_78);
  FUN_00cf6bb0(uVar2,param_5);
  uVar2 = FUN_00cfa00c(auStack_78);
  FUN_00cf6bb0(uVar2,FUN_00dc67c4);
  plVar4 = (long *)FUN_00cfa8c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Idris__A_02beedc0);
  local_68 = FUN_00dc6784;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_68);
  plVar4 = (long *)FUN_00cfa8c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Idris__C_02beedc8);
  local_68 = FUN_00dc6784;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_68);
  uVar2 = FUN_00cfab94(auStack_78);
  uVar5 = *param_3;
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09dc4(*(undefined4 *)(lVar3 + 0x388));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,uVar5,0,0,0xffffffff,0,1);
  if (1 < param_4) {
    lVar3 = (ulong)param_4 - 1;
    do {
      param_3 = param_3 + 1;
      FUN_00cf41bc(uVar2,*param_3);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  uVar2 = FUN_00cf9cf4(auStack_78);
  FUN_00cf2e48(uVar2,FUN_00dc6a9c);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc6e94(void)

{
  FUN_00dc6bc8("Attack","Effect_Idris_AA",&PTR_s_Sound_Idris_Attack_Impact_1_02beedd8,3,FUN_00cfb6d0
              );
  return;
}




void FUN_00dc6ebc(void)

{
  FUN_00dc6bc8("AltAttack","Effect_Idris_AA_Alt",&PTR_s_Sound_Idris_Attack_Impact_1_02beedd8,3,
               FUN_00cfb6d0);
  return;
}




void FUN_00dc6ee4(void)

{
  FUN_00dc6bc8("CritAttack","Effect_Idris_AA_Crit",&PTR_s_Sound_Idris_Crit_Impact_1_02beee00,3,
               FUN_00cfb8b4);
  return;
}




void FUN_00dc6f0c(void)

{
  FUN_00dc6bc8("Ability01_EmpoweredAttack","Effect_Idris_AA_Empowered",
               &PTR_s_Sound_Idris_Ability_B_Impact_1_02beee20,1,FUN_00dc6968);
  return;
}




void FUN_00dc6f34(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09dc4(*(undefined4 *)(lVar4 + 900));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Idris_Ranged_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Idris_Ranged_Attack_2");
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x7a,"CenterBody");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

