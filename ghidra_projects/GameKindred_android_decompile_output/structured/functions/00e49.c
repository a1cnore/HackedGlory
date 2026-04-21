// functions/00e49 — 18 functions
#include "libGameKindred.h"




void FUN_00e490d0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bc68(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e490f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_00e490f4(undefined8 *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = FUN_00d66d28(*param_1);
  fVar5 = (float)FUN_00d59f54(uVar2,4,3,0x19,0);
  *param_2 = fVar5;
  lVar3 = FUN_00d66d28(*param_1);
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  fVar7 = *param_2;
  if (DAT_031bbb10 <= fVar5) {
    fVar5 = DAT_031bbb10;
  }
  fVar6 = DAT_031bba50;
  if (DAT_031bba50 <= fVar5) {
    fVar6 = fVar5;
  }
  *param_2 = fVar7 * fVar6;
  uVar1 = FUN_00d66cfc(*param_1);
  *param_3 = fVar7 * fVar6 * (float)uVar1;
  lVar3 = FUN_00d66d28(*param_1);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar3 + 0x260),PTR_s_Buff_Varya_Talent_TalentB_02bf2118);
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_00d66d28(*param_1);
    fVar5 = (float)FUN_00d5a3d0(uVar2,DAT_0320ec1c,1,9);
    *param_2 = fVar5 * *param_2;
    uVar2 = FUN_00d66d28(*param_1);
    fVar5 = (float)FUN_00d5a3d0(uVar2,DAT_0320ec1c,1,9);
    *param_3 = fVar5 * *param_3;
  }
  return;
}




void FUN_00e4922c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d6592c();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e490f4);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e49278(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_00d6a078(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  *param_4 = "Bone_CenterMass";
  return;
}




float FUN_00e492b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d426b0(*param_1);
  fVar3 = (float)FUN_00d59f54(lVar1,4,2,0x19,0);
  lVar2 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar4 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
          (*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0));
  if ((*(byte *)(lVar2 + 0x2f4) & 1) != 0) {
    fVar3 = fVar3 + fVar3;
  }
  if (DAT_031bbb18 <= fVar4) {
    fVar4 = DAT_031bbb18;
  }
  fVar5 = DAT_031bba58;
  if (DAT_031bba58 <= fVar4) {
    fVar5 = fVar4;
  }
  return fVar3 * fVar5;
}




void FUN_00e4936c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_B_DamageBeam");
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3ecccccd);
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xa0))(plVar3,FUN_00e49278);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Varya_Ability_B_Damage_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Ability_B_Damage_2");
  lVar4 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar4 + 0x464));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",4);
  plVar3 = (long *)FUN_00d2a464(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_58 = FUN_00e492b4;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x10))(plVar3,2,&local_58);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_00e0c91c(lVar2);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Barrier_02bf1330);
  local_58 = FUN_00e495a0;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar4 = FUN_00d66d28(param_1);
  if ((*(byte *)(lVar4 + 0x2f4) & 1) != 0) {
    plVar3 = (long *)FUN_00d2cf7c(lVar2);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Barrier_02bf1330);
    local_58 = FUN_00e495a0;
    local_50 = 3;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e495a0(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,4,0x19,0);
  return;
}




