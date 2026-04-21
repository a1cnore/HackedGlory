// functions/00dab — 17 functions
#include "libGameKindred.h"




bool FUN_00dab048(float param_1,float param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar4 = *param_3;
  fVar5 = param_3[3];
  if (((fVar4 == fVar5) && (fVar3 = param_3[1], fVar3 == param_3[4])) &&
     (fVar7 = param_3[2], fVar7 == param_3[5])) {
    fVar8 = param_4[2];
    fVar10 = *param_4;
    fVar9 = param_4[1];
    fVar5 = fVar7 - fVar8;
    fVar13 = param_4[3] - fVar10;
    fVar12 = param_4[4] - fVar9;
    fVar16 = fVar4 - fVar10;
    fVar15 = fVar3 - fVar9;
    fVar11 = param_4[5] - fVar8;
    fVar14 = fVar13 * fVar16 + fVar12 * fVar15 + fVar11 * fVar5;
    fVar6 = param_1 * param_1 + param_2 * param_2;
    if (fVar14 <= 0.0) {
      fVar7 = fVar16 * fVar16 + fVar15 * fVar15;
      fVar5 = fVar5 * fVar5;
    }
    else {
      fVar5 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
      if (fVar5 <= fVar14) {
        fVar4 = fVar4 - param_4[3];
        fVar3 = fVar3 - param_4[4];
        fVar5 = fVar7 - param_4[5];
        fVar7 = fVar4 * fVar4 + fVar3 * fVar3;
        fVar5 = fVar5 * fVar5;
      }
      else {
        fVar14 = fVar14 / fVar5;
        fVar4 = fVar4 - (fVar10 + fVar13 * fVar14);
        fVar3 = fVar3 - (fVar9 + fVar12 * fVar14);
        fVar7 = fVar7 - (fVar8 + fVar11 * fVar14);
        fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
        fVar7 = fVar7 * fVar7;
      }
    }
    bVar2 = fVar6 <= fVar7 + fVar5;
    bVar1 = fVar7 + fVar5 == fVar6;
  }
  else {
    fVar3 = *param_4;
    if (((fVar3 != param_4[3]) || (fVar7 = param_4[1], fVar7 != param_4[4])) ||
       (fVar6 = param_4[2], fVar6 != param_4[5])) {
      fVar4 = (float)FUN_019bb6fc();
      return fVar4 < param_1 + param_2;
    }
    fVar12 = param_3[1];
    fVar11 = param_3[2];
    fVar14 = fVar5 - fVar4;
    fVar16 = fVar3 - fVar4;
    fVar15 = param_3[4] - fVar12;
    fVar17 = fVar7 - fVar12;
    fVar13 = param_3[5] - fVar11;
    fVar8 = fVar6 - fVar11;
    fVar9 = fVar14 * fVar16 + fVar15 * fVar17 + fVar13 * fVar8;
    fVar10 = param_1 * param_1 + param_2 * param_2;
    if (fVar9 <= 0.0) {
      fVar6 = fVar16 * fVar16 + fVar17 * fVar17;
      fVar8 = fVar8 * fVar8;
    }
    else {
      fVar8 = fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13;
      if (fVar8 <= fVar9) {
        fVar7 = fVar7 - param_3[4];
        fVar8 = fVar6 - param_3[5];
        fVar6 = (fVar3 - fVar5) * (fVar3 - fVar5) + fVar7 * fVar7;
        fVar8 = fVar8 * fVar8;
      }
      else {
        fVar9 = fVar9 / fVar8;
        fVar3 = fVar3 - (fVar4 + fVar14 * fVar9);
        fVar7 = fVar7 - (fVar12 + fVar15 * fVar9);
        fVar6 = fVar6 - (fVar11 + fVar13 * fVar9);
        fVar8 = fVar3 * fVar3 + fVar7 * fVar7;
        fVar6 = fVar6 * fVar6;
      }
    }
    fVar6 = fVar6 + fVar8;
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6) && !NAN(fVar10)) {
      bVar1 = fVar6 == fVar10;
      bVar2 = fVar10 <= fVar6;
    }
  }
  return !bVar2 || bVar1;
}




