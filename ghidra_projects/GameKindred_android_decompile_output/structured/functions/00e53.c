// functions/00e53 — 29 functions
#include "libGameKindred.h"




void FUN_00e53128(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00e5313c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_A_DashAttackAvailable");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00e17ea8(lVar1 + 0x10);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00e531d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__Sanfeng__A_02befd28);
  return;
}




void FUN_00e531d4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d3bc68(lVar2);
  (**(code **)(*plVar3 + 0x48))();
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_B_Channel");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x43340000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x98))(plVar3,local_48);
  FUN_00e37900(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e532a0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bc68(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x48))();
  FUN_00e37900(lVar1 + 0x10);
  return;
}




void FUN_00e532d8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3ea8f5c3;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3ea8f5c3;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
  lVar3 = FUN_00d65010(param_1);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  FUN_00d47690(uVar2,1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e533c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3e800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_48);
  lVar3 = FUN_00d65010(param_1);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_48[0] = 0x40000000;
  local_40 = 1;
  FUN_00d47690(uVar2,1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e534a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d634b4();
  lVar2 = FUN_00d4a9f0();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_Perk_SpeedBoost_02bf1830);
  local_38 = FUN_00e5352c;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5352c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e53538(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2ccfc(lVar2);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","BoostMove");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","BoostSprint");
  lVar2 = FUN_00d6592c(param_1);
  uVar4 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00e53630;
  local_40 = 3;
  FUN_00d47690(uVar4,1,&local_48);
  FUN_00d476e8();
  FUN_00d476f4();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53630(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e5363c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Leo_A_Bleed");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  uVar3 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3f000000,uVar3,1);
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00e536d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"A_BLEED_DAMAGE",2);
  return;
}




void FUN_00e536dc(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e53738;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53738(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x84,0);
  return;
}




void FUN_00e5374c(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Leo_B_Root",0);
  return;
}




void FUN_00e53760(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d27a88();
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_48,2,2);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e53b88);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_C_CycloneDamage_02bf1858);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5383c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_C_Empower");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f5c28f6,0x3da3d70a,0x3e75c28f);
  local_78._0_4_ = 0x3f000000;
  local_70 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_78);
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_C_Empower");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f5c28f6,0x3da3d70a,0x3e75c28f);
  local_78 = (code *)CONCAT44(local_78._4_4_,0x3f000000);
  local_70 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_78);
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Ability__Leo__A");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_78 = FUN_00e53a34;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_78);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Ability__Leo__B");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_78 = FUN_00e53a34;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53a34(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




float FUN_00e53a48(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,2,5,5,0);
  return fVar2 * 0.5;
}




void FUN_00e53a7c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3f19999a,uVar2,1);
  FUN_00d39534(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_38 = FUN_00e53a48;
  local_30 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38,0,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53b1c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d64314();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00e227e4(lVar1);
  FUN_00d9c960(uVar2,PTR_s_Buff_Leo_C_ShovedHero_02bf1850);
  FUN_00d9c2f4();
  FUN_00d9c324();
  plVar3 = (long *)FUN_00d2cfcc(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_C_ShovedHero_02bf1850);
  plVar3 = (long *)FUN_00d2cfcc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e53b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_C_CycloneDamage_02bf1858);
  return;
}




void FUN_00e53b88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f4ccccd;
  return;
}




void FUN_00e53b98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00d67b84();
  uVar1 = FUN_00d9e390();
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,0,1,0,uVar1);
  FUN_00d4dc24(param_2,0);
  FUN_00d4d364(param_2,1);
  return;
}




void FUN_00e53bf8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Caine_Revolver_Loaded");
  lVar2 = FUN_00d09310();
  FUN_00d09d1c(*(undefined4 *)(lVar2 + 0x5d4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  local_48 = FUN_00e00564;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00e53bf8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Caine_Revolver_Loaded");
  lVar2 = FUN_00d09310();
  FUN_00d09d1c(*(undefined4 *)(lVar2 + 0x5d4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  pcStack_48 = FUN_00e00564;
  uStack_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&pcStack_48);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00e53bf8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Caine_Revolver_Loaded");
  lVar2 = FUN_00d09310();
  FUN_00d09d1c(*(undefined4 *)(lVar2 + 0x5d4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_OutOfAmmo_02bf1870);
  pcStack_48 = FUN_00e00564;
  uStack_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&pcStack_48);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53d1c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2ccac(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Caine__NoAmmo_02befe58);
  plVar3 = (long *)FUN_00d29c34(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_SpeedBoost_02bf1888);
  local_48 = FUN_00e00564;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53df0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  plVar2 = (long *)FUN_00d2a414(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_DryFire");
  lVar1 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar1 + 0x5d0));
                    /* WARNING: Could not recover jumptable at 0x00e53e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e53e60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  (**(code **)(*plVar3 + 0x58))(plVar3,0);
  lVar2 = FUN_00d6624c(param_1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar4 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Caine_Talent_TalentC_02bf2308;
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_AmmoPerkTalent_02bf1880);
  local_48[0] = 0xc;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_AmmoPerk_02bf1878);
  local_48[0] = 6;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e53f84(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e54010;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Effect_Caine_Sprint");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

