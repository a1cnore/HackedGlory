// functions/00d90 — 20 functions
#include "libGameKindred.h"




void FUN_00d9007c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Varya_A_Projectile";
  param_2[4] = "Effect_Varya_A_Impact";
  param_2[0xd] = "Sound_Varya_Ability_A_Spear_Impact_2";
  param_2[0xc] = "Sound_Varya_Ability_A_Spear_Impact_1";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a010(*(undefined4 *)(lVar2 + 0x460));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xff;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41f00000,lVar2,param_1,0);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,0x440000);
  plVar4 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Varya_A_Impact_02bf12e0);
  local_48[0] = 0x3e99999a;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d901cc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3fa66666,param_1);
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
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Kensei_A_DealDamage_02bf13d8);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e4ccccd);
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  lVar4 = FUN_00d86924(lVar4 + 0x10);
  lVar6 = FUN_00d86dc0(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Kensei_A_Slow_02bf13e0);
  local_48 = FUN_00d90338;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d90338(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00d9034c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3fa66666,param_1);
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
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Kensei_C_EffectOnHit_02bf1408);
  local_48 = FUN_00d904b4;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  lVar4 = FUN_00d86924(lVar4 + 0x10);
  lVar6 = FUN_00d86dc0(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00d904c8;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d904b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00d904c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00d904dc(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  float fVar8;
  
  *param_2 = "Effect_Magnus_BasicAttack";
  param_2[4] = "Effect_Magnus_BasicAttack_Impact";
  param_2[0xd] = "Sound_Magnus_Auto_Impact_2";
  param_2[0xc] = "Sound_Magnus_Auto_Impact_1";
  param_2[0xe] = "Sound_Magnus_Auto_Impact_3";
  lVar4 = FUN_00d09310();
  uVar7 = FUN_00d0a3ac(*(undefined4 *)(lVar4 + 0x54c));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  iVar1 = rand();
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar5 = FUN_00e5e5a0(0x41a00000,lVar4,param_1);
  iVar2 = rand();
  iVar3 = rand();
  fVar8 = -1.0;
  if (iVar1 % 2 != 0) {
    fVar8 = (float)(iVar1 % 2);
  }
  FUN_00e5e74c((float)iVar2 * 4.656613e-10 * 0.100000024 + 0.45,
               fVar8 * ((float)iVar3 * 4.656613e-10 * 0.15 + 0.15),0,uVar5,param_1);
  lVar4 = FUN_00d84dfc(param_1 + 0x100);
  plVar6 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x58))(plVar6,param_3);
  FUN_00d84e9c(lVar4 + 0x10);
  return;
}




void FUN_00d9063c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d904dc(param_1,param_2,0);
  return;
}




void FUN_00d90644(undefined8 param_1,undefined8 param_2)

{
  FUN_00d904dc(param_1,param_2,0);
  return;
}




void FUN_00d9064c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d904dc(param_1,param_2,2);
  return;
}




