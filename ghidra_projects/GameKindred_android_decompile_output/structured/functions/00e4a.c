// functions/00e4a — 37 functions
#include "libGameKindred.h"




void FUN_00e4a1e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,5,0x19,0);
  return;
}




void FUN_00e4a1f8(undefined8 param_1)

{
  FUN_00e49e14(param_1,PTR_s_Buff_Varya_C_StrikeADamage_02bf1368);
  return;
}




void FUN_00e4a204(undefined8 param_1)

{
  FUN_00e49e14(param_1,PTR_s_Buff_Varya_C_StrikeBDamage_02bf1378);
  return;
}




void FUN_00e4a210(undefined8 param_1)

{
  FUN_00e49e14(param_1,PTR_s_Buff_Varya_C_StrikeCDamage_02bf1388);
  return;
}




void FUN_00e4a21c(undefined8 param_1)

{
  FUN_00e49e14(param_1,PTR_s_Buff_Varya_C_StrikeTalentDamage_02bf1398);
  return;
}




undefined1  [16] FUN_00e4a228(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_00d426b0(*param_1);
  auVar4 = FUN_00d59f54(lVar1,8,2,0x19,0);
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_00d59f54(lVar1,8,3,0x19,0);
    auVar4 = ZEXT416((uint)(auVar4._0_4_ * fVar3));
  }
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Varya_Talent_TalentC_02bf2108);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec14,0,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




float FUN_00e4a2d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,8,2,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,8,4,0x19,0);
  fVar2 = fVar2 * (1.0 - fVar3);
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_00d59f54(uVar1,8,3,0x19,0);
    fVar2 = fVar2 * fVar3;
  }
  return fVar2;
}




void FUN_00e4a364(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67d04(0x40000000);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,0xff,3);
  if ((param_2 & 1) == 0) {
    lVar2 = FUN_00d63f30(param_1);
    FUN_00d39534(lVar2 + 0x10);
    plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
    local_48 = FUN_00e4a228;
    local_40 = 5;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,2);
    lVar2 = FUN_00d65e5c(param_1);
    FUN_00d39534(lVar2 + 0x10);
    plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
    local_48 = FUN_00e4a2d0;
  }
  else {
    lVar2 = FUN_00d64080(param_1);
    FUN_00d39534(lVar2 + 0x10);
    plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
    local_48 = FUN_00e4a228;
  }
  local_40 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4a4d0(undefined8 param_1)

{
  FUN_00e4a364(param_1,0);
  return;
}




void FUN_00e4a4d8(undefined8 param_1)

{
  FUN_00e4a364(param_1,0);
  return;
}




void FUN_00e4a4e0(undefined8 param_1)

{
  FUN_00e4a364(param_1,0);
  return;
}




void FUN_00e4a4e8(undefined8 param_1)

{
  FUN_00e4a364(param_1,1);
  return;
}




void FUN_00e4a4f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return;
}




void FUN_00e4a500(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a3280();
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




void FUN_00e4a550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f8ccccd;
  return;
}




void FUN_00e4a560(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f666666;
  return;
}




void FUN_00e4a570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return;
}




bool FUN_00e4a580(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  lVar2 = *(long *)(*(long *)(param_1[0x85] + 0x20) + 0x40);
  fVar4 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031bbcd0 <= fVar4) {
    fVar4 = DAT_031bbcd0;
  }
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  fVar5 = DAT_031bbc10;
  if (DAT_031bbc10 <= fVar4) {
    fVar5 = fVar4;
  }
  if (DAT_031bbcd0 <= fVar3) {
    fVar3 = DAT_031bbcd0;
  }
  fVar4 = DAT_031bbc10;
  if (DAT_031bbc10 <= fVar3) {
    fVar4 = fVar3;
  }
  return fVar5 <= fVar4;
}




