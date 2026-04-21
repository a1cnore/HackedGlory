// functions/00dca — 16 functions
#include "libGameKindred.h"




void FUN_00dca2dc(void)

{
  FUN_00cfc038(PTR_s_Buff_Joule_Withdraw_02beb9e0);
  return;
}




void FUN_00dca2ec(undefined8 param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b0df0 <= fVar2) {
    fVar2 = DAT_031b0df0;
  }
  fVar3 = DAT_031b0d30;
  if (DAT_031b0d30 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_2 = fVar3;
  return;
}




void FUN_00dca364(undefined8 param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d51778();
  lVar2 = FUN_00d5048c(param_1);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar4 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031b0df0 <= fVar4) {
    fVar4 = DAT_031b0df0;
  }
  fVar5 = DAT_031b0d30;
  if (DAT_031b0d30 <= fVar4) {
    fVar5 = fVar4;
  }
  *param_2 = fVar5;
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar4 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    if (DAT_031b0de0 <= fVar4) {
      fVar4 = DAT_031b0de0;
    }
    fVar3 = DAT_031b0d20;
    if (DAT_031b0d20 <= fVar4) {
      fVar3 = fVar4;
    }
    *param_2 = fVar5 + fVar3 * 0.04;
  }
  return;
}




void FUN_00dca454(undefined8 param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b0df0 <= fVar2) {
    fVar2 = DAT_031b0df0;
  }
  fVar3 = DAT_031b0d30;
  if (DAT_031b0d30 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_2 = fVar3;
  return;
}




void FUN_00dca4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  FUN_00dca2ec(param_1,param_3);
  *param_5 = 3;
  *param_4 = 0;
  return;
}




void FUN_00dca500(void)

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
  FUN_00cf3048(uVar3,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f333333);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0x2a,"GunMuzzle");
  FUN_00cfcbbc(uVar3,FUN_00dca2ec);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dca630(void)

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
  FUN_00cf3048(uVar3,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f333333);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0x2a,"GunMuzzle");
  FUN_00cfcbbc(uVar3,FUN_00dca2ec);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dca760(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_JMinionSmall_Attack",1,0,1,0,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dca4cc);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dca874(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_JMinionSmall_Attack_Alt",1,0,1,0,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dca4cc);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dca988(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b0df0 <= fVar2) {
    fVar2 = DAT_031b0df0;
  }
  fVar3 = DAT_031b0d30;
  if (DAT_031b0d30 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3 * 0.5;
  *param_5 = 3;
  *param_4 = 0;
  return;
}




void FUN_00dcaa24(void)

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
  FUN_00cf3048(uVar3,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar3,"Effect_JMinionHeal_Attack_FirstHit",1,0,1,0,0);
  FUN_00cf99dc(auStack_48);
  uVar3 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar3,FUN_00dca988);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar3,"Effect_JMinionHeal_Attack_SecondHit",1,0,1,0,0);
  FUN_00cf99dc(auStack_48);
  uVar3 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar3,FUN_00dca988);
  FUN_00cf9eec(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcabb8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_JMinionHeal_Attack_Alt",1,0,1,0,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dca4cc);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcaccc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Alt2Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_JMinionHeal_Attack_Alt2",1,0,1,0,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dca4cc);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcade0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  FUN_00cfb05c(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"RootAbility",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb1c4(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s__JungleMinion_TreeEnt_RootField__02beb2a0,0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00e60680);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcaefc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"build://Sounds/Treant/tree_ent_emerge.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_JMinionHeal_Spawn",1,0,1,0,0);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcafd8(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_58 [4];
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d50ef8(param_1);
    FUN_00d5bc5c();
    lVar4 = FUN_00d9e390();
    if (lVar4 != 0) {
      FUN_00d55794(uVar3,local_48,0);
      FUN_00d55794(lVar4,local_58,0);
      fVar5 = (float)local_48._4_8_ - (float)local_58._4_8_;
      fVar6 = SUB84(local_48._4_8_,4) - SUB84(local_58._4_8_,4);
      fVar6 = (local_48[0] - local_58[0]) * (local_48[0] - local_58[0]) + fVar5 * fVar5 +
              fVar6 * fVar6;
      fVar5 = SQRT(fVar6);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      if (fVar5 < 20.0) {
        *param_2 = *(undefined4 *)(lVar4 + 0x260);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

