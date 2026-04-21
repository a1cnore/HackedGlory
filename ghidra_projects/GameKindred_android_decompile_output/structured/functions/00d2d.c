// functions/00d2d — 22 functions
#include "libGameKindred.h"




void FUN_00d2d01c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099e214();
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




void FUN_00d2d06c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00d2d078(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_Perk_Marker");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x3f99999a;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f000000,0x3e4ccccd);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2d168(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d67d04(0x3dcccccd);
  lVar1 = FUN_00d64080(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_Explosion_5mr");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00d2d1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  return;
}




void FUN_00d2d1e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d59f54(uVar2,2,2,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2d2a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00d2d2bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FlailL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_B_EmpoweredAura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb8))(plVar3,2);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FlailR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_B_EmpoweredAura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb8))(plVar3,2);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00d2dea4(lVar2);
  local_58 = (code *)CONCAT44(local_58._4_4_,0xbe4ccccd);
  local_50 = 1;
  FUN_00d97d7c(uVar4,&DAT_01bd11d4,&local_58,0);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,2);
  FUN_00d4bc10();
  lVar2 = FUN_00d4bc38();
  FUN_00d2cf2c(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_58 = FUN_00d2d49c;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,1,1);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,6);
  FUN_00d4bc10();
  lVar2 = FUN_00d4bc38();
  FUN_00d2a320(lVar2 + 0x10);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2d49c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00d2d4b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Reza_Ability_C_Disappear");
  lVar3 = FUN_00d09310();
  FUN_00d09f14(*(undefined4 *)(lVar3 + 0x404));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_00d2b688(lVar1);
  FUN_00d29fe4(lVar1);
  FUN_00d2def4(lVar1);
  uVar4 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar4,0x1500);
  lVar1 = FUN_00d64980(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2779c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_End");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_C_Explosion");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Reza_Ability_C_Reappear");
  lVar3 = FUN_00d09310();
  FUN_00d09f14(*(undefined4 *)(lVar3 + 0x404));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00d2cc5c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Reza_Ability_C_Landing");
  lVar1 = FUN_00d09310();
  FUN_00d09f14(*(undefined4 *)(lVar1 + 0x404));
                    /* WARNING: Could not recover jumptable at 0x00d2d644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00d2d648(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6624c();
  plVar3 = (long *)FUN_00d2b778(lVar2 + 0x10);
  local_38 = FUN_00d2d2a8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2d6e8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x500);
  return;
}




void FUN_00d2d708(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d67d04(0x3f800000);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_Ring_A_4mr");
                    /* WARNING: Could not recover jumptable at 0x00d2d774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00d2d778(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = FUN_00d63f30();
  uVar2 = FUN_00d2d01c(lVar1 + 0x10);
  FUN_00d9b610(uVar2,PTR_s_Buff_Reza_Talent_NetherRage_02bee2b0);
  FUN_00d9b5b0(uVar2);
  plVar3 = (long *)FUN_00d2887c();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Reza_NetherRage_BonusAttack_02bee2c0);
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability03_IdleCombat");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"FastMove","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveCombat","Ability03_MoveCombat");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveBrush","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartBrush","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopBrush","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveIntoBrush","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveFromBrush","Ability03_Move");
  plVar3 = (long *)FUN_00d2ccac(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Reza__C_NetherformAttac_02beeda0);
  plVar3 = (long *)FUN_00d2df94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Reza_Ability_C_Burning_Aura_Loop");
  lVar4 = FUN_00d09310();
  FUN_00d09f14(*(undefined4 *)(lVar4 + 0x404));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_FireAura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb8))(plVar3,2);
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Head");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_HeadFire");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FlailL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_EmpoweredBolas");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FlailR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_EmpoweredBolas");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_00d657dc(param_1);
  plVar3 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,5,FUN_00d2e034);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Head");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_End");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00d2dc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  return;
}




void FUN_00d2dc18(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_B_Attack_Hit");
  local_38[0] = 0x3e4ccccd;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2dcbc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00d66d28(param_1);
    lVar5 = FUN_00d64080(param_1);
    uVar3 = FUN_00d44be0(uVar4,PTR_s_Buff_Reza_B_EmpoweredAttack_02beb600);
    if ((uVar3 & 1) == 0) {
      iVar2 = FUN_00d6a078(param_1);
      if (iVar2 == DAT_031b0ac4) {
        pcVar7 = "Effect_Reza_AA";
      }
      else {
        iVar2 = FUN_00d6a078(param_1);
        if (iVar2 == DAT_031b0ac8) {
          pcVar7 = "Effect_Reza_AA_Alt";
        }
        else {
          iVar2 = FUN_00d6a078(param_1);
          if (iVar2 == DAT_031b0acc) {
            pcVar7 = "Effect_Reza_AA_Crit";
          }
          else {
            iVar2 = FUN_00d6a078(param_1);
            pcVar7 = "Effect_Reza_C_Attack";
            if (iVar2 != DAT_031b0ad0) {
              pcVar7 = (char *)0x0;
            }
          }
        }
      }
    }
    else {
      pcVar7 = "Effect_Reza_B_Attack";
    }
    plVar6 = (long *)FUN_00d2945c(lVar5 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
    plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,pcVar7);
    local_48[0] = 0x3e4ccccd;
    local_40 = 1;
    (**(code **)(*plVar6 + 0x60))(plVar6,local_48);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d2de2c(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00d2de90;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2de90(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,10,0x19,0);
  return;
}




void FUN_00d2dea4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f9f0();
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




void FUN_00d2def4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2498();
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




void FUN_00d2df44(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2ae0();
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




void FUN_00d2df94(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a35e8();
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




void FUN_00d2dfe4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099e934();
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

