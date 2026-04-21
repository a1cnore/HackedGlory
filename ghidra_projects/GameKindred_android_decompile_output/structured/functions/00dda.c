// functions/00dda — 17 functions
#include "libGameKindred.h"




void FUN_00dda048(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,7,0x19,0);
  return;
}




void FUN_00dda05c(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,6,0x19,0);
  return;
}




void FUN_00dda070(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,5,0x19,0);
  return;
}




void FUN_00dda084(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  fVar4 = (float)FUN_00d092ac(uVar1,0,6,9,1);
  *param_3 = fVar4;
  uVar2 = FUN_00d5cf60(uVar1);
  uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Petal_Talent_KaboomSeeds_02bf2018);
  if ((uVar3 & 1) != 0) {
    FUN_00d5cf60(uVar1);
    uVar1 = FUN_00d9e390();
    fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_0320ea14,0,9);
    *param_3 = fVar4 * *param_3;
  }
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00dda134(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x18);
    if (lVar4 != 0) {
LAB_00dda16c:
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48) goto code_r0x00dda17c;
      for (iVar1 = FUN_00d6bb44(lVar4,DAT_031ba97c); iVar1 != 0; iVar1 = iVar1 + -1) {
        uVar5 = FUN_00d5048c(param_1);
        fVar10 = (float)FUN_00d092ac(uVar5,0,0xc,9,1);
        *(float *)(param_2 + 0x30) = fVar10 * *(float *)(param_2 + 0x30);
      }
    }
