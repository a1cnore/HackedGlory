// functions/00d8e — 19 functions
#include "libGameKindred.h"




void FUN_00d8e0e0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00d8e0ec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda6f4();
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




void FUN_00d8e13c(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Skye_DefaultAttack";
  param_2[4] = "Effect_Skye_DefaultAttack_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x42200000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d82a00(uVar3,param_3);
  lVar4 = FUN_00d80f68(param_1);
  uVar5 = FUN_00d44008(*(undefined4 *)(lVar4 + 0x260),
                       PTR_s_Buff_Skye_Talent_EnhancedThruste_02bee1c0);
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)FUN_00d87d58(lVar2);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Skye_EnhancedThrustersRecha_02bee1d0);
    local_48[0] = 0x3f800000;
    local_40 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_48);
  }
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8e248(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8e13c(param_1,param_2,0);
  return;
}




void FUN_00d8e250(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8e13c(param_1,param_2,2);
  return;
}




float FUN_00d8e258(float param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00d59f54(param_2,0,5,0x19,0);
  param_1 = param_1 / fVar2;
  iVar1 = FUN_00da01b8(param_2);
  if (iVar1 == *(int *)(param_3 + 0x260)) {
    fVar2 = (float)FUN_00d59f54(param_2,0,8,0x19,0);
    param_1 = param_1 * (fVar2 + 1.0);
  }
  if ((*(byte *)(param_3 + 0x2f6) & 1) != 0) {
    fVar2 = (float)FUN_00d59f54(param_2,0,9,0x19,0);
    param_1 = param_1 * fVar2;
  }
  return param_1;
}




void FUN_00d8e2fc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  FUN_00d59f54(lVar1,0,2,4,0);
  fVar3 = (float)FUN_00d8e258(lVar1,param_2);
  *param_3 = fVar3;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Skye_Talent_PiercingBarrage_02bee1a8);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac554,0,9);
    *param_3 = fVar3 * *param_3;
  }
  return;
}




void FUN_00d8e390(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  FUN_00d59f54(lVar1,0,2,9,0);
  fVar3 = (float)FUN_00d8e258(lVar1,param_2);
  *param_3 = fVar3;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Skye_Talent_PiercingBarrage_02bee1a8);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac554,0,9);
    *param_3 = fVar3 * *param_3;
  }
  return;
}




bool FUN_00d8e424(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_00d80f68(*param_1);
  if (param_1[1] == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00da01b8();
    bVar1 = iVar2 == *(int *)(param_1[1] + 0x260);
  }
  return bVar1;
}




void FUN_00d8e46c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  *param_2 = "Effect_Skye_Barrage_Proj";
  param_2[4] = "Effect_Skye_Barrage_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5fc3c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  FUN_00e5fe1c(0x41c80000,lVar4,param_1,0);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar3,param_1,0x40000);
  lVar4 = lVar4 + 0x10;
  uVar3 = FUN_00d8611c(lVar4);
  FUN_00d829e8(uVar3,FUN_00d8e2fc,0,2,0);
  uVar3 = FUN_00d8611c(lVar4);
  FUN_00d829e8(uVar3,FUN_00d8e390,1,2,0);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Skye_LockedOn_Target_02bf0fc0);
  local_68 = (code *)((ulong)local_68._4_4_ << 0x20);
  local_60 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  local_78[0] = 0;
  local_70 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,local_78);
  (**(code **)(*plVar5 + 0x60))(plVar5,FUN_00d8e424);
  plVar5 = (long *)FUN_00d87d58(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Skye_JumpJets_Pending_02bf0fe8);
  local_68 = FUN_00d8e728;
  local_60 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  (**(code **)(*plVar5 + 0x60))(plVar5,FUN_00d8e424);
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),
                       PTR_s_Buff_Skye_Talent_PiercingBarrage_02bee1a8);
  if ((uVar6 & 1) == 0) {
    FUN_00d84e9c(lVar4);
  }
  else {
    plVar5 = (long *)FUN_00d84eec(lVar4);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                               (plVar5,PTR_s_Buff_Skye_PiercingBarrageImpact_02bee1b8);
    local_68 = (code *)CONCAT44(local_68._4_4_,0x3f19999a);
    local_60 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  }
  fVar7 = (float)FUN_00d59f54(lVar2,0,5,0x19,0);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Skye_BarrageSlow_02bf0ff8);
  local_68 = (code *)CONCAT44(local_68._4_4_,1.0 / fVar7 + 0.1);
  local_60 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  lVar4 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar4 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8e728(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,6,1);
  return;
}