void FUN_00e4a638(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x80,1);
  lVar2 = FUN_00d65a7c(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bc10();
  uVar4 = FUN_00d4bc50(uVar4,0xc);
  lVar2 = FUN_00d4bcf0(uVar4,0x301);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Kensei_PassiveBehaviors_Con_02bf13a0);
  local_48 = FUN_00e4a7f8;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d65bcc(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Kensei_PassiveBehaviors_Pay_02bf13a8);
  local_48 = FUN_00e4a7f8;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bce8(uVar4,1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00d29edc(lVar2 + 0x10);
  *(code **)(lVar5 + 8) = FUN_00e4a580;
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x88);
  local_48 = FUN_00e4a804;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4a7f8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e4a804(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00e4a810(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  uVar3 = FUN_00d4bc48(uVar3,8);
  lVar2 = FUN_00d4bcf0(uVar3,0x301);
  plVar4 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Kensei_PassiveBehaviors_Pay_02bf13a8);
  local_58 = FUN_00e4a7f8;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  FUN_00d4bc10();
  lVar2 = FUN_00d4bc38();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Kensei_PassiveBehaviors_Bar_02bf13b0);
  local_58 = FUN_00e4a9ac;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d39930(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Kensei_PassiveBehaviors_Con_02bf13a0);
  local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d2a320(lVar2);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Kensei_PassiveBehaviors_Con_02bf13a0);
  local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4a9ac(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00e4a9b8(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,2,7);
  *param_2 = fVar3;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Kensei_Talent_TalentA_02bf2168);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec44,1,9);
    *param_2 = fVar3 * *param_2;
  }
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e4aa44(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4aa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e4a9b8);
  return;
}




void FUN_00e4aa74(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_AA_Impact");
                    /* WARNING: Could not recover jumptable at 0x00e4aacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e4aad0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_AA_Alt_Impact");
                    /* WARNING: Could not recover jumptable at 0x00e4ab28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e4ab2c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_AA_Crit_Impact");
                    /* WARNING: Could not recover jumptable at 0x00e4ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e4ab80(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d53a18(lVar1,0);
  return;
}




void FUN_00e4abc4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00e4ac9c;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Kensei__A_02bef880,&local_48,2);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Kensei__A_02bef880);
  local_48 = FUN_00e4ab80;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4ac9c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,0x19,0);
  return;
}




void FUN_00e4acb0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",0);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Kensei_A_Ability_Hit_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Kensei_A_Ability_Hit_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Kensei_A_Ability_Hit_03");
  lVar2 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar2 + 0x4b8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d65e5c(param_1);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_48,0,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4addc(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e4ae38;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4ae38(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00e4ae4c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Weapon");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kensei_B_Empowered");
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Kensei__A_02bef880);
  uVar4 = FUN_00da4ee4(lVar2 + 0x10);
  uVar4 = FUN_00d986e0(uVar4,PTR_s_Ability__Kensei__A_02bef880);
  local_48 = FUN_00e4af50;
  local_40 = 3;
  FUN_00d986e8(uVar4,&local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2a320(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kensei_B_BonusMovespeed_02bf13f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4af50(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00e4af64(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  uVar3 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d59f54(uVar2,1,8,0x19,0);
  fVar7 = (float)FUN_00d59f54(uVar2,1,10,0x19,0);
  lVar4 = FUN_00d4891c(fVar6 / fVar7,uVar3,1);
  plVar5 = (long *)FUN_00d2887c(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Kensei_B_FortifiedHealth_02bf1400);
  plVar5 = (long *)FUN_00d2887c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_68 = FUN_00deeab8;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  lVar4 = FUN_00d634b4(param_1);
  FUN_00d2a320(lVar4 + 0x10);
  lVar4 = FUN_00d65d0c(param_1);
  plVar5 = (long *)FUN_00d2887c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_68 = FUN_00deeab8;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  FUN_00d2a320(lVar4 + 0x10);
  lVar4 = FUN_00d64980(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_00d2a320(lVar4);
  plVar5 = (long *)FUN_00d2a160(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Kensei_B_FortifiedHealth_02bf1400);
  plVar5 = (long *)FUN_00d2887c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_68 = FUN_00deeab8;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  plVar5 = (long *)FUN_00d2887c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Kensei_B_BonusMovespeed_02bf13f0)
  ;
  local_68 = FUN_00e4b16c;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