LAB_00dda1d0:
    lVar4 = *(long *)(param_2 + 0x20);
    uVar5 = FUN_00d6eb50();
    plVar6 = (long *)FUN_00d6eb5c(uVar5,"*KindredBuffs*");
    puVar8 = (undefined8 *)*plVar6;
    puVar7 = (undefined8 *)*puVar8;
    if (puVar7 != (undefined8 *)0x0) {
      lVar9 = 0;
      do {
        iVar1 = strcmp((char *)*puVar7,PTR_s_Buff_PetalSeed_LandMine_ReduceDa_02bf0db0);
        if (iVar1 == 0) {
          if (lVar4 == 0) {
            return;
          }
          if ((int)lVar9 == -1) {
            return;
          }
          uVar5 = *(undefined8 *)(*plVar6 + (long)(int)lVar9 * 8);
          uVar2 = FUN_00ceb350();
          FUN_00d5c374(0x40800000,0,0,lVar4,lVar4,uVar5,uVar2,1,0,0);
          return;
        }
        puVar7 = (undefined8 *)puVar8[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (puVar7 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x00dda17c:
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) goto LAB_00dda1d0;
  goto LAB_00dda16c;
}




void FUN_00dda28c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_6 = 0x41000000;
  fVar5 = (float)FUN_00d51820();
  FUN_00d55794(param_5,&local_78,0);
  fVar8 = local_78 - fVar5;
  fVar9 = local_70 - param_3;
  fVar7 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
  uVar3 = DAT_03218f68;
  fVar6 = DAT_03218f70;
  if (1e-08 <= fVar7) {
    fVar6 = SQRT(fVar7);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    uVar3 = CONCAT44(0.0 / fVar6,fVar8 / fVar6);
    fVar6 = fVar9 / fVar6;
  }
  uVar2 = FUN_00d5048c(param_4);
  fVar7 = (float)FUN_00d092ac(uVar2,0,0xe,9,1);
  uVar2 = FUN_00d5048c(param_4);
  fVar8 = (float)FUN_00d092ac(uVar2,0,0xf,9,1);
  fVar9 = (local_78 - fVar5) * (local_78 - fVar5) + (fStack_74 - param_2) * (fStack_74 - param_2) +
          (local_70 - param_3) * (local_70 - param_3);
  fVar5 = SQRT(fVar9);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar9);
  }
  fVar5 = (fVar7 + fVar8) - fVar5;
  fVar7 = (float)uVar3 * fVar5;
  fVar8 = (float)((ulong)uVar3 >> 0x20) * fVar5;
  *param_7 = CONCAT44(fStack_74 + fVar8,local_78 + fVar7);
  *(float *)(param_7 + 1) = fVar6 * fVar5 + local_70;
  uVar3 = FUN_00da2eb4(param_5);
  uVar4 = FUN_00ef01b8(uVar3,&local_78,param_7,&local_7c,0,0);
  if ((uVar4 & 1) == 0) {
    *param_7 = CONCAT44(fStack_74 + fVar8 * local_7c,local_78 + fVar7 * local_7c);
    *(float *)(param_7 + 1) = fVar6 * fVar5 * local_7c + local_70;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dda488(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  local_44 = 0.0;
  FUN_00dda28c(param_1,param_2,&local_3c,&local_58);
  __x = (local_48 - local_58) * (local_48 - local_58) +
        (local_44 - fStack_54) * (local_44 - fStack_54) +
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




void FUN_00dda554(undefined8 param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  long lVar1;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00dda488(param_1,param_2,&local_3c);
  *param_3 = 0x3f4ccccd;
  *param_4 = local_3c * 0.8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dda5cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [96];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_118);
  uVar2 = FUN_00cfaa74(auStack_118);
  FUN_00cf32cc(0,uVar2,"Effect_Petal_Seed_Pop",0,0,0,0,0);
  uVar2 = FUN_00cfab94(auStack_118);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xdc));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Petal_ability_3_explode_1",0,0,0xffffffff,0,0);
  FUN_00cf41bc(uVar2,"Sound_Petal_ability_3_explode_2");
  plVar4 = (long *)FUN_00cfb134(auStack_118);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e4ccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  uVar2 = FUN_00cfaf84(auStack_118);
  FUN_00cf5504(uVar2,auStack_a8,0,FUN_00dda908,0,1,0);
  uVar2 = FUN_00cfa00c(auStack_118);
  uVar2 = FUN_00cf6bb0(uVar2,FUN_00dda084);
  FUN_00cf6bb8(uVar2,FUN_00dda134);
  uVar2 = FUN_00cf9ab4(auStack_118);
  FUN_00cf456c(uVar2,PTR_s_Buff_PetalSeed_LandMine_ReduceDa_02bf0db0,FUN_00dda91c,1,0);
  uVar2 = FUN_00cf9ab4(auStack_118);
  FUN_00cf456c(uVar2,PTR_s_Buff_PetalSeed_LandMine_Expiry_02bf0da8,FUN_00dda930,1,0);
  FUN_00cf9eec(auStack_118);
  uVar2 = FUN_00cfa294(auStack_118);
  FUN_00cf7478(0x3ca3d70a);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_108);
  FUN_00d4daf4(auStack_108,0,1,0,0);
  FUN_00d4dabc(auStack_108,0x200000);
  FUN_00d4dcfc(auStack_108,0);
  lVar3 = FUN_00cf9f7c(auStack_118);
  lVar5 = FUN_00ddcc94(lVar3 + 0x10);
  lVar3 = lVar3 + 200;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Petal_Talent_KaboomSeeds_02bf2018;
  uVar2 = FUN_00cfaf84(lVar3);
  FUN_00cf5504(uVar2,auStack_108,0,FUN_00dda908,0,0,0);
  uVar2 = FUN_00cf9c1c(lVar3);
  FUN_00cf816c(uVar2,FUN_00dda28c,0,1);
  uVar2 = FUN_00cf9bd4(lVar3);
  FUN_00cf834c(uVar2,FUN_00dda554,0,1);
  uVar2 = FUN_00cf9ab4(lVar3);
  FUN_00cf4540(uVar2,PTR_s_Buff_DisplacementLock_02beb3f0,FUN_00dda488,1,0);
  FUN_00cf9eec(lVar3);
  FUN_00cfb0a4(auStack_118);
  uVar2 = FUN_00cfa294(auStack_118);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa36c(auStack_118);
  FUN_00cfb5c4(auStack_118);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dda908(undefined8 param_1)