void FUN_00dab298(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  void *__s;
  long lVar7;
  
  __s = operator_new(0x5028);
  memset(__s,0,0x5028);
  lVar7 = 8;
  do {
    puVar1 = (undefined4 *)((long)__s + lVar7);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    uVar3 = DAT_03214ce8;
    lVar7 = lVar7 + 0x10;
  } while (puVar1 + 4 != (undefined4 *)((long)__s + 0x28));
  lVar7 = 0x28;
  do {
    puVar2 = (undefined8 *)((long)__s + lVar7);
    *(undefined4 *)((long)puVar2 + 0x14) = 0;
    uVar6 = DAT_03218f38;
    uVar4 = DAT_03218f30;
    *(undefined4 *)((long)puVar2 + 0x2c) = DAT_03218f38;
    uVar5 = DAT_03218f30;
    lVar7 = lVar7 + 0x50;
    *(undefined4 *)(puVar2 + 4) = uVar6;
    *(undefined8 *)((long)puVar2 + 0x24) = uVar5;
    uVar5 = DAT_03218f30;
    puVar2[3] = uVar4;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = uVar3;
    puVar2[6] = uVar5;
    uVar6 = DAT_03218f38;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 7) = uVar6;
    *(undefined4 *)((long)puVar2 + 0x3c) = 0;
  } while (puVar2 + 10 != (undefined8 *)((long)__s + 0x5028));
  DAT_031ac9c8 = __s;
  return;
}




void FUN_00dab36c(void)

{
  if (DAT_031ac9c8 != (void *)0x0) {
    operator_delete(DAT_031ac9c8);
    return;
  }
  return;
}




bool FUN_00dab380(void)

{
  return DAT_031ac9c8 != 0;
}




void FUN_00dab394(void)

{
  FUN_00daa92c(DAT_031ac9c8);
  return;
}




void FUN_00dab3a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00daa6ec(DAT_031ac9c8,param_1,param_2,param_3,param_4);
  return;
}




void FUN_00dab3c0(undefined4 param_1,undefined8 param_2)

{
  FUN_00daa854(DAT_031ac9c8,param_1,param_2);
  return;
}




void FUN_00dab3d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00daae60(DAT_031ac9c8,param_1,param_2,param_3 & 1);
  return;
}




void FUN_00dab3f8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00dab418();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dab40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




