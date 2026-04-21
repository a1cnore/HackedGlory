// functions/00dea — 22 functions
#include "libGameKindred.h"




void FUN_00dea094(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,0x19,0);
  return;
}




void FUN_00dea0a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00dea0bc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,1,2,9,0);
  *param_3 = uVar2;
  *param_4 = 2;
  *param_5 = 1;
  *param_6 = 0;
  return;
}




void FUN_00dea124(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_90;
  float local_88;
  undefined1 local_80 [8];
  float local_78;
  undefined1 local_70 [8];
  float local_68;
  undefined1 auStack_60 [32];
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_70,0);
  FUN_00d557c4(param_2,local_80,&DAT_03218f68);
  uVar2 = FUN_00d59f54(param_2,5,3,0x19,0);
  *param_3 = uVar2;
  fVar3 = (float)FUN_00d59f54(param_2,5,2,0x19,0);
  local_90 = CONCAT44(local_80._4_4_ * fVar3 + local_70._4_4_,
                      local_80._0_4_ * fVar3 + local_70._0_4_);
  local_88 = fVar3 * local_78 + local_68;
  uVar2 = FUN_00da2eb4(param_2);
  FUN_00da32b0(auStack_60,local_70,&local_90,uVar2);
  local_40 = 1;
  FUN_00da32dc(auStack_60,param_4,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dea22c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_138 [16];
  code *local_128;
  undefined4 local_120;
  code *local_118;
  undefined4 local_110;
  code *local_b8;
  undefined4 local_b0;
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_138);
  FUN_00cfa6cc(auStack_138);
  FUN_00cf98bc(auStack_138);
  uVar2 = FUN_00cfa834(auStack_138);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_HeroPLU_EngineStacks_02bebb88,0,1);
  uVar2 = FUN_00cf9d84(auStack_138);
  FUN_00cf49b0(uVar2,PTR_s_Buff_HeroPLU_EngineOverheat_02bebb98);
  FUN_00cf9eec(auStack_138);
  uVar2 = FUN_00cfb05c(auStack_138);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_138);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdleCombat");
  FUN_00cf30e4(0x3fc00000);
  plVar3 = (long *)FUN_00cfab04(auStack_138);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero000_Explosion_5mr");
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  uVar2 = FUN_00cfaf84(auStack_138);
  FUN_00cf5504(uVar2,auStack_a8,0,FUN_00dea530,0,1,0);
  uVar2 = FUN_00cfa00c(auStack_138);
  FUN_00cf6bb0(uVar2,FUN_00dea0bc);
  plVar3 = (long *)FUN_00cfa684(auStack_138);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_118 = FUN_00dea544;
  local_110 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_118);
  local_b8 = FUN_00dea530;
  local_b0 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_b8);
  FUN_00cf9eec(auStack_138);
  FUN_00cf98bc(auStack_138);
  uVar2 = FUN_00cf9c1c(auStack_138);
  FUN_00cf816c(uVar2,FUN_00dea124,0,0);
  uVar2 = FUN_00cfa00c(auStack_138);
  FUN_00cf6bb0(uVar2,FUN_00de9a8c);
  FUN_00cf9eec(auStack_138);
  FUN_00d4d9e8(&local_118);
  FUN_00d4daf4(&local_118,1,0,0,0);
  FUN_00d4dca4(&local_118,"HeroPLUSmokeCloud",0);
  FUN_00d4dcdc(&local_118,1);
  uVar2 = FUN_00cfaf84(auStack_138);
  FUN_00cf5504(uVar2,&local_118,0,FUN_00dea530,0,1,0);
  plVar3 = (long *)FUN_00cfa684(auStack_138);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_b8 = FUN_00dea544;
  local_b0 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_b8);
  local_128 = FUN_00dea530;
  local_120 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_128);
  FUN_00cf9eec(auStack_138);
  uVar2 = FUN_00cfa294(auStack_138);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_138);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_138);
  FUN_00cfb5c4(auStack_138);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dea530(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,4,0x19,0);
  return;
}




void FUN_00dea544(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00dea558(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_3 = 0x41f00000;
  *param_4 = 0x42700000;
  return;
}




void FUN_00dea56c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_7 = uVar1;
  param_7[1] = param_2;
  param_7[2] = param_3;
  *param_6 = 0x41200000;
  return;
}




void FUN_00dea5a0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfa6cc(auStack_a8);
  FUN_00de9610(auStack_a8,1,1);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf44e8(0x3e4ccccd,uVar2,PTR_s_Buff_HeroPLU_EngineOverheatRegul_02bebbd8,1,0);
  uVar2 = FUN_00cf9bd4(auStack_a8);
  FUN_00cf834c(uVar2,FUN_00dea558,1,0);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar2,PTR_s_Buff_Stasis_02beb480,FUN_00dea7d0,1,0);
  uVar2 = FUN_00cf9c1c(auStack_a8);
  FUN_00cf816c(uVar2,FUN_00dea56c,1,0);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfab94(auStack_a8);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"Sound_HeroPLU_KABOOM",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar2,FUN_00dea7d0);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar2,auStack_98,0,FUN_00dea7e4,0,1,0);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar2,PTR_s_Buff_Stunned_02beb430,FUN_00dea7f8,1,0);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfab94(auStack_a8);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"Sound_HeroPLU_KABOOM_Impact",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dea7d0(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,7,0x19,0);
  return;
}




