// functions/00d91 — 22 functions
#include "libGameKindred.h"




void FUN_00d91064(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ylva_A_ChargingShot";
  param_2[4] = "Effect_Ylva_A_ChargingShot_Impact";
  param_2[0xd] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_02";
  param_2[0xc] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_01";
  param_2[0xe] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_03";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a208(*(undefined4 *)(lVar2 + 0x584));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  uVar6 = FUN_00d90ecc(param_1,auStack_3c);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41e00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829d8(uVar6,uVar3,1,1,0);
  plVar4 = (long *)FUN_00d84e4c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d911a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80ee4();
  uVar3 = FUN_00d9ea34();
  fVar5 = (float)FUN_00d59f54(uVar2,0,2,0x19,0);
  thunk_FUN_00d9ff34(local_50,PTR_s_Buff_Ylva_Talent_TalentA_02bee340);
  uVar4 = FUN_00d6bbac(uVar3,local_50[0],0);
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(uVar2,DAT_031ac920,2,9);
    fVar5 = fVar5 * fVar6;
  }
  *(float *)(param_2 + 0x30) = fVar5;
  *(undefined4 *)(param_2 + 8) = 1;
  *(undefined2 *)(param_2 + 0xc) = 0xb;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d91280(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ylva_A_ChargedShot";
  param_2[4] = "Effect_Ylva_A_ChargedShot_Impact";
  param_2[0xd] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_02";
  param_2[0xc] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_01";
  param_2[0xe] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_03";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a208(*(undefined4 *)(lVar2 + 0x584));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x42280000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829f8(uVar3,FUN_00d911a4);
  plVar4 = (long *)FUN_00d84e4c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00d913e8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d913e8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




float FUN_00d913fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d80f68(*param_1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031ab540 <= fVar3) {
    fVar3 = DAT_031ab540;
  }
  fVar4 = DAT_031ab480;
  if (DAT_031ab480 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,0,1);
  return fVar3 * fVar4;
}




void FUN_00d91480(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
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
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Hero049_DefaultAttack_Shot";
  param_2[4] = "Effect_Hero049_DefaultAttack_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41900000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_58 = FUN_00d913fc;
  local_50 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58,0,0);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  lVar4 = FUN_00d86924(lVar2);
  lVar5 = FUN_00d8a200(lVar4 + 0x10);
  if (PTR_s_Ability__Hero049__A_02bef978 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Hero049__A_02bef978;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Hero049__A_02bef978;
    if (*PTR_s_Ability__Hero049__A_02bef978 != 0) {
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
  plVar3 = (long *)FUN_00d8a19c(lVar4 + 0x58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,PTR_s_Ability__Hero049__A_02bef978);
  local_58 = FUN_00d91618;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d91618(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,0x19,0);
  return;
}




void FUN_00d9162c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero049_DefaultAttack_Shot";
  param_2[4] = "Effect_Hero049_DefaultAttack_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d916b0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d81070();
  FUN_00d80ec4(0x3f8ccccd,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar3);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar5 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  local_48 = FUN_00d917a4;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,1,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d917a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,0x19,0);
  return;
}




void FUN_00d917b8(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Kinetic_BasicAttack";
  param_2[4] = "Effect_Kinetic_BasicAttack_Impact";
  param_2[0xd] = "Sound_Kinetic_Ranged_Attack_Impact_02";
  param_2[0xc] = "Sound_Kinetic_Ranged_Attack_Impact_01";
  param_2[0xe] = "Sound_Kinetic_Ranged_Attack_Impact_03";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a160(*(undefined4 *)(lVar1 + 0x4c8));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d91884(undefined8 param_1,undefined8 param_2)

{
  FUN_00d917b8(param_1,param_2,0);
  return;
}




void FUN_00d9188c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d917b8(param_1,param_2,2);
  return;
}