void FUN_00e495b4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_a8,0);
  FUN_00d4d9e8(auStack_98);
  uVar2 = FUN_00d67b78(param_1);
  FUN_00d4daf4(auStack_98,0,1,0,uVar2);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4dc24(auStack_98,0);
  FUN_00d4d364(auStack_98,0);
  FUN_00d4db48(0x447a0000,auStack_98,auStack_a8);
  *(undefined1 *)(param_2 + 0x10) = local_88;
  *(undefined8 *)(param_2 + 8) = local_90;
  memcpy((void *)(param_2 + 0x14),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e49698(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_a8,0);
  FUN_00d4d9e8(auStack_98);
  uVar2 = FUN_00d67b78(param_1);
  FUN_00d4daf4(auStack_98,0,1,0,uVar2);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4dc24(auStack_98,0);
  FUN_00d4d364(auStack_98,1);
  FUN_00d4db48(0x447a0000,auStack_98,auStack_a8);
  *(undefined1 *)(param_2 + 0x10) = local_88;
  *(undefined8 *)(param_2 + 8) = local_90;
  memcpy((void *)(param_2 + 0x14),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e4977c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = *param_1;
  FUN_00d67b84(uVar3);
  uVar1 = FUN_00d9e390();
  fVar4 = (float)FUN_00d59f54(uVar1,8,10,0x19,0);
  fVar5 = (float)FUN_00d59f54(uVar1,8,9,0x19,0);
  fVar6 = (float)FUN_00d59f54(uVar1,8,0xb,0x19,0);
  fVar6 = fVar5 + fVar4 + fVar4 + fVar6;
  uVar1 = FUN_00d67b84(uVar3);
  uVar2 = FUN_00d44008(uVar1,PTR_s_Buff_Varya_Talent_TalentC_02bf2108);
  fVar4 = fVar4 + fVar4 + fVar6;
  if ((uVar2 & 1) == 0) {
    fVar4 = fVar6;
  }
  return fVar4;
}




void FUN_00e49828(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d31490(lVar2);
  FUN_00d9ca38(uVar3,FUN_00e495b4);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_C_Marked_02bf1348);
  local_58 = FUN_00e4977c;
  local_50 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00e4a500(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Varya_Ability_C_Thunder_Storm_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Varya_Ability_C_Thunder_Storm_2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Varya_Ability_C_Thunder_Storm_3");
  lVar2 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar2 + 0x468));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64314(param_1);
  uVar3 = FUN_00d39b7c(lVar2 + 0x10);
  uVar3 = FUN_00d9cef8(uVar3,FUN_00e49698);
  uVar3 = FUN_00d9cb40(uVar3,PTR_s_Buff_Varya_C_Marked_02bf1348);
  lVar5 = FUN_00d66d28(param_1);
  FUN_00d9cbb8(uVar3,*(undefined4 *)(lVar5 + 0x260));
  plVar4 = (long *)FUN_00d2cfcc(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_C_Marked_02bf1348);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00e213ac(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Varya__C_02bef7b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e499cc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6483c();
  lVar3 = FUN_00d48f64(uVar2,FUN_00e4a550);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_C_ComboWindow_02bf1358);
  local_38[0] = 0x40000000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  lVar3 = FUN_00d64314(param_1);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_C_Control_02bf1340);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d3bc68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))();
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e49aac(void)

{
  return;
}




