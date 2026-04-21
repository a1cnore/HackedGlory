// functions/00dd5 — 22 functions
#include "libGameKindred.h"




void FUN_00dd507c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack2",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x4f,"GunMuzzle");
  FUN_00cfcbbc(uVar2,FUN_00dd4d50);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd515c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack3",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x4f,"GunMuzzle");
  FUN_00cfcbbc(uVar2,FUN_00dd4d50);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd523c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cfab94(auStack_38);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09d1c(*(undefined4 *)(lVar3 + 0x360));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Gwen/SFX/Default/gwen_ability_b.mp3",0,0,
               0xffffffff,0,1);
  uVar4 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x40000000,uVar4,PTR_s_Buff_Minion_TutorialSpeedBoost_02bf0ba0,1,0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd5304(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00dd4e8c);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd53dc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack2",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00dd4e8c);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd54b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack3",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00dd4e8c);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd558c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0,uVar2,"Effect_MinionLead_MF",0,"GunMuzzle",0,1,0,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x4f,"GunMuzzle");
  FUN_00cfcbbc(uVar2,FUN_00dd4d50);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd56a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack2",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0,uVar2,"Effect_MinionLead_MF",0,"GunMuzzle",0,1,0,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x4f,"GunMuzzle");
  FUN_00cfcbbc(uVar2,FUN_00dd4d50);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd57b4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_1);
    fVar5 = (float)thunk_FUN_00d086f0(lVar3,3,1);
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar6 = (*(float *)(lVar4 + 0x1dc) + 1.0) *
            (*(float *)(lVar4 + 0x74) +
            *(float *)(lVar4 + 0x128) * (*(float *)(lVar4 + 0x290) + 1.0));
    if (DAT_031b19bc <= fVar6) {
      fVar6 = DAT_031b19bc;
    }
    fVar7 = DAT_031b18fc;
    if (DAT_031b18fc <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar7 <= 0.1) {
      fVar7 = 0.1;
    }
    FUN_00d04e08(fVar5 / fVar7,auStack_58,*(undefined4 *)(lVar3 + 0x260),0xd60c580b,1);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd58a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return;
}




void FUN_00dd58ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_00dd58b8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,2);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_68);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09c20(*(undefined4 *)(lVar3 + 0x2f0));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Lyra_Attack_Light",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar2,param_2,"Proj");
  FUN_00cfb0a4(auStack_68);
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf3428(0x3f000000,uVar2,"Effect_Lyra_AA_Charging",1,"Bone_FX",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00cf7700);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfa954(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_58 = FUN_00dd5b60;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,2,&local_58);
  uVar2 = FUN_00cfab94(auStack_68);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09c20(*(undefined4 *)(lVar3 + 0x2f0));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Lyra_Attack_Heavy",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Lyra_Talent_TwinMissiles_02bee040;
  uVar2 = FUN_00cfb17c(lVar3 + 0xb0);
  uVar2 = FUN_00cfcad8(uVar2,param_3,"Proj");
  FUN_00cfcbbc(uVar2,FUN_00dd58a0);
  uVar2 = FUN_00cfb17c(lVar3 + 0xb0);
  uVar2 = FUN_00cfcad8(uVar2,param_3,"Proj");
  FUN_00cfcbbc(uVar2,FUN_00dd58ac);
  uVar2 = FUN_00cfb17c(lVar3 + 200);
  FUN_00cfcad8(uVar2,param_3,"Proj");
  uVar2 = FUN_00cf9cf4(auStack_68);
  FUN_00cf2e48(uVar2,FUN_00dd57b4);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd5b60(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,3);
  return;
}




void FUN_00dd5b6c(void)

{
  FUN_00dd58b8("Attack",0x3f,0x40);
  return;
}




void FUN_00dd5b80(void)

{
  FUN_00dd58b8("AltAttack",0x3f,0x40);
  return;
}




void FUN_00dd5b94(void)

{
  FUN_00dd58b8("CritAttack",0x41,0x42);
  return;
}




void FUN_00dd5ba8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00dd5ccc);
  FUN_00cf7578(uVar3,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09c20(*(undefined4 *)(lVar2 + 0x2f4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lyra_Ability_A",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0x43,"CenterBody");
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




void FUN_00dd5ccc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dd5ce0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfafcc(auStack_38);
  FUN_00cf52e0(uVar2,"Lyra_SpiritFlame");
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Lyra_SpiritFlame_02bf0c28);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd5d64(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,&local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_58;
  param_3 = param_3 - local_50;
  __x = fVar3 * fVar3 + 0.0 + param_3 * param_3;
  uVar2 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar2 = CONCAT44(0.0 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  fVar3 = fVar3 + -10.0;
  *param_5 = CONCAT44(fStack_54 + (float)((ulong)uVar2 >> 0x20) * fVar3,
                      local_58 + (float)uVar2 * fVar3);
  *(float *)(param_5 + 1) = fVar4 * fVar3 + local_50;
  *param_6 = uVar2;
  *(float *)(param_6 + 1) = fVar4;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00dd5e8c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d5048c();
  iVar1 = FUN_00d5c238(uVar2,3);
  return iVar1 != 0;
}




void FUN_00dd5eb0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00cfa6cc(auStack_98);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_98);
  FUN_00cf32cc(0,uVar2,"Effect_Lyra_B_Bullwark_Form",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7580(uVar2,FUN_00dd6060);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dabc(auStack_88,0x40000);
  FUN_00d4daf4(auStack_88,0,1,0,0);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5504(uVar2,auStack_88,0,FUN_00dd6074,0,1,0);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf456c(uVar2,PTR_s_Buff_Lyra_WallSlow_02bf0c10,FUN_00dd6088,1,0);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf456c(uVar2,PTR_s_Buff_Lyra_ImmuneToWall_02bf0c08,FUN_00dd609c,1,0);
  FUN_00cf9eec(auStack_98);
  plVar3 = (long *)FUN_00cfb1c4(auStack_98);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*Lyra_Bulwark*",1);
  lVar4 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

