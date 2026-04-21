// functions/00dbc — 14 functions
#include "libGameKindred.h"




void FUN_00dbc018(void)

{
  FUN_00dbbca4(0x3f800000,0x3f000000,"Ability_A_Alt","Effect_Ghostwing_Cleave_Alt",
               &PTR_s_build___Sounds_5v5_SFX_sfx_ghost_02beeab0,3,FUN_00cfb6d0);
  return;
}




void FUN_00dbc048(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40e9999a,uVar2,PTR_s_Buff_GloballyVisibleTrueSight_5v_02bebae8,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f19999a,uVar2,
               "build://Sounds/5v5/SFX/sfx_ghostwing_spawn_global_roar.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x402ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/5v5/SFX/sfx_ghostwing_buff_activation_fly_away.mp3",0,0,0xffffffff,0,
               1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbc1d4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x88));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Glaive_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_2");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_3");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_4");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0x3f800000,uVar2,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e6b851f);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Glaive_Attack",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x88));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Glaive_Basic_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_5");
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbc410(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x88));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Glaive_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_2");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_3");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_4");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0,uVar2,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e8a3d71);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Glaive_Attack_Alt",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x88));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Glaive_Basic_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_5");
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbc64c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00cfb05c(auStack_c8);
  FUN_00cf98bc(auStack_c8);
  uVar2 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_c8);
  FUN_00cf3428(0x3f800000,uVar2,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e8a3d71);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_c8);
  FUN_00cf32cc(0,uVar2,"Effect_Glaive_Attack_Crit",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_c8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x88));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Glaive_Cleave",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3cf5c28f);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_c8);
  FUN_00cf32cc(0,uVar2,"Effect_Glaive_Attack_Crit",1,0,1,0,0);
  FUN_00cf9eec(auStack_c8);
  FUN_00cf99dc(auStack_c8);
  plVar4 = (long *)FUN_00cf9b44(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Glaive_Crit_PFX_02bf0690);
  local_a8[0] = 0x3dcccccd;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_a8);
  uVar2 = FUN_00cfab94(auStack_c8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x88));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Glaive_Basic_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Basic_Attack_Impact_5");
  plVar4 = (long *)FUN_00cfa09c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,2);
  FUN_00d4d9e8(local_a8);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dba0(0x42b40000,local_a8);
  FUN_00d4dabc(local_a8,0x40000);
  FUN_00cf9eec(auStack_c8);
  uVar2 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar2,local_a8,0,FUN_00dbc9ec,1,1,0);
  plVar4 = (long *)FUN_00cf9b44(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Glaive_Crit_PFX_02bf0690);
  local_b8[0] = 0x3dcccccd;
  local_b0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_b8);
  plVar4 = (long *)FUN_00cfa09c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"BASIC_ATTACK_CLEAVE_DAMAGE");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Ability__Glaive__Cleave");
  (**(code **)(*plVar4 + 0x70))(plVar4,2);
  FUN_00cfb0a4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbc9ec(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00dbc9f8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  *param_3 = 0;
  FUN_00d55794(param_2,param_4,0);
  return;
}




void FUN_00dbca0c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float __x;
  undefined8 local_a0;
  float local_98;
  undefined1 local_90 [8];
  float local_88;
  undefined1 auStack_80 [32];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,local_90,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_90._0_4_;
  param_2 = param_2 - local_90._4_4_;
  param_3 = param_3 - local_88;
  __x = fVar3 * fVar3 + param_2 * param_2 + param_3 * param_3;
  uVar2 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar2 = CONCAT44(param_2 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  local_a0 = CONCAT44(local_90._4_4_ + (float)((ulong)uVar2 >> 0x20) * fVar3,
                      local_90._0_4_ + (float)uVar2 * fVar3);
  local_98 = fVar4 * fVar3 + local_88;
  uVar2 = FUN_00d5048c(param_4);
  uVar5 = FUN_00d59f54(uVar2,0,3,0x19,0);
  *param_6 = uVar5;
  uVar5 = FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,local_90,&local_a0,uVar5);
  local_60 = 1;
  FUN_00da32dc(auStack_80,param_7,0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dbcb74(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dbcb88(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  FUN_00dbca0c(param_1,param_2,&local_3c,&local_58);
  __x = (local_48 - local_58) * (local_48 - local_58) +
        (fStack_44 - fStack_54) * (fStack_44 - fStack_54) +
        (local_40 - local_50) * (local_40 - local_50);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  *param_3 = fVar2 / local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbcc50(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FUN_00dbcb88();
  *param_3 = *param_3 + 0.1;
  return;
}




void FUN_00dbcc84(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cf9ea4(auStack_48);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  uVar2 = FUN_00cf4540(uVar2,PTR_s_Buff_SelfProjectile_02beb4b8,FUN_00dbcc50,1,0);
  FUN_00cf45cc(uVar2,FUN_00dbe140);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Ability01_Dash",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x8c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Glaive_Ability_A_NoRocket",0,0,0x539,0,1);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Glaive_Ability1_Dash",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0x3f800000,uVar2,"Effect_Glaive_Axe_Jet",1,"Bone_AxeEdge",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0x3f800000,uVar2,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  uVar2 = FUN_00cf9c1c(auStack_48);
  FUN_00cf816c(uVar2,FUN_00dbca0c,1,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00dbcc50);
  FUN_00cfb56c(auStack_48);
  FUN_00cf9eec(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_Glaive_Afterburn_KnockbackW_02bf06b8,FUN_00dbced8,1,0);
  FUN_00cf9eec(auStack_48);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbced8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00dbceec(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  FUN_00cf9ea4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9ab4(auStack_58);
  uVar3 = FUN_00cf4540(uVar3,PTR_s_Buff_SelfProjectile_02beb4b8,FUN_00dbcc50,1,0);
  FUN_00cf45cc(uVar3,FUN_00dbe140);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability01_Dash",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_58);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar2 + 0x8c));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Glaive_Ability_A_NoRocket",0,0,0x539,0,1);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar3,"Effect_Glaive_Ability1_Dash",1,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0x3f800000,uVar3,"Effect_Glaive_Axe_Jet",1,"Bone_AxeEdge",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0x3f800000,uVar3,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  local_48 = FUN_00dbcb74;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_58);
  FUN_00cf9eec(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar3,PTR_s_Buff_Glaive_Afterburn_KnockbackW_02bf06b8,FUN_00dbced8,1,0);
  FUN_00cf9eec(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