undefined8 FUN_00dab418(char *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = 0;
  puVar3 = &DAT_031ac9d8;
  do {
    iVar1 = strcmp((char *)puVar3[-1],param_1);
    if (iVar1 == 0) {
      return *puVar3;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 2;
  } while (uVar2 < 0x301);
  return 0;
}




void FUN_00dab478(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d0953c(*(undefined4 *)(lVar4 + 0xa4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Adagio_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Adagio_Basic_Attack_2");
  FUN_00cf41bc(uVar3,"Sound_Adagio_Basic_Attack_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e800000);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0,"DefaultAttack_Projectile");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dab5ac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d0953c(*(undefined4 *)(lVar4 + 0xa4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Adagio_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Adagio_Basic_Attack_2");
  FUN_00cf41bc(uVar3,"Sound_Adagio_Basic_Attack_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e800000);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0,"DefaultAttack_Projectile");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dab6e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d0953c(*(undefined4 *)(lVar4 + 0xa4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Adagio_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Adagio_Basic_Attack_2");
  FUN_00cf41bc(uVar3,"Sound_Adagio_Basic_Attack_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e800000);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,1,"DefaultAttack_Projectile");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dab814(void)

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
  FUN_00cf3048(uVar3,"Ability01_Cast",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d0953c(*(undefined4 *)(lVar2 + 0xa8));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Adagio_Ability_A_Projectile_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Adagio_Ability_A_Projectile_2");
  FUN_00cf41bc(uVar4,"Sound_Adagio_Ability_A_Projectile_3");
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Adagio_Heal_Cast",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e6b851f);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,2,"Ability01_Projectile");
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0ec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dab9b0(void)

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
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability02_Cast",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d0953c(*(undefined4 *)(lVar2 + 0xa8));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Adagio_Ability_A_Projectile_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Adagio_Ability_A_Projectile_2");
  FUN_00cf41bc(uVar4,"Sound_Adagio_Ability_A_Projectile_3");
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Adagio_GasolineSoaked_Cast",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e6b851f);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,3,"Projectile_GunBarrelTip");
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0ec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00dabb44(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031afac0 <= fVar3) {
    fVar3 = DAT_031afac0;
  }
  fVar4 = DAT_031afa00;
  if (DAT_031afa00 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320e3e8,2,9);
  return fVar3 * fVar4;
}




void FUN_00dabbc8(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [16];
  code *local_188;
  undefined4 local_180;
  undefined1 auStack_178 [96];
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_198);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4daf4(auStack_b8,0,1,0,0);
  FUN_00d4dabc(auStack_b8,0x40000);
  FUN_00d4d9e8(auStack_118);
  FUN_00d4daf4(auStack_118,0,1,0,0);
  FUN_00d4dabc(auStack_118,0x40000);
  uVar3 = FUN_00cfa9e4(auStack_198);
  FUN_00cf3048(uVar3,"Ability03_Cast",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_198);
  lVar4 = FUN_00d09310();
  uVar7 = FUN_00d0953c(*(undefined4 *)(lVar4 + 0xbc));
  FUN_00cf4164(0x3f800000,uVar7,uVar3,"Sound_Adagio_Ability_C",0,0,0xffffffff,0,1);
  lVar4 = FUN_00cfa6cc(auStack_198);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  FUN_00cf98bc(auStack_198);
  uVar3 = FUN_00cf9ab4(auStack_198);
  FUN_00cf44e8(0x40200000,uVar3,PTR_s_Buff_Adagio_VerseOfJudgement_For_02bf01d8,1,0);
  uVar3 = FUN_00cf9ab4(auStack_198);
  FUN_00cf44e8(0x40200000,uVar3,PTR_s_Buff_GloballyVisible_02bebad8,1,0);
  FUN_00cf9eec(auStack_198);
  plVar5 = (long *)FUN_00cfab04(auStack_198);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Adagio_Ult_Enemy");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Effect_AdagioFriendship");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  uVar2 = (**(code **)(*plVar5 + 0x108))();
  uVar3 = FUN_00cfaa74(auStack_198);
  FUN_00cf3428(0x40000000,uVar3,"Effect_Adagio_Ult_Hands",1,"Bone_LeftHand",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_198);
  FUN_00cf3428(0x40000000,uVar3,"Effect_Adagio_Ult_Hands",1,"Bone_RightHand",0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_198);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaf84(auStack_198);
  FUN_00cf5504(uVar3,auStack_b8,0,FUN_00dac00c,0,0,0);
  uVar3 = FUN_00cfab4c(auStack_198);
  FUN_00cf3ac8(0x3f800000,uVar3,"Effect_AdagioArcaneFire_Impact",1,"CenterBody");
  FUN_00cfa09c(auStack_198);
  FUN_00cf9eec(auStack_198);
  FUN_00d4d9e8(auStack_178);
  FUN_00d4dabc(auStack_178,1);
  FUN_00d4daf4(auStack_178,1,0,1,0);
  lVar4 = FUN_00cf9f7c(auStack_198);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  lVar4 = lVar4 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Adagio_Talent_HealingVerse_02bf1cb8;
  uVar3 = FUN_00cfaf84(lVar4);
  FUN_00cf5504(uVar3,auStack_178,0,FUN_00dac00c,0,0,0);
  uVar3 = FUN_00cfa5ac(lVar4);
  local_188 = FUN_00dabb44;
  local_180 = 4;
  FUN_00cf6d54(uVar3,&local_188);
  FUN_00cf9eec(lVar4);
  uVar3 = FUN_00cfadd4(auStack_198);
  uVar3 = FUN_00cf5df8(uVar3,PTR_s_Buff_Adagio_ArcaneFire_02bf01b8,auStack_118,0,0);
  FUN_00cf5e74(uVar3,FUN_00dac00c);
  uVar3 = FUN_00cf9ab4(auStack_198);
  FUN_00cf456c(uVar3,PTR_s_Buff_Stunned_02beb430,FUN_00dac020,1,0);
  uVar3 = FUN_00cf9d84(auStack_198);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Adagio_ArcaneFire_02bf01b8);
  uVar3 = FUN_00cfa3fc(auStack_198);
  FUN_00cf4010(uVar3,uVar2);
  FUN_00cf9eec(auStack_198);
  lVar4 = FUN_00cfa6cc(auStack_198);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_198);
  FUN_00cfb5c4(auStack_198);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

