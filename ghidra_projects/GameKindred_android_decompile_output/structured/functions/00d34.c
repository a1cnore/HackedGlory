// functions/00d34 — 13 functions
#include "libGameKindred.h"




void FUN_00d34064(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67dcc(param_1,FUN_00d69f90);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d340dc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_80 [64];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_40);
    lVar6 = FUN_00d66d28(local_40);
    lVar7 = *(long *)(lVar6 + 0x40);
    fVar9 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
            (*(float *)(lVar7 + 0x38) + *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0)
            );
    if (DAT_0315ce30 <= fVar9) {
      fVar9 = DAT_0315ce30;
    }
    fVar10 = *(float *)(lVar7 + 0x308);
    fVar8 = DAT_0315cd70;
    if (DAT_0315cd70 <= fVar9) {
      fVar8 = fVar9;
    }
    fVar9 = (float)FUN_00d085c4(PTR_s__Item_FountainOfRenewal__02beb098,0,1);
    uVar3 = FUN_00d67b84(local_40);
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar4 = FUN_00d66d34(local_40);
    FUN_00daa4a4(fVar9 * (1.0 - fVar10 / fVar8) * 100.0,auStack_80,uVar3,uVar1,uVar4,0xffffffff,0xee
                 ,0xffffffff);
    FUN_00910c0c(auStack_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34228(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d340dc;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x30);
  FUN_00d3e534();
  uVar6 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar6);
  uVar6 = FUN_00d47d9c(uVar6);
  FUN_00da2040(uVar6,"Effect_MulledWine_buff");
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 8);
  FUN_00d3e534();
  uVar6 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34334(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  int local_ec;
  long local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [96];
  
  lVar2 = tpidr_el0;
  lVar12 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) == 0) goto LAB_00d34500;
  FUN_00d69294(param_1,&local_e0,&local_e8);
  lVar13 = *(long *)(local_e8 + 0x20);
  if (lVar13 == 0) goto LAB_00d34500;
  lVar8 = FUN_00d66d28(local_e0);
  uVar9 = FUN_00d9ea08();
  uVar10 = FUN_00d6eb50();
  uVar10 = FUN_00d6eb5c(uVar10,PTR_s__Item_PoisonedShiv__02beb0e8);
  uVar7 = FUN_00daa578(local_e8,lVar8);
  if (((uVar7 & 1) == 0) || ((*(byte *)(local_e8 + 0xc) >> 2 & 1) == 0)) goto LAB_00d34500;
  local_ec = -1;
  uVar7 = FUN_00d6bbac(uVar9,DAT_0315cc5c,&local_ec);
  if ((uVar7 & 1) == 0) {
LAB_00d344b8:
    puVar3 = PTR_s_Buff_Item_PoisonedShiv_Payload_02beb7c8;
    uVar1 = *(undefined4 *)(lVar8 + 0x260);
    uVar6 = FUN_00ceb350();
    FUN_00cfe864(0xbf800000,0,0,auStack_b0,uVar1,uVar1,puVar3,uVar6,1,0,0);
    puVar11 = auStack_b0;
  }
  else {
    fVar14 = (float)FUN_00d08524(uVar10,0,1);
    if ((local_ec == -1) ||
       (iVar4 = FUN_00d6bb04(uVar9), puVar3 = PTR_s_Buff_MortalWound_02beb418,
       iVar4 != (int)(fVar14 + 0.5) + -1)) goto LAB_00d344b8;
    uVar1 = *(undefined4 *)(lVar8 + 0x260);
    uVar6 = *(undefined4 *)(lVar13 + 0x260);
    uVar9 = FUN_00d08524(uVar10,1,1);
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(uVar9,0,0,auStack_b0,uVar1,uVar6,puVar3,uVar5,1,0,0);
    FUN_00ce20fc(auStack_b0);
    FUN_00d009d0(auStack_d8,*(undefined4 *)(lVar8 + 0x260),local_ec);
    puVar11 = auStack_d8;
  }
  FUN_00ce20fc(puVar11);