void FUN_00dea7e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,8,0x19,0);
  return;
}




void FUN_00dea7f8(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,9,0x19,0);
  return;
}




void FUN_00dea80c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_a0;
  float local_98;
  undefined1 local_90 [8];
  float local_88;
  undefined1 local_80 [8];
  float local_78;
  undefined1 auStack_70 [32];
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_80,0);
  FUN_00d557c4(param_2,local_90,&DAT_03218f68);
  uVar2 = FUN_00d59f54(param_2,1,5,0x19,0);
  *param_3 = uVar2;
  fVar3 = (float)FUN_00d59f54(param_2,1,4,0x19,0);
  local_a0 = CONCAT44(local_80._4_4_ - local_90._4_4_ * fVar3,
                      local_80._0_4_ - local_90._0_4_ * fVar3);
  local_98 = local_78 - fVar3 * local_88;
  uVar2 = FUN_00da2eb4(param_2);
  FUN_00da32b0(auStack_70,local_80,&local_a0,uVar2);
  local_50 = 1;
  FUN_00da32dc(auStack_70,param_4,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dea91c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_148 [16];
  code *local_138;
  undefined4 local_130;
  code *local_128;
  undefined4 local_120;
  code *local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined4 local_b0;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_148);
  FUN_00de9684(auStack_148);
  FUN_00cfa6cc(auStack_148);
  plVar2 = (long *)FUN_00cfa954(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_b8 = FUN_00deac6c;
  local_b0 = 3;
  (**(code **)(*plVar2 + 0x10))(plVar2,3,&local_b8);
  uVar3 = FUN_00cfb05c(auStack_148);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_148);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdleCombat");
  FUN_00cf30e4(0x3fc00000);
  uVar3 = FUN_00cfab94(auStack_148);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,"Sound_HeroPLU_Fan",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_148);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00d4d9e8(&local_b8);
  FUN_00d4daf4(&local_b8,0,1,0,0);
  FUN_00d4dabc(&local_b8,0x40000);
  FUN_00d4dba0(0x41b40000,&local_b8);
  FUN_00d4dcdc(&local_b8,1);
  uVar3 = FUN_00cfaf84(auStack_148);
  FUN_00cf5504(uVar3,&local_b8,0,FUN_00deac80,0,1,0);
  uVar3 = FUN_00cfa00c(auStack_148);
  FUN_00cf6bb0(uVar3,FUN_00dea0bc);
  plVar2 = (long *)FUN_00cfa684(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_128 = FUN_00dea544;
  local_120 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_128);
  local_c8 = FUN_00deac94;
  local_c0 = 3;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_c8);
  FUN_00cf9eec(auStack_148);
  FUN_00cf98bc(auStack_148);
  uVar3 = FUN_00cf9c1c(auStack_148);
  FUN_00cf816c(uVar3,FUN_00dea80c,0,0);
  FUN_00cf9eec(auStack_148);
  FUN_00d4d9e8(&local_128);
  FUN_00d4daf4(&local_128,1,0,0,0);
  FUN_00d4dca4(&local_128,"HeroPLUSmokeCloud",0);
  FUN_00d4dba0(0x41b40000,&local_128);
  FUN_00d4dcdc(&local_128,1);
  uVar3 = FUN_00cfaf84(auStack_148);
  FUN_00cf5504(uVar3,&local_128,0,FUN_00deac80,0,1,0);
  plVar2 = (long *)FUN_00cfa684(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_c8 = FUN_00dea544;
  local_c0 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_c8);
  local_138 = FUN_00deac80;
  local_130 = 3;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_138);
  FUN_00cf9eec(auStack_148);
  uVar3 = FUN_00cfa294(auStack_148);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  lVar4 = FUN_00cfa6cc(auStack_148);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_148);
  FUN_00cfb5c4(auStack_148);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deac6c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00deac80(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,1,0x19,0);
  return;
}




void FUN_00deac94(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00deaca8(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00de9684(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dead08(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  FUN_00de9610(auStack_38,1,1);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"Sound_HeroPLU_Toss",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0xd7,"CenterBody");
  FUN_00cfb0a4(auStack_38);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deae1c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability01",0,1,0,"AttackToIdleCombat");
  FUN_00cf30e4(0x3fc00000);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"Sound_HeroPLU_Debris",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0xd8,"CenterBody");
  FUN_00cfb0a4(auStack_38);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deaf34(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09fbc(*(undefined4 *)(lVar4 + 0x430));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Lorelai_Basic_Attack",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