void FUN_00d8e734(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d80f68();
  *param_2 = "Effect_Skye_B_Shot";
  param_2[0xd] = "Sound_Skye_Ability_B_Hit_2";
  param_2[0xc] = "Sound_Skye_Ability_B_Hit_1";
  param_2[0xf] = "Sound_Skye_Ability_B_Hit_4";
  param_2[0xe] = "Sound_Skye_Ability_B_Hit_3";
  param_2[4] = "Effect_Skye_B_Shot_Impact";
  param_2[0x10] = "Sound_Skye_Ability_B_Hit_5";
  FUN_00d80ec4(0x3f800000,param_1);
  lVar5 = param_1 + 0x120;
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  FUN_00d59f54(uVar3,2,4,0x19,0);
  uVar4 = FUN_00e5e560(lVar5,param_1);
  fVar7 = (float)FUN_00d813c0(param_1);
  pcVar1 = "LeftMissileBezierHandle";
  if (fVar7 <= 0.0) {
    pcVar1 = "RightMissileBezierHandle";
  }
  FUN_00e5e630(uVar4,param_1,pcVar1);
  lVar5 = FUN_00d85f00(param_1 + 0x100);
  plVar6 = (long *)FUN_00d84eec(lVar5 + 0x10);
  uVar3 = FUN_00d59f54(uVar3,2,6,0x19,0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(uVar3,0xbf800000,plVar6,0x40000,0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Skye_HitBy_B_Missiles_02bf1010);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_48);
  FUN_00d84e9c(lVar5 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8e8e4(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(uint *)(param_2 + 0x2f4) >> 3 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) & 0x20000010) == 0) {
      lVar1 = FUN_00d80ee4();
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar4 = *(float *)(lVar1 + 0x1b0);
      fVar2 = *(float *)(lVar1 + 0x48) +
              *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
      fVar3 = DAT_031ab000;
      fVar5 = DAT_031ab0c0;
    }
    else {
      lVar1 = *(long *)(param_2 + 0x40);
      fVar4 = *(float *)(lVar1 + 0x1a0);
      fVar2 = *(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
      fVar3 = DAT_031aaff0;
      fVar5 = DAT_031ab0b0;
    }
    fVar2 = (fVar4 + 1.0) * fVar2;
    if (fVar5 <= fVar2) {
      fVar2 = fVar5;
    }
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x40);
    fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    if (DAT_031ab0b0 <= fVar2) {
      fVar2 = DAT_031ab0b0;
    }
    fVar3 = DAT_031aaff0;
    if (DAT_031aaff0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar3 = fVar3 * 0.01;
  }
  *param_3 = fVar3;
  return;
}




