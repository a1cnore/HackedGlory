// functions/00dcb — 16 functions
#include "libGameKindred.h"




void FUN_00dcb0c0(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_00dcb0cc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_JMinionHeal_Death",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fc00000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cf96c4(auStack_38);
  FUN_00cf6234(uVar2,FUN_00dcafd8);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,"build://Sounds/Treant/tree_ent_heal_cast.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x2d,"OverHead");
  FUN_00cfcbb0();
  FUN_00cf9eec(auStack_38);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40200000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcb220(void)

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
  FUN_00cfcbbc(uVar3,FUN_00dca364);
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




void FUN_00dcb350(void)

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
  FUN_00cfcbbc(uVar3,FUN_00dca364);
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




void FUN_00dcb480(void)

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
  uVar3 = FUN_00cfcad8(uVar3,0x2b,"GunMuzzle");
  FUN_00cfcbbc(uVar3,FUN_00dca364);
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




void FUN_00dcb5b0(void)

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
  uVar3 = FUN_00cfcad8(uVar3,0x2b,"GunMuzzle");
  FUN_00cfcbbc(uVar3,FUN_00dca364);
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




void FUN_00dcb6e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40400000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcb77c(undefined8 param_1,undefined4 *param_2)

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
      if (fVar5 < 900.0) {
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




void FUN_00dcb868(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cf96c4(auStack_48);
  FUN_00cf6234(uVar2,FUN_00dcb77c);
  plVar3 = (long *)FUN_00cf9b44(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_JungleMinion_5v5_CrystalOrb_02bf09a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,FUN_00dcb0c0);
  local_38[0] = 0x42b40000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,"build://Sounds/Treant/tree_ent_heal_cast.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x2e,"OverHead");
  FUN_00cfcbb0();
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_JMinionHeal_Death",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40800000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcb9f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cf96c4(auStack_48);
  FUN_00cf6234(uVar2,FUN_00dcb77c);
  plVar3 = (long *)FUN_00cf9b44(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_JungleMinion_5v5_WeaponOrb_02bf09b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,FUN_00dcb0c0);
  local_38[0] = 0x42b40000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,"build://Sounds/Treant/tree_ent_heal_cast.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x2e,"OverHead");
  FUN_00cfcbb0();
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_JMinionHeal_Death",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40800000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcbb78(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf96c4(auStack_38);
  FUN_00cf6234(uVar2,FUN_00dcb77c);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x2e,"OverHead");
  FUN_00cfcbb0();
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,"build://Sounds/Treant/tree_ent_heal_cast.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf9eec(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40800000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcbc80(void)

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
  uVar3 = FUN_00cfcad8(uVar3,0x2c,"GunMuzzle");
  FUN_00cfcbbc(uVar3,FUN_00dca454);
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




void FUN_00dcbdb0(void)

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
  uVar3 = FUN_00cfcad8(uVar3,0x2c,"GunMuzzle");
  FUN_00cfcbbc(uVar3,FUN_00dca454);
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




void FUN_00dcbee0(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcbf38(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40800000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcbfd4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb05c(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_38);
  uVar2 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar2,FUN_00dca4cc);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