{
  FUN_00d092ac(param_1,0,8,9,1);
  return;
}




void FUN_00dda91c(undefined8 param_1)

{
  FUN_00d092ac(param_1,0,0xd,9,1);
  return;
}




void FUN_00dda930(undefined8 param_1)

{
  FUN_00d092ac(param_1,0,0xb,9,1);
  return;
}




void FUN_00dda944(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_e0 [2];
  undefined4 local_d8 [10];
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d5048c(param_1);
    FUN_00d5cf60();
    lVar8 = FUN_00d9e390();
    lVar11 = *(long *)(param_2 + 0x20);
    for (lVar10 = *(long *)(lVar11 + 0x18); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x20)) {
      if (*(int *)(*(long *)(lVar10 + 8) + 0xa4) == DAT_02c7bf48) {
        uVar4 = FUN_00d6c0bc(lVar10,PTR_s_Buff_Petal_Yummy_02bf0d30);
        uVar4 = uVar4 ^ 1;
        goto LAB_00dda9e0;
      }
    }
    uVar4 = 1;
LAB_00dda9e0:
    iVar1 = *(int *)(param_2 + 0x14);
    lVar9 = FUN_00d5048c(param_1);
    puVar3 = PTR_s_Buff_Petal_YummyFrenzy_02bf0d48;
    if (((uVar4 & 1) == 0) && (iVar1 == *(int *)(lVar9 + 0x260))) {
      uVar6 = *(undefined4 *)(lVar8 + 0x260);
      uVar12 = thunk_FUN_00d086f0(lVar8,8,1);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(uVar12,0,0,auStack_b0,uVar6,uVar6,puVar3,uVar5,1,0,0);
      FUN_00ce20fc(auStack_b0);
      thunk_FUN_00d9ff34(local_d8,PTR_s_Buff_Petal_Yummy_02bf0d30);
      FUN_00d9ff84(local_e0,local_d8[0]);
      uVar6 = FUN_00d6b630(lVar10,local_e0[0],0xffffffff);
      FUN_00d009d0(local_d8,*(undefined4 *)(lVar11 + 0x260),uVar6);
      FUN_00ce20fc(local_d8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddaae0(void)

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
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfafcc(auStack_48);
  FUN_00cf52e0(uVar2,"PetalMinion");
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40200000,uVar2,PTR_s_Buff_PetalMinion_Frenzy_02bf0d78,1,0);
  FUN_00cfb32c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 0xc4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Petal_basic_attack_2");
  FUN_00cf41bc(uVar3,"Sound_Petal_basic_attack_3");
  FUN_00cf41bc(uVar3,"Sound_Petal_basic_attack_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x53,"GunMuzzle");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddac70(void)

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
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfafcc(auStack_48);
  FUN_00cf52e0(uVar2,"PetalMinion");
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40400000,uVar2,PTR_s_Buff_PetalMinion_Frenzy_02bf0d78,1,0);
  FUN_00cfb32c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 0xc4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Petal_basic_attack_2");
  FUN_00cf41bc(uVar3,"Sound_Petal_basic_attack_3");
  FUN_00cf41bc(uVar3,"Sound_Petal_basic_attack_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x53,"GunMuzzle");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddae00(void)

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
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfafcc(auStack_48);
  FUN_00cf52e0(uVar2,"PetalMinion");
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40400000,uVar2,PTR_s_Buff_PetalMinion_Frenzy_02bf0d78,1,0);
  FUN_00cfb32c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 0xc4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_crit_attack",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x54,"GunMuzzle");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddaf60(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability01",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_38);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 200));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_ability_1",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf3358(0,uVar2,"Effect_Petal_SeedPlanting",0,"SeedSpawn",0,1,0,0);
  plVar5 = (long *)FUN_00cfb1c4(auStack_38);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*PetalSeed*",1);
  (**(code **)(*plVar5 + 0x18))(plVar5,"SeedSpawn");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

