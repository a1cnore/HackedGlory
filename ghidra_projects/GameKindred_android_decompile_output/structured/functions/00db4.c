// functions/00db4 — 15 functions
#include "libGameKindred.h"




void FUN_00db4134(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




undefined8 * FUN_00db4148(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281f4b0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00db41a4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0xe;
  return;
}




void FUN_00db41b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Stab_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Catherine_Stab_2");
  FUN_00cf41bc(uVar2,"Sound_Catherine_Stab_3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Catherine_Attack_HitImpact",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Sweep_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_Impact_3");
  plVar3 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar3 + 0x58))(plVar3,0);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db4368(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Sweep_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_2");
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Catherine_AltAttack_HitImpact",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Sweep_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_Impact_3");
  plVar3 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar3 + 0x58))(plVar3,0);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db4520(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Sweep_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_2");
  FUN_00cf41bc(uVar2,"Sound_Catherine_Sweep_3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Catherine_CritAttack",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Stab_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Catherine_Stab_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Catherine_Stab_Impact_3");
  plVar3 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar3 + 0x58))(plVar3,2);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db46d8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_58);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"AssassinsChargeDefAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_58);
  plVar4 = (long *)FUN_00cf9b44(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00db4930;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Damage",1);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar3,"Sound_Catherine_Ability_A_Impact",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar3,"Effect_Catherine_AssassinsChargeHit",0,0,1,0,0);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Catherine_MercilessPursuit__02bf04f0);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Catherine_MercilessPursuit__02bf04e8);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00db4944);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)FUN_00cfac6c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  (**(code **)(*plVar4 + 0x18))(0x3ea8f5c3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db4930(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00db4944(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00db4958(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Ability_A",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Catherine_MercilessPursuit__02bf04e8,FUN_00db4a50,1,0);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Catherine_MercilessPursuit__02bf04f0,FUN_00db4a50,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfacb4(auStack_38);
  FUN_00cf50b0(0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db4a50(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00db4a64(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  plVar2 = (long *)FUN_00cfac6c(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability2");
  (**(code **)(*plVar2 + 0x18))(0x3ea8f5c3);
  uVar3 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar3,"Sound_Catherine_Ability_B",0,0,0xffffffff,0,1);
  plVar2 = (long *)FUN_00cf9afc(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Catherine_Stormguard_02bf04e0);
  local_48 = FUN_00db4b88;
  local_40 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00db4b88);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db4b88(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00db4b9c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Catherine_Ability_B",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Catherine_ArcaneShield_Impact",1,0,1,0,0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db4c50(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_168 [16];
  undefined4 local_158 [2];
  undefined4 local_150;
  code *local_148;
  undefined4 local_140;
  code *local_138;
  undefined4 local_130;
  undefined1 auStack_128 [96];
  undefined1 auStack_c8 [96];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_168);
  FUN_00d4d9e8(auStack_c8);
  FUN_00d4daf4(auStack_c8,0,1,0,0);
  FUN_00d4dba0(0x42340000,auStack_c8);
  FUN_00d4dabc(auStack_c8,0x40000);
  FUN_00d4dcdc(auStack_c8,1);
  FUN_00d4d9e8(auStack_128);
  FUN_00d4daf4(auStack_128,0,1,0,0);
  FUN_00d4dba0(0x42340000,auStack_128);
  FUN_00d4dabc(auStack_128,1);
  FUN_00d4dcdc(auStack_128,1);
  FUN_00cfb05c(auStack_168);
  lVar2 = FUN_00cfa6cc(auStack_168);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfa9e4(auStack_168);
  FUN_00cf3048(uVar3,"DeadlyGrace",0,1,0,"AttackToIdle");
  plVar4 = (long *)FUN_00cfac6c(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  (**(code **)(*plVar4 + 0x18))(0x3ea8f5c3);
  uVar3 = FUN_00cfa294(auStack_168);
  FUN_00cf7580(uVar3,FUN_00db5124);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Revealed_02bebaf8);
  local_138._0_4_ = 0x40400000;
  local_130 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_138);
  uVar3 = FUN_00cfab94(auStack_168);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar3,"Sound_Catherine_Ability_C",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_168);
  FUN_00cf32cc(0,uVar3,"Effect_Catherine_DeadlyGrace",0,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_168);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfb134(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3f19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  uVar3 = FUN_00cfaf84(auStack_168);
  FUN_00cf5504(uVar3,auStack_c8,0,FUN_00db5138,0,0,0);
  lVar2 = FUN_00cf9f7c(auStack_168);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Catherine_Talent_Shockwave_02bf1d88;
  plVar4 = (long *)FUN_00cf9b44(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_GloballyVisible_02bebad8);
  local_138 = (code *)CONCAT44(local_138._4_4_,0x3f800000);
  local_130 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_138);
  plVar4 = (long *)FUN_00cf9b44(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_138 = FUN_00db514c;
  local_130 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_138);
  plVar4 = (long *)FUN_00cfa684(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_138 = FUN_00db5164;
  local_130 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_138);
  local_148 = FUN_00db514c;
  local_140 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_148);
  local_158[0] = 0x40a00000;
  local_150 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_158);
  FUN_00cfa09c(auStack_168);
  uVar3 = FUN_00cfab4c(auStack_168);
  FUN_00cf3ac8(0x3f800000,uVar3,"Effect_Catherine_UltImpact",1,"CenterBody");
  FUN_00cf9eec(auStack_168);
  lVar2 = FUN_00cf9f7c(auStack_168);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Catherine_Talent_Shockwave_02bf1d88;
  uVar3 = FUN_00cfaf84(lVar2 + 200);
  FUN_00cf5504(uVar3,auStack_128,0,FUN_00db5138,0,0,0);
  plVar4 = (long *)FUN_00cf9b44(lVar2 + 200);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Silence_02beb428);
  local_138 = FUN_00db517c;
  local_130 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_138);
  FUN_00cf9eec(auStack_168);
  uVar3 = FUN_00cfa294(auStack_168);
  FUN_00cf7580(uVar3,FUN_00db5190);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_168);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_168);
  FUN_00cfb5c4(auStack_168);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