void FUN_00d91894(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Kinetic_BasicAttack_Mini";
  param_2[4] = "Effect_Kinetic_BasicAttack_Mini_Impact";
  param_2[0xd] = "Sound_Kinetic_Mini_Projectiles_Impact_02";
  param_2[0xc] = "Sound_Kinetic_Mini_Projectiles_Impact_01";
  param_2[0xe] = "Sound_Kinetic_Mini_Projectiles_Impact_03";
  lVar5 = FUN_00d09310();
  uVar8 = FUN_00d0a160(*(undefined4 *)(lVar5 + 0x4c8));
  *(undefined4 *)(param_2 + 0x15) = uVar8;
  iVar2 = rand();
  lVar5 = param_1 + 0x120;
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  iVar3 = rand();
  uVar6 = FUN_00e5e5a0((float)iVar3 * 4.656613e-10 * 10.0 + 10.0,lVar5,param_1);
  iVar3 = rand();
  iVar4 = rand();
  fVar9 = -1.0;
  if (iVar2 % 2 != 0) {
    fVar9 = (float)(iVar2 % 2);
  }
  iVar2 = rand();
  FUN_00e5e74c((float)iVar3 * 4.656613e-10 * 0.6 + 0.2,
               fVar9 * ((float)iVar4 * 4.656613e-10 * 0.15000004 + 0.45),
               (float)iVar2 * 4.656613e-10 * 0.15 + 0.1,uVar6,param_1);
  lVar5 = FUN_00d84dfc(param_1 + 0x100);
  plVar7 = (long *)FUN_00d84e4c(lVar5 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  local_68 = FUN_00d91a94;
  local_60 = 3;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_68,0,1);
  (**(code **)(*plVar7 + 0x68))(plVar7,"Kinetic_Perk_WeaponDamage");
  FUN_00d84e9c(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d91a94(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,0xb);
  return;
}




void FUN_00d91aa0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Kinetic_A";
  param_2[4] = "Effect_Kinetic_A_Impact";
  param_2[0xc] = "Sound_Kinetic_A_Impact";
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d0a160(*(undefined4 *)(lVar3 + 0x4cc));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,3,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x68))(plVar4,"Kinetic_A_Damage");
  plVar4 = (long *)FUN_00d87d58(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0);
  local_58 = FUN_00d91c34;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d91c34(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




float FUN_00d91c40(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d80f68(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,1,5,0x19,0);
  return fVar2 + 1.0;
}




void FUN_00d91c74(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d80f68();
  *param_2 = "Effect_Kinetic_A2";
  param_2[4] = "Effect_Kinetic_A2_Impact";
  param_2[0xc] = "Sound_Kinetic_A_Empowered_Impact";
  lVar4 = FUN_00d09310();
  uVar13 = FUN_00d0a160(*(undefined4 *)(lVar4 + 0x4cc));
  *(undefined4 *)(param_2 + 0x15) = uVar13;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5fc3c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  FUN_00d59f54(lVar3,0,5,0x19,0);
  FUN_00e5fe1c(lVar4,param_1,0);
  uVar5 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar5,param_1,0x40000);
  lVar4 = lVar4 + 0x10;
  plVar6 = (long *)FUN_00d84e4c(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"DAMAGE",0);
  local_68 = FUN_00d91c40;
  local_60 = 4;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x88))(plVar6,&local_68);
  (**(code **)(*plVar6 + 0x68))(plVar6,"Kinetic_A_Damage");
  plVar6 = (long *)FUN_00d87d58(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_02bf14b0);
  local_68 = FUN_00d91c34;
  local_60 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  plVar6 = (long *)FUN_00d84eec(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Kinetic_A2_Slow_02bf14b8);
  local_68 = FUN_00d91f84;
  local_60 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  uVar7 = FUN_00d44008(*(undefined4 *)(lVar3 + 0x260),PTR_s_Buff_Kinetic_Talent_TalentC_02bee350);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d86924(lVar4);
    lVar9 = FUN_00d8a200(lVar8 + 0x10);
    if (PTR_s_Ability__Kinetic__B_02bef950 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar11 = (uint)(byte)*PTR_s_Ability__Kinetic__B_02bef950;
      uVar2 = 0x811c9dc5;
      pbVar10 = PTR_s_Ability__Kinetic__B_02bef950;
      if (*PTR_s_Ability__Kinetic__B_02bef950 != 0) {
        do {
          uVar12 = (uint)pbVar10[1];
          uVar2 = (uVar2 ^ uVar11) * 0x1000193;
          uVar11 = uVar12;
          pbVar10 = pbVar10 + 1;
        } while (uVar12 != 0);
      }
    }
    *(uint *)(lVar9 + 8) = uVar2;
    *(undefined4 *)(lVar9 + 0xc) = 1;
    plVar6 = (long *)FUN_00d8a19c(lVar8 + 0x58);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
    plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,PTR_s_Ability__Kinetic__B_02bef950);
    local_68 = (code *)((ulong)local_68 & 0xffffffff00000000);
    local_60 = 1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
  }
  uVar2 = FUN_00d5c238(lVar3,1);
  if (4 < uVar2) {
    plVar6 = (long *)FUN_00d84eec(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Stunned_02beb430);
    local_68 = FUN_00d91f98;
    local_60 = 3;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  }
  FUN_00d84e9c(lVar4);
  lVar4 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar4 + 0x10);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d91f84(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00d91f98(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




float FUN_00d91fac(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d80f68(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,2,5,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,5,0x19,0);
  fVar4 = (float)FUN_00d59f54(uVar1,2,6,0x19,0);
  fVar5 = (float)FUN_00d813c0(*param_1);
  return fVar2 + fVar3 * fVar4 * fVar5;
}