LAB_00d34500:
  if (*(long *)(lVar2 + 0x28) == lVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34534(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d34334;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x18);
  FUN_00d3e534();
  uVar6 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d3e534();
  uVar6 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d46fc0(uVar6,PTR_s_Buff_Item_PoisonedShiv_Payload_02beb7c8);
  FUN_00d3e534();
  uVar6 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3463c(void)

{
  return;
}




void FUN_00d34640(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Item_NullwaveGauntlet_Charge");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0x90))();
  lVar2 = FUN_00d6624c(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_EMP_ItemSilence_02beb7e0);
  local_38 = FUN_00d34770;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))
                             (plVar3,"BaseDamage",PTR_s__Item_NullwaveGauntlet__02beb0d0);
  (**(code **)(*plVar3 + 0x20))(plVar3,"PctHealthDamage");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34770(void)

{
  FUN_00d085c4(PTR_s__Item_NullwaveGauntlet__02beb0d0,0,1);
  return;
}




void FUN_00d34788(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d42ce8(param_1,0x10,"Effect_ItemSilence","OverHead");
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_CenterMass");
  FUN_00da2040(uVar3,"Effect_Item_EMP_Hit");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3482c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  float *pfVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  long local_118;
  undefined8 local_110;
  long local_108 [3];
  char local_f0;
  undefined1 auStack_d8 [88];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_110,&local_118);
  lVar6 = FUN_00d66d28(local_110);
  if (((DAT_0315cc70 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0315cc70), iVar5 != 0)) {
    DAT_0315cc6c = 0xdf582d96;
    __cxa_guard_release(&DAT_0315cc70);
  }
  lVar7 = FUN_00d9f258(lVar6,&DAT_0315cc6c);
  uVar8 = FUN_00daa58c(local_118,lVar6);
  if (((uVar8 & 1) == 0) || ((lVar7 != 0 && (fVar13 = (float)FUN_00d6d9f4(lVar7), 0.0 < fVar13))))
  goto LAB_00d34b58;
  puVar2 = PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0;
  uVar3 = FUN_00e6a474(PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  pcVar9 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  if (*pcVar9 != '\0') {
    *(float *)(local_118 + 0x54) = *(float *)(local_118 + 0x54) * 0.5;
    goto LAB_00d34b58;
  }
  lVar7 = FUN_00d67c60(local_110);
  puVar2 = PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8;
  uVar3 = FUN_00e6a474(PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar3);
  *pfVar10 = *(float *)(local_118 + 0x54) + *pfVar10;
  lVar7 = *(long *)(lVar6 + 0x40);
  fVar13 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
           (*(float *)(lVar7 + 0x38) + *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0))
  ;
  if (DAT_0315ce30 <= fVar13) {
    fVar13 = DAT_0315ce30;
  }
  fVar15 = DAT_0315cd70;
  if (DAT_0315cd70 <= fVar13) {
    fVar15 = fVar13;
  }
  fVar13 = (float)FUN_00d085c4(PTR_s__Item_SlumberingHusk__02beb120,0,1);
  if (*pfVar10 < fVar13 * fVar15) goto LAB_00d34b58;
  *(float *)(local_118 + 0x54) = *(float *)(local_118 + 0x54) + (*pfVar10 - fVar13 * fVar15) * -0.5;
  lVar7 = FUN_00d67c60(local_110);
  puVar2 = PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0;
  uVar3 = FUN_00e6a474(PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar11 = (undefined1 *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar3);
  *puVar11 = 1;
  puVar2 = PTR_s_Buff_Item_SlumberingHuskFortifie_02beb7f8;
  uVar3 = *(undefined4 *)(lVar6 + 0x260);
  uVar14 = FUN_00d085c4(PTR_s__Item_SlumberingHusk__02beb120,2,1);
  uVar4 = FUN_00ceb350();
  FUN_00cfe864(uVar14,0,0,auStack_d8,uVar3,uVar3,puVar2,uVar4,1,0,0);
  FUN_00ce20fc(auStack_d8);
  uVar4 = DAT_0315cc6c;
  uVar3 = *(undefined4 *)(lVar6 + 0x260);
  FUN_00d085c4(PTR_s__Item_SlumberingHusk__02beb120,3,1);
  FUN_00d04e08(local_108,uVar3,uVar4,1);
  if (local_f0 == '\0') {
    (**(code **)(local_108[0] + 0x10))(local_108);
    uVar8 = FUN_00ceab48();
    if ((uVar8 & 1) != 0) goto LAB_00d34b04;
  }
  else {
LAB_00d34b04:
    (**(code **)(local_108[0] + 0x18))(local_108);
  }
  lVar6 = FUN_00d67c60(local_110);
  puVar2 = PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8;
  uVar3 = FUN_00e6a474(PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar3);
  *puVar12 = 0;
LAB_00d34b58:
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34bc0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_48 [2];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d69610(param_1,0,0,&local_40,0);
  if (((DAT_0315cc80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0315cc80), iVar4 != 0)) {
    DAT_0315cc78 = DAT_0315cc88;
    __cxa_guard_release(&DAT_0315cc80);
  }
  thunk_FUN_00d9ff34(local_48,*local_40);
  puVar2 = PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0;
  if (local_48[0] == DAT_0315cc78) {
    uVar3 = FUN_00e6a474(PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    puVar5 = (undefined1 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *puVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34cc0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_70);
  lVar4 = FUN_00d66d28(local_70);
  fVar10 = DAT_0315cd70;
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar6 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
          (*(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
  if (DAT_0315ce30 <= fVar6) {
    fVar6 = DAT_0315ce30;
  }
  fVar7 = (float)FUN_00d085c4(PTR_s__Item_SlumberingHusk__02beb120,0,1);
  fVar8 = (float)FUN_00d67b0c(local_70);
  fVar9 = (float)FUN_00d085c4(PTR_s__Item_SlumberingHusk__02beb120,1,1);
  lVar4 = FUN_00d67c60(local_70);
  puVar2 = PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8;
  uVar3 = FUN_00e6a474(PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar3);
  if (0.0 < *pfVar5) {
    if (fVar10 <= fVar6) {
      fVar10 = fVar6;
    }
    fVar10 = *pfVar5 - (fVar8 * fVar7 * fVar10) / fVar9;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *pfVar5 = fVar10;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d34e28(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  FUN_00d67b04(0x3e4ccccd);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    lVar8 = lVar5 + 0x100;
    uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))
                      (lVar8,PTR_s_var_SlumberingHusk_DamageTaken_02beb7e8);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar8,uVar3);
    *puVar6 = 0;
    uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))
                      (lVar8,PTR_s_var_SlumberingHusk_FortifiedHeal_02beb7f0);
    puVar7 = (undefined1 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar8,uVar3);
    *puVar7 = 0;
    lVar8 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d34cc0;
    *(uint *)(lVar8 + 0xf8) = uVar1 + 1;
    lVar8 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3482c;
    *(uint *)(lVar8 + 0xf8) = uVar1 + 1;
    lVar8 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBeforeReceiveBuffName_02bed560;
    uVar3 = FUN_00e6a474(PTR_s_onBeforeReceiveBuffName_02bed560);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d34bc0;
    *(uint *)(lVar8 + 0xf8) = uVar1 + 1;
  }
  uVar9 = FUN_00d646fc(param_1);
  FUN_00d4ad80(uVar9,"SlumberingHusk");
  lVar8 = FUN_00d4adc4();
  plVar10 = (long *)FUN_00d2945c(lVar8 + 0x10);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x78))(plVar10,"Bone_CenterMass");
  plVar10 = (long *)(**(code **)(*plVar10 + 0x48))(plVar10,"Effect_SlumberingHusk_Ready");
  plVar10 = (long *)(**(code **)(*plVar10 + 0x88))(plVar10,1);
  (**(code **)(*plVar10 + 0xb8))(plVar10,2);
  lVar8 = FUN_00d64980(param_1);
  plVar10 = (long *)FUN_00d2a160(lVar8 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d35068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x30))(plVar10,PTR_s_Buff_Item_SlumberingHuskFortifie_02beb7f8);
  return;
}