void FUN_00d90654(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Magnus_A_MainMissile";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff4c;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xcc;
  FUN_00d80ec4(0x3ecccccd,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,4,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"PRIMARY_DAMAGE");
  (**(code **)(*plVar4 + 0x30))(plVar4,0);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Magnus_A_MarkCheck_02bf1490);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e99999a);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  local_48 = FUN_00d90804;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d90804(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00d90810(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00d80f68();
  *param_2 = "Effect_Magnus_A_MainMissile";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff4c;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xcc;
  FUN_00d80ec4(0x3e99999a,param_1);
  iVar2 = rand();
  lVar6 = param_1 + 0x120;
  FUN_00e5e52c(lVar6);
  *(long *)(param_1 + 0x118) = lVar6;
  FUN_00d59f54(uVar5,0,5,0x19,0);
  uVar5 = FUN_00e5e5a0(lVar6,param_1);
  iVar3 = rand();
  iVar4 = rand();
  fVar8 = -1.0;
  if (iVar2 % 2 != 0) {
    fVar8 = (float)(iVar2 % 2);
  }
  iVar2 = rand();
  FUN_00e5e74c((float)iVar3 * 4.656613e-10 * 0.100000024 + 0.45,
               fVar8 * ((float)iVar4 * 4.656613e-10 * 0.19999999 + 0.25),
               (float)iVar2 * 4.656613e-10 * 0.20000005 + 0.65,uVar5,param_1);
  lVar6 = FUN_00d84dfc(param_1 + 0x100);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_00d84e4c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x20))(plVar7,"PRIMARY_DAMAGE");
  (**(code **)(*plVar7 + 0x30))(plVar7,0);
  plVar7 = (long *)FUN_00d84eec(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Magnus_A_MarkCheck_02bf1490);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3e99999a);
  local_60 = 1;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
  plVar7 = (long *)FUN_00d84eec(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  local_68 = FUN_00d90804;
  local_60 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
  FUN_00d84e9c(lVar6);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d90a64(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00d80f68();
  *param_2 = "Effect_Magnus_A_SecondaryMissile";
  param_2[4] = "Effect_Magnus_A_SecondaryImpact";
  param_2[0xc] = "Sound_Magnus_Ability_A_Impact";
  lVar6 = FUN_00d09310();
  uVar8 = FUN_00d0a3ac(*(undefined4 *)(lVar6 + 0x55c));
  *(undefined4 *)(param_2 + 0x15) = uVar8;
  iVar2 = rand();
  lVar6 = param_1 + 0x120;
  FUN_00e5e52c(lVar6);
  *(long *)(param_1 + 0x118) = lVar6;
  FUN_00d59f54(uVar5,0,5,0x19,0);
  uVar5 = FUN_00e5e5a0(lVar6,param_1);
  iVar3 = rand();
  iVar4 = rand();
  fVar9 = -1.0;
  if (iVar2 % 2 != 0) {
    fVar9 = (float)(iVar2 % 2);
  }
  iVar2 = rand();
  FUN_00e5e74c((float)iVar3 * 4.656613e-10 * 0.100000024 + 0.45,
               fVar9 * ((float)iVar4 * 4.656613e-10 * 0.4 + 0.15),
               (float)iVar2 * 4.656613e-10 * 0.20000005 + 0.65,uVar5,param_1);
  lVar6 = FUN_00d84dfc(param_1 + 0x100);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_00d84e4c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x20))(plVar7,"SECONDARY_DAMAGE");
  (**(code **)(*plVar7 + 0x30))(plVar7,0);
  plVar7 = (long *)FUN_00d84eec(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  local_68 = FUN_00d90804;
  local_60 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
  FUN_00d84e9c(lVar6);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d90c80(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Magnus_B";
  FUN_00d80ec4(0x3f4ccccd);
  *(undefined2 *)((long)param_2 + 0xa4) = 0x1818;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x7c;
  lVar3 = param_1 + 0x120;
  FUN_00e5f128(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5f16c(0x41600000,0x41180000,lVar3,param_1);
  FUN_00e5f324(0x3e99999a,uVar2,0);
  FUN_00e5f410();
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x30))(plVar4,1);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Magnus_B_MarkCheck_02bf1498);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e99999a);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  local_48 = FUN_00d90804;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar3 = FUN_00d85f00(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d90e08(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Ylva_AA";
  param_2[4] = "Effect_Ylva_AA_Impact";
  param_2[0xd] = "Sound_Ylva_Default_Impact_03";
  param_2[0xc] = "Sound_Ylva_Default_Impact_01";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a208(*(undefined4 *)(lVar1 + 0x578));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41600000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d90eb4(undefined8 param_1,undefined8 param_2)

{
  FUN_00d90e08(param_1,param_2,0);
  return;
}




void FUN_00d90ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_00d90e08(param_1,param_2,0);
  return;
}




void FUN_00d90ec4(undefined8 param_1,undefined8 param_2)

{
  FUN_00d90e08(param_1,param_2,2);
  return;
}




float FUN_00d90ecc(undefined8 param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar5 = 0.0;
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d80ee4(param_1);
    uVar4 = FUN_00d9ea34();
    *param_2 = 0.0;
    thunk_FUN_00d9ff34(&local_50,PTR_s_Buff_Ylva_A_Charging_02bf1420);
    uVar2 = FUN_00d6bbac(uVar4,local_50,&local_4c);
    if ((uVar2 & 1) == 0) {
      fVar5 = *param_2;
    }
    else {
      fVar5 = (float)FUN_00d6b9f8(uVar4,local_4c);
      fVar6 = (float)FUN_00d59f54(uVar3,0,4,0x19,0);
      thunk_FUN_00d9ff34(local_58,PTR_s_Buff_Ylva_Talent_TalentA_02bee340);
      uVar2 = FUN_00d6bbac(uVar4,local_58[0],&local_4c);
      if ((uVar2 & 1) != 0) {
        fVar7 = (float)FUN_00d5a3d0(uVar3,DAT_031ac920,0,9);
        fVar6 = fVar6 * fVar7;
      }
      fVar5 = 1.0 - fVar5 / fVar6;
      *param_2 = fVar5;
    }
    fVar6 = (float)FUN_00d59f54(uVar3,0,2,0x19,0);
    fVar5 = fVar5 * fVar6;
    thunk_FUN_00d9ff34(local_60,PTR_s_Buff_Ylva_Talent_TalentA_02bee340);
    uVar2 = FUN_00d6bbac(uVar4,local_60[0],&local_4c);
    if ((uVar2 & 1) != 0) {
      fVar6 = (float)FUN_00d5a3d0(uVar3,DAT_031ac920,2,9);
      fVar5 = fVar5 * fVar6;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