void FUN_00e49ab0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00d67b84();
  uVar1 = FUN_00d9e390();
  uVar2 = FUN_00d59f54(uVar1,8,9,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00e49aec(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00d67b84();
  uVar1 = FUN_00d9e390();
  uVar2 = FUN_00d59f54(uVar1,8,10,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00e49b28(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00d67b84();
  uVar7 = FUN_00d44008(uVar6,PTR_s_Buff_Varya_Talent_TalentC_02bf2108);
  lVar8 = FUN_00d65010(param_1);
  plVar9 = (long *)FUN_00d2945c(lVar8 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x60))();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Varya_C_EnemyWarning");
  plVar9 = (long *)(**(code **)(*plVar9 + 0xc0))(0x3f333333,0x3ecccccd,0x3f800000);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x78))(plVar9,1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0xb0))(plVar9,1);
  local_68[0] = 0x3d4ccccd;
  local_60 = 1;
  plVar9 = (long *)(**(code **)(*plVar9 + 0xd0))(plVar9,local_68);
  (**(code **)(*plVar9 + 0xd8))(0x3f666666);
  uVar6 = FUN_00d6483c(param_1);
  lVar8 = FUN_00d48f64(uVar6,FUN_00e49ab0);
  plVar9 = (long *)FUN_00d45354(lVar8 + 0x10);
  pcVar1 = "*Varya_C_StrikeTalent*";
  bVar5 = (uVar7 & 1) == 0;
  pcVar2 = pcVar1;
  if (bVar5) {
    pcVar2 = "*Varya_C_StrikeA*";
  }
  pcVar4 = pcVar1;
  if (bVar5) {
    pcVar1 = "*Varya_C_StrikeC*";
    pcVar4 = "*Varya_C_StrikeB*";
  }
  (**(code **)(*plVar9 + 0x30))(plVar9,pcVar2,1);
  uVar6 = FUN_00d6483c(param_1);
  uVar6 = FUN_00d48f64(uVar6,FUN_00e49aec);
  lVar8 = FUN_00d48f6c(uVar6,lVar8);
  plVar9 = (long *)FUN_00d45354(lVar8 + 0x10);
  (**(code **)(*plVar9 + 0x30))(plVar9,pcVar4,1);
  uVar6 = FUN_00d6483c(param_1);
  uVar6 = FUN_00d48f64(uVar6,FUN_00e49aec);
  lVar8 = FUN_00d48f6c(uVar6,lVar8);
  plVar9 = (long *)FUN_00d45354(lVar8 + 0x10);
  (**(code **)(*plVar9 + 0x30))(plVar9,pcVar1,1);
  uVar6 = FUN_00d6483c(param_1);
  if ((uVar7 & 1) == 0) {
    uVar6 = FUN_00d48f64(uVar6,FUN_00e4a560);
  }
  else {
    uVar6 = FUN_00d48f64(uVar6,FUN_00e49aec);
    lVar8 = FUN_00d48f6c(uVar6,lVar8);
    plVar9 = (long *)FUN_00d45354(lVar8 + 0x10);
    (**(code **)(*plVar9 + 0x30))(plVar9,"*Varya_C_StrikeTalent*",1);
    uVar6 = FUN_00d6483c(param_1);
    uVar6 = FUN_00d48f64(uVar6,FUN_00e49aec);
    lVar8 = FUN_00d48f6c(uVar6,lVar8);
    plVar9 = (long *)FUN_00d45354(lVar8 + 0x10);
    (**(code **)(*plVar9 + 0x30))(plVar9,"*Varya_C_StrikeTalent*",1);
    uVar6 = FUN_00d6483c(param_1);
    uVar6 = FUN_00d48f64(uVar6,FUN_00e4a560);
  }
  lVar8 = FUN_00d48f6c(uVar6,lVar8);
  FUN_00d2a320(lVar8 + 0x10);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e49dd8(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00d67b84();
  uVar1 = FUN_00d9e390();
  uVar2 = FUN_00d59f54(uVar1,8,0xb,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00e49e14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 local_88 [2];
  undefined4 local_80;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar3 = FUN_00d9e390();
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar8 = (*(float *)(lVar3 + 0x1b4) + 1.0) *
          (*(float *)(lVar3 + 0x4c) + *(float *)(lVar3 + 0x100) * (*(float *)(lVar3 + 0x268) + 1.0))
  ;
  if (DAT_031bbb24 <= fVar8) {
    fVar8 = DAT_031bbb24;
  }
  fVar2 = DAT_031bba60._4_4_;
  if (DAT_031bba60._4_4_ <= fVar8) {
    fVar2 = fVar8;
  }
  if (fVar2 <= 0.0) {
    fVar8 = 0.05;
  }
  else if (375.0 <= fVar2) {
    fVar8 = 0.3;
  }
  else {
    fVar8 = (fVar2 / 375.0) * 0.25 + 0.05;
  }
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Varya_C_Strike_Warning");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar5 = FUN_00d426b0(param_1);
  local_78._0_4_ = FUN_00d59f54(uVar5,8,5,0x19,0);
  local_70 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,&local_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3e99999a,0x3f19999a,0x3f800000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd8))(0x3f333333);
  local_88[0] = 0x3f4ccccd;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_88);
  uVar5 = FUN_00d6483c(param_1);
  lVar6 = FUN_00d48f64(uVar5,FUN_00e49dd8);
  lVar3 = lVar6 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Varya_C_Strike_Impact");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_78 = (code *)CONCAT44(local_78._4_4_,0x3dcccccd);
  local_70 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,&local_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0x3f800000,0x3f333333);
  (**(code **)(*plVar4 + 0xd8))(0x3f800000);
  plVar4 = (long *)FUN_00d2b778(lVar3);
  local_78 = FUN_00e4a1e4;
  local_70 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
  (**(code **)(*plVar4 + 0x20))(0x3f000000);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  local_78 = (code *)CONCAT44(local_78._4_4_,0x40000000);
  local_70 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_78);
  plVar4 = (long *)FUN_00e4a500(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Varya_Ability_C_Lightning_Strikes_1")
  ;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Varya_Ability_C_Lightning_Strikes_2")
  ;
  lVar7 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar7 + 0x468));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00e13af8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(fVar8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f800000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(0x41700000);
  (**(code **)(*plVar4 + 0x28))();
  uVar5 = FUN_00d6483c(param_1);
  uVar5 = FUN_00d48f64(uVar5,FUN_00e4a570);
  lVar3 = FUN_00d48f6c(uVar5,lVar6);
  FUN_00d2ab44(lVar3 + 0x10);
  lVar3 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