void FUN_00d8ea0c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_TurretCore";
  param_2[4] = "Effect_TurretImpact";
  param_2[0xc] = "build://Sounds/Turret.assetbundle/turret_hits_player_01.mp3";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41200000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d8e8e4,3,4,0);
  lVar4 = FUN_00d86924(lVar2);
  lVar5 = FUN_00d878ec(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 1;
  plVar6 = (long *)FUN_00d87d58(lVar4 + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Turret_TurretDamageAmp_02bebac0);
  local_48[0] = 0x40800000;
  local_40 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8eb24(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_TurretProjectile_5v5";
  param_2[4] = "Effect_TurretImpact_5v5";
  param_2[0xc] = "build://Sounds/Turret.assetbundle/turret_hits_player_01.mp3";
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41700000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d8e8e4,3,4,0);
  lVar4 = FUN_00d86924(lVar2);
  lVar5 = FUN_00d878ec(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 1;
  plVar6 = (long *)FUN_00d87d58(lVar4 + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Turret_TurretDamageAmp_02bebac0);
  local_48[0] = 0x40800000;
  local_40 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_48);
  FUN_00d84e9c(lVar2);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8ec44(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d80ee4();
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031ab230 <= fVar3) {
    fVar3 = DAT_031ab230;
  }
  fVar4 = DAT_031ab170;
  if (DAT_031ab170 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d59f54(uVar1,1,0,0x19,0);
  *param_3 = *param_3 + fVar3 * fVar4;
  fVar3 = (float)FUN_00d59f54(uVar1,1,3,0x19,0);
  fVar4 = *param_3;
  *param_3 = fVar3 + fVar4;
  if ((*(uint *)(param_2 + 0x2f4) >> 2 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 4 & 1) == 0) {
      return;
    }
    fVar5 = 10.0;
  }
  else {
    fVar5 = 0.25;
  }
  *param_3 = (fVar3 + fVar4) * fVar5;
  return;
}




void FUN_00d8ed30(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_VainCrystal_A_Projectile";
  param_2[4] = "Effect_VainCrystal_A_Impact";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3e800000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00d80ec4(0x3e4ccccd);
  *(undefined1 *)(param_2 + 0x16) = 1;
  param_2[0xc] = "build://Sounds/5v5/SFX/sfx_halcyon_missles_impact_01.mp3";
  uVar5 = FUN_00d80f68(param_1);
  iVar2 = rand();
  lVar7 = param_1 + 0x120;
  FUN_00e5e52c(lVar7);
  *(long *)(param_1 + 0x118) = lVar7;
  iVar3 = rand();
  uVar6 = FUN_00e5e5a0((float)iVar3 * 4.656613e-10 * 4.0 + 16.0,lVar7,param_1);
  iVar3 = rand();
  iVar4 = rand();
  fVar9 = -1.0;
  if (iVar2 % 2 != 0) {
    fVar9 = (float)(iVar2 % 2);
  }
  iVar2 = rand();
  FUN_00e5e74c((float)iVar3 * 4.656613e-10 * 0.24000001 + 0.38,
               fVar9 * ((float)iVar4 * 4.656613e-10 * 0.20000002 + 0.1),
               (float)iVar2 * 4.656613e-10 * 0.15 + 0.1,uVar6,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar7 = FUN_00d844fc(0x3e4ccccd);
  lVar7 = lVar7 + 0x10;
  uVar6 = FUN_00d8611c(lVar7);
  FUN_00d829e8(uVar6,FUN_00d8ec44,3,2,0);
  plVar8 = (long *)FUN_00d84eec(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))
                             (plVar8,PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8);
  local_78 = FUN_00d8efdc;
  local_70 = 3;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  FUN_00d59f54(uVar5,1,1,0x19,0);
  (**(code **)(*plVar8 + 0x38))(plVar8);
  fVar9 = (float)FUN_00d813c0(param_1);
  if (0.9 < fVar9) {
    uVar5 = FUN_00d85154(lVar7);
    FUN_00d825d8(uVar5,PTR_s_Buff_Nexus_5v5_Target_Warning_02bf11e8);
    uVar5 = FUN_00d85154(lVar7);
    FUN_00d825d8(uVar5,PTR_s_Buff_Nexus_5v5_Target_Laser_02bf11e0);
    FUN_00d825e0();
  }
  FUN_00d84e9c(lVar7);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8efdc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00d8eff0(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  
  *param_3 = "Effect_Vox_Proj";
  param_3[0xe] = "Sound_Vox_Attack_Impact_3";
  lVar1 = param_2 + 0x120;
  param_3[4] = "Effect_Vox_Proj_Impact";
  param_3[0xd] = "Sound_Vox_Attack_Impact_2";
  param_3[0xc] = "Sound_Vox_Attack_Impact_1";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_2 + 0x118) = lVar1;
  FUN_00e5ffd8(param_1,lVar1);
  lVar1 = FUN_00d84dfc(param_2 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_4);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}

