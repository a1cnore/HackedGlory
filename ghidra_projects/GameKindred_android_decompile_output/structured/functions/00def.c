// functions/00def — 20 functions
#include "libGameKindred.h"




void FUN_00def42c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00def440(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
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
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  plVar3 = (long *)FUN_00cfac24(auStack_58);
  if ((param_4 & 1) == 0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_Default_Attack_01");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ylva_Default_Attack_02");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ylva_Default_Attack_03");
    lVar4 = FUN_00d09310();
    FUN_00d0a208(*(undefined4 *)(lVar4 + 0x574));
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_A_Partial_Charged_Shot");
    lVar4 = FUN_00d09310();
    FUN_00d0a208(*(undefined4 *)(lVar4 + 0x580));
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar3 = (long *)FUN_00cf9dcc(auStack_58);
    (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ylva_A_Charge_Control_02bf1428);
  }
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00def5dc(void)

{
  FUN_00def440("Attack","DefaultAttack_Spawn",0xbc,0);
  return;
}




void FUN_00def5f8(void)

{
  FUN_00def440("AltAttack","AltAttack_Spawn",0xbd,0);
  return;
}




void FUN_00def614(void)

{
  FUN_00def440("CritAttack","CritAttack_Spawn",0xbe,0);
  return;
}




void FUN_00def630(void)

{
  FUN_00def440("Ability01_ChargingAttack","ChargingAttack_Spawn",0xbf,1);
  return;
}




void FUN_00def64c(void)

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
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability01_ChargedAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0xc0,"ChargedAttack_Spawn");
  plVar3 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ylva_A_Charge_Control_02bf1428);
  plVar3 = (long *)FUN_00cfac24(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_A_Fully_Charged_Shot");
  lVar4 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar4 + 0x580));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00def754(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Ylva_A_Charge_Control_02bf1428);
  local_38 = FUN_00def7f8;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cf9ea4(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00def7f8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00def80c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Ylva_A_Charge_Control_02bf1428);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00def88c(void)

{
  long lVar1;
  
  lVar1 = FUN_00d517cc();
  if (lVar1 != 0) {
    FUN_00d58594();
    return;
  }
  return;
}




void FUN_00def8ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_68);
  plVar3 = (long *)FUN_00cfaa2c(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  plVar3 = (long *)FUN_00cfac24(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_B_Leap");
  lVar2 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar2 + 0x588));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfa12c(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0,0x3fd9999a,0x40333333,0x40133333);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_58 = FUN_00defc3c;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0xb8))(0x41200000);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar4,FUN_00defc3c);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_68);
  lVar5 = FUN_00cf9f7c(auStack_68);
  lVar6 = FUN_00cf2970(lVar5 + 0x10);
  lVar2 = lVar5 + 0xb0;
  *(code **)(lVar6 + 8) = FUN_00def88c;
  plVar3 = (long *)FUN_00cfa0e4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,0);
  local_58 = FUN_00defc50;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x90))(plVar3,&local_58);
  uVar4 = FUN_00cfaa74(lVar2);
  FUN_00cf32cc(0,uVar4,"Effect_Ylva_B_Impact_ToImmobilized",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfac24(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_B_Attack_Empowered");
  lVar2 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar2 + 0x590));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar5 = lVar5 + 200;
  plVar3 = (long *)FUN_00cfa0e4(lVar5);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  (**(code **)(*plVar3 + 0x70))(plVar3,0);
  uVar4 = FUN_00cfaa74(lVar5);
  FUN_00cf32cc(0,uVar4,"Effect_Ylva_B_Impact",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfac24(lVar5);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_B_Attack");
  lVar2 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar2 + 0x58c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cf9afc(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ylva_B_Adrenaline_02bf1438);
  local_58 = FUN_00defc64;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3f000000);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00defc3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00defc50(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00defc64(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00defc78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined4 local_6b8 [2];
  undefined1 auStack_6b0 [40];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d5048c();
  fVar7 = (float)FUN_00d59f54(lVar3,3,3,9,1);
  lVar6 = *(long *)(lVar3 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  thunk_FUN_00d9ff34(local_6b8,PTR_s_Buff_Ylva_Talent_TalentB_02bee330);
  uVar4 = FUN_00d6bbac(lVar6,local_6b8[0],0);
  if ((uVar4 & 1) != 0) {
    fVar7 = (float)FUN_00d5a3d0(lVar3,DAT_031ac918,1,9);
  }
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d4d634(auStack_6b0);
    FUN_00d4d66c(auStack_6b0,lVar3);
    FUN_00d4d678(auStack_6b0,param_2);
    uVar2 = FUN_00d9e840(auStack_6b0,local_688,200,0);
    if (((uint)(int)fVar7 <= uVar2) && (uVar2 != 0)) {
      lVar6 = 0;
      uVar4 = (ulong)uVar2;
      plVar5 = local_688;
      do {
        lVar3 = *plVar5;
        if (((*(byte *)(lVar3 + 0x2f9) & 1) == 0) &&
           ((lVar6 == 0 || (*(uint *)(lVar3 + 0x260) < *(uint *)(lVar6 + 0x260))))) {
          lVar6 = lVar3;
        }
        uVar4 = uVar4 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar4 != 0);
      if (lVar6 != 0) {
        *(ushort *)(lVar6 + 0x301) = *(ushort *)(lVar6 + 0x301) | 0x8000;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00defdf4(undefined8 param_1)

{
  FUN_00defc78(param_1,"Ylva_Trap");
  return;
}




void FUN_00defe00(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  FUN_00cfb05c(auStack_38);
  plVar2 = (long *)FUN_00cfac24(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ylva_C_Place");
  lVar3 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar3 + 0x594));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  uVar4 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar4,FUN_00defdf4);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Ylva_Trap*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00e60680);
  FUN_00cfb0a4(auStack_38);
  uVar4 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deff4c(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deffcc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  plVar2 = (long *)FUN_00cfac24(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ylva_C_Explosion");
  lVar3 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar3 + 0x59c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar4 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar4,"Die",0,1,0,0);
  plVar2 = (long *)FUN_00cfab04(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_C_Trap_Active");
  local_a8 = FUN_00df0270;
  local_a0 = 3;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_a8);
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7580(uVar4,FUN_00df0270);
  FUN_00cf7578(uVar4,0);
  plVar2 = (long *)FUN_00cfab04(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_C_Trap_Explode");
  local_a8 = FUN_00df0284;
  local_a0 = 3;
  (**(code **)(*plVar2 + 0xd0))(plVar2,&local_a8);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dabc(&local_a8,0x40000);
  uVar4 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar4,&local_a8,0,FUN_00df0284,0,1,0);
  plVar2 = (long *)FUN_00cf9b44(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Ylva_C_Trap_Root_02bf1468);
  local_b8 = FUN_00df0298;
  local_b0 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_b8);
  plVar2 = (long *)FUN_00cf9b44(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Ylva_C_Trap_Damage_02bf1460);
  local_b8._0_4_ = 0x3dcccccd;
  local_b0 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_b8);
  FUN_00cf9eec(auStack_c8);
  plVar2 = (long *)FUN_00cf9afc(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Ylva_C_Trap_Disarmed_02bf1458);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0x40a00000);
  local_b0 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_b8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

