// functions/00d95 — 17 functions
#include "libGameKindred.h"




void FUN_00d95120(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80edc(0x45610000,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar1 = FUN_00e5e560(0x3f800000,lVar4,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar1,param_1);
  lVar4 = param_1 + 0x100;
  uVar1 = FUN_00d850b4(lVar4);
  lVar2 = FUN_00d84048(uVar1,param_1,1);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  uVar1 = FUN_00d850b4(lVar4);
  FUN_00d84048(uVar1,param_1,1);
  lVar2 = FUN_00d840ec();
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  lVar4 = FUN_00d851a4(lVar4);
  FUN_00d84e9c(lVar4 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d9524c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 100;
  *(undefined1 *)((long)param_2 + 0xa6) = 100;
  FUN_00d80ec4(0x3e99999a);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  uVar1 = FUN_00e5e560(0x3f800000,lVar2,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar1,param_1);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_LanceBall_Center_02bf0b68);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d952fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80edc(0x45610000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  uVar1 = FUN_00e5e560(0x3f800000,lVar2,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar1,param_1);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,1);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  FUN_00d84048(uVar1,param_1,1);
  lVar2 = FUN_00d840ec();
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d95414(long param_1,undefined8 *param_2)

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
  undefined4 uVar10;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Caine_DefaultAttack";
  param_2[4] = "Effect_Caine_DefaultAttack_Impact";
  param_2[0xd] = "Sound_Caine_Attack_Impact_2";
  param_2[0xc] = "Sound_Caine_Attack_Impact_1";
  param_2[0xe] = "Sound_Caine_Attack_Impact_3";
  lVar2 = FUN_00d09310();
  uVar10 = FUN_00d0a454(*(undefined4 *)(lVar2 + 0x5cc));
  *(undefined4 *)(param_2 + 0x15) = uVar10;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar4 = FUN_00d86924(lVar2);
  lVar5 = FUN_00d8a200(lVar4 + 0x10);
  if (PTR_s_Ability__Caine__B_02befe68 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Caine__B_02befe68;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Caine__B_02befe68;
    if (*PTR_s_Ability__Caine__B_02befe68 != 0) {
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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,PTR_s_Ability__Caine__B_02befe68);
  local_58 = FUN_00d955bc;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d955bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00d955d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Caine_A_Bullet";
  param_2[4] = "Effect_Caine_DefaultAttack_Impact";
  param_2[0xd] = "Sound_Caine_Attack_Impact_2";
  param_2[0xc] = "Sound_Caine_Attack_Impact_1";
  param_2[0xe] = "Sound_Caine_Attack_Impact_3";
  lVar2 = FUN_00d09310();
  uVar11 = FUN_00d0a454(*(undefined4 *)(lVar2 + 0x5dc));
  *(undefined4 *)(param_2 + 0x15) = uVar11;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41c80000,lVar2,param_1,0);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,0x40000);
  lVar2 = lVar2 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Caine_A_Slow_02bf18a0);
  local_68 = FUN_00d95810;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  lVar5 = FUN_00d86924(lVar2);
  lVar6 = FUN_00d8a200(lVar5 + 0x10);
  if (PTR_s_Ability__Caine__B_02befe68 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar9 = (uint)(byte)*PTR_s_Ability__Caine__B_02befe68;
    uVar7 = 0x811c9dc5;
    pbVar8 = PTR_s_Ability__Caine__B_02befe68;
    if (*PTR_s_Ability__Caine__B_02befe68 != 0) {
      do {
        uVar10 = (uint)pbVar8[1];
        uVar7 = (uVar7 ^ uVar9) * 0x1000193;
        uVar9 = uVar10;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  *(uint *)(lVar6 + 8) = uVar7;
  *(undefined4 *)(lVar6 + 0xc) = 1;
  plVar4 = (long *)FUN_00d8a19c(lVar5 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,PTR_s_Ability__Caine__B_02befe68);
  local_68 = FUN_00d955bc;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_68);
  FUN_00d84e9c(lVar2);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d95810(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00d95824(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Caine_C_PierceBullet";
  param_2[4] = "Effect_Caine_C_Explosion";
  param_2[0xc] = "Sound_Caine_C_Explosion";
  lVar2 = FUN_00d09310();
  uVar10 = FUN_00d0a454(*(undefined4 *)(lVar2 + 0x5f4));
  *(undefined4 *)(param_2 + 0x15) = uVar10;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x42480000,lVar2,param_1,2);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,0x40000);
  lVar2 = lVar2 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Caine_C_Passthrough_PFX_02bf18b0)
  ;
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  lVar2 = FUN_00d86924(lVar2);
  lVar5 = FUN_00d8a200(lVar2 + 0x10);
  if (PTR_s_Ability__Caine__B_02befe68 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Caine__B_02befe68;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Caine__B_02befe68;
    if (*PTR_s_Ability__Caine__B_02befe68 != 0) {
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
  plVar4 = (long *)FUN_00d8a19c(lVar2 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,PTR_s_Ability__Caine__B_02befe68);
  local_58 = FUN_00d955bc;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  plVar4 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(0x40000000,0x3f266666,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Caine_C_Damage_02bf18c8);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d95a9c(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Warhawk_AA_Shot";
  param_2[4] = "Effect_Warhawk_AA_Shot_Impact";
  param_2[0xd] = "Sound_Warhawk_Attack_Impact_2";
  param_2[0xc] = "Sound_Warhawk_Attack_Impact_1";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a4fc(*(undefined4 *)(lVar1 + 0x61c));
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




void FUN_00d95b5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d95a9c(param_1,param_2,0);
  return;
}




void FUN_00d95b64(undefined8 param_1,undefined8 param_2)

{
  FUN_00d95a9c(param_1,param_2,2);
  return;
}




void FUN_00d95b6c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Warhawk_Enhanced_AA_Shot";
  param_2[4] = "Effect_Warhawk_Enhanced_AA_Shot_Impact";
  param_2[0xc] = "Sound_Warhawk_Enhanced_Basic_Attack_Impact";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a4fc(*(undefined4 *)(lVar1 + 0x61c));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x20))(plVar2,"EMPOWERED_BONUS_ATTACK");
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d95c14(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Warhawk_A_Shot";
  param_2[4] = "Effect_Warhawk_A_Shot_Impact";
  param_2[0xd] = "Sound_Warhawk_A_Attack_Impact_2";
  param_2[0xc] = "Sound_Warhawk_A_Attack_Impact_1";
  param_2[0xe] = "Sound_Warhawk_A_Attack_Impact_3";
  lVar1 = FUN_00d09310();
  uVar4 = FUN_00d0a4fc(*(undefined4 *)(lVar1 + 0x624));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  FUN_00d80ec4(0x3ecccccd,param_1);
  lVar1 = param_1 + 0x120;
  FUN_00e5fc3c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5fe1c(0x41c00000,lVar1,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar1 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar3 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(0x40000000,0x3f266666,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",0);
  FUN_00d84e9c(lVar1 + 0x10);
  lVar1 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar1 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d95d3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Warhawk_B_Grenade_Proj";
  param_2[4] = "Effect_Warhawk_A_Shot_Impact";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a4fc(*(undefined4 *)(lVar1 + 0x628));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar1 = param_1 + 0x120;
  FUN_00e5e52c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  uVar2 = FUN_00e5e5a0(0x41a00000,lVar1,param_1);
  FUN_00e5e92c(0x3f000000,0,0x3f800000,uVar2,param_1);
  lVar1 = FUN_00d85f00(param_1 + 0x100);
  uVar2 = FUN_00d89c00(lVar1 + 0x10);
  FUN_00d836e8(uVar2,"*Warhawk_Grenade*",0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




float FUN_00d95de8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * 0.20000002 + 0.4;
}




float FUN_00d95e24(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * 0.5 + 0.05;
}




void FUN_00d95e5c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Warhawk_A_Shot";
  param_2[4] = "Effect_Warhawk_A_Shot_Impact";
  param_2[0xc] = "Sound_Warhawk_C_Impact";
  lVar4 = FUN_00d09310();
  uVar7 = FUN_00d0a4fc(*(undefined4 *)(lVar4 + 0x628));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar5 = FUN_00e5e5a0(0x41a00000,lVar4,param_1);
  iVar2 = rand();
  iVar3 = rand();
  FUN_00e5e74c((float)iVar2 * 4.656613e-10 * 0.20000002 + 0.4,
               (float)iVar3 * 4.656613e-10 * 0.5 + 0.05,0x3f123a14,uVar5,param_1);
  lVar4 = FUN_00d84dfc(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  plVar6 = (long *)FUN_00d84eec(lVar4);
  (**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Warhawk_C_Burn_02bf1938);
  plVar6 = (long *)FUN_00d84eec(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x3fc00000,0x3f266666,plVar6,0x40000,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Warhawk_C_Damage_02bf1950);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_58);
  FUN_00d84e9c(lVar4);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

