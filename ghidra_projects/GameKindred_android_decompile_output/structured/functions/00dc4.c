// functions/00dc4 — 11 functions
#include "libGameKindred.h"




void FUN_00dc4004(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,10,0x19,0);
  return;
}




float FUN_00dc4018(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031b0a20 <= fVar3) {
    fVar3 = DAT_031b0a20;
  }
  fVar4 = DAT_031b0960;
  if (DAT_031b0960 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec58,0,9);
  return fVar3 * fVar4;
}




void FUN_00dc40a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  code *local_98;
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_b8);
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Ability01_HitA");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x474));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"Sound_Tony_Ability_A_Swing_01",0,0,0xffffffff,0,1);
  plVar3 = (long *)FUN_00cfa12c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0x3e99999a,0x3e4ccccd,0x3fa66666,0x3f4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98 = FUN_00dc43d4;
  local_90 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,&local_98);
  (**(code **)(*plVar3 + 0xb8))(0x40c00000);
  uVar4 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_b8);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tony_A1");
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_00cfa0e4(auStack_b8);
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  FUN_00d4d9e8(&local_98);
  FUN_00d4daf4(&local_98,0,1,0,0);
  FUN_00d4dabc(&local_98,0x40000);
  FUN_00d4dcdc(&local_98,1);
  local_58 = 0x3f266666;
  lVar2 = FUN_00cf9f7c(auStack_b8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Tony_Talent_TalentB_02bf2190;
  uVar4 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x40400000,uVar4,&local_98,0,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_a8 = FUN_00dc4018;
  local_a0 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8,0,0);
  FUN_00cf9eec(lVar2);
  uVar4 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x474));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"Sound_Tony_Ability_A_Impact_01",0,0,0xffffffff,0,1);
  plVar3 = (long *)FUN_00cfb404(auStack_b8);
  (**(code **)(*plVar3 + 0x50))
            (plVar3,PTR_s_Buff_Tony_A_ChargedAttack1_02bf0870,
             PTR_s_Buff_Tony_A_ChargedAttack2_02bf0878);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc43d4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00dc43e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  code *local_98;
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_b8);
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Ability01_HitB");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x474));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"Sound_Tony_Ability_A_Swing_02",0,0,0xffffffff,0,1);
  plVar3 = (long *)FUN_00cfa12c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0x3e99999a,0x3e4ccccd,0x3fa66666,0x3f4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98 = FUN_00dc43d4;
  local_90 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,&local_98);
  (**(code **)(*plVar3 + 0xb8))(0x40c00000);
  uVar4 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_b8);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tony_A2");
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_00cfa0e4(auStack_b8);
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  FUN_00d4d9e8(&local_98);
  FUN_00d4daf4(&local_98,0,1,0,0);
  FUN_00d4dabc(&local_98,0x40000);
  FUN_00d4dcdc(&local_98,1);
  local_58 = 0x3f266666;
  lVar2 = FUN_00cf9f7c(auStack_b8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Tony_Talent_TalentB_02bf2190;
  uVar4 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x40400000,uVar4,&local_98,0,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_a8 = FUN_00dc4018;
  local_a0 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8,0,0);
  FUN_00cf9eec(lVar2);
  uVar4 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x474));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"Sound_Tony_Ability_A_Impact_02",0,0,0xffffffff,0,1);
  plVar3 = (long *)FUN_00cfb404(auStack_b8);
  (**(code **)(*plVar3 + 0x50))
            (plVar3,PTR_s_Buff_Tony_A_ChargedAttack2_02bf0878,
             PTR_s_Buff_Tony_A_ChargedAttack3_02bf0880);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00dc4718(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b0a20 <= fVar2) {
    fVar2 = DAT_031b0a20;
  }
  fVar3 = DAT_031b0960;
  if (DAT_031b0960 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}




void FUN_00dc4780(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_c8);
  plVar3 = (long *)FUN_00cfaa2c(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Ability01_HitC");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x474));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"Sound_Tony_Ability_A_Swing_03",0,0,0xffffffff,0,1);
  plVar3 = (long *)FUN_00cfa12c(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0x3e99999a,0x3e4ccccd,0x3fa66666,0x3f4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_a8 = FUN_00dc43d4;
  local_a0 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,&local_a8);
  (**(code **)(*plVar3 + 0xb8))(0x40c00000);
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_c8);
  plVar3 = (long *)FUN_00cfab04(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tony_A3");
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_00cfa0e4(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_a8 = FUN_00dc4718;
  local_a0 = 5;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_a8,0,0xf);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dabc(&local_a8,0x40000);
  FUN_00d4dcdc(&local_a8,1);
  local_68 = 0x3f266666;
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Tony_Talent_TalentB_02bf2190;
  uVar4 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x40400000,uVar4,&local_a8,0,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_b8 = FUN_00dc4018;
  local_b0 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8,0,0);
  plVar3 = (long *)FUN_00cf9b44(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_b8 = FUN_00dc4b8c;
  local_b0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
  FUN_00cf9eec(lVar2);
  uVar4 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x474));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"Sound_Tony_Ability_A_Impact_03",0,0,0xffffffff,0,1);
  FUN_00cf99dc(auStack_c8);
  plVar3 = (long *)FUN_00cf9b44(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_a8 = FUN_00dc4b8c;
  local_a0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8);
  FUN_00cf9eec(auStack_c8);
  FUN_00cf98bc(auStack_c8);
  uVar4 = FUN_00cf9d84(auStack_c8);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Tony_A_ChargedAttack3_02bf0880);
  uVar4 = FUN_00cf9d84(auStack_c8);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Tony_A_SpeedBoostAndDamage_02bf0888);
  FUN_00cf9eec(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc4b8c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,0xb,0x19,0);
  return;
}




void FUN_00dc4ba0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d5048c();
  fVar3 = (float)FUN_00d59f54(lVar1,4,6,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar4 = (float)FUN_00d59f54(lVar1,4,7,0x19,0);
  fVar3 = fVar3 + fVar5 * fVar4;
  fVar4 = (float)FUN_00d59f54(lVar1,4,9,0x19,0);
  if (fVar4 <= fVar3) {
    fVar3 = (float)FUN_00d59f54(lVar1,4,9,0x19,0);
  }
  *param_3 = fVar3;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Tony_Talent_TalentC_02bf21a0);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec60,0,9);
    *param_3 = fVar4 + *param_3;
  }
  return;
}




void FUN_00dc4c8c(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,6,0x19,0);
  return;
}




void FUN_00dc4ca0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [64];
  undefined4 local_c8;
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_118);
  lVar2 = FUN_00cfa6cc(auStack_118);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_118);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfab94(auStack_118);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x47c));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Tony_Ability_B_activate",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa9e4(auStack_118);
  FUN_00cf3048(uVar3,"TauntStartUp",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfaa74(auStack_118);
  FUN_00cf32cc(0,uVar3,"Effect_Tony_B_Warning",0,0,1,0,0);
  plVar4 = (long *)FUN_00cfac6c(auStack_118);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  (**(code **)(*plVar4 + 0x18))(0x3ea8f5c3);
  uVar3 = FUN_00cfa294(auStack_118);
  FUN_00cf7580(uVar3,FUN_00dc505c);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_118);
  FUN_00cf32cc(0,uVar3,"Effect_Tony_B_Cast",0,0,1,0,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_118);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Tony_B_DamageReduction_02bf0898);
  local_a8 = FUN_00dc4c8c;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dabc(&local_a8,1);
  FUN_00d4dba0(0x41340000,&local_a8);
  FUN_00d4dcdc(&local_a8,1);
  local_68 = 0x3f266666;
  uVar3 = FUN_00cfaf84(auStack_118);
  FUN_00cf5504(uVar3,&local_a8,0,FUN_00dc5070,0,1,0);
  uVar3 = FUN_00cf9ab4(auStack_118);
  FUN_00cf4540(uVar3,PTR_s_Buff_Taunt_02beb498,FUN_00dc4ba0,1,0);
  uVar3 = FUN_00cf9ab4(auStack_118);
  FUN_00cf4540(uVar3,PTR_s_Buff_Tony_B_TauntSFX_02bf0890,FUN_00dc4ba0,1,0);
  FUN_00cf9eec(auStack_118);
  FUN_00d4d9e8(auStack_108);
  FUN_00d4daf4(auStack_108,0,1,0,0);
  FUN_00d4dabc(auStack_108,0x40000);
  FUN_00d4dba0(0x41340000,auStack_108);
  FUN_00d4dcdc(auStack_108,1);
  local_c8 = 0x3f266666;
  uVar3 = FUN_00cfaf84(auStack_118);
  FUN_00cf5504(uVar3,auStack_108,0,FUN_00dc5070,0,1,0);
  FUN_00cfa09c(auStack_118);
  lVar2 = FUN_00cf9f7c(auStack_118);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Tony_Talent_TalentC_02bf21a0;
  uVar3 = FUN_00cf9ab4(lVar2 + 0xb0);
  FUN_00cf4540(uVar3,PTR_s_Buff_Tony_Talent_TauntDebuff_02bf2188,FUN_00dc4ba0,1,0);
  FUN_00cf9eec(auStack_118);
  uVar3 = FUN_00cfa294(auStack_118);
  FUN_00cf7580(uVar3,FUN_00dc5084);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_118);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_118);
  FUN_00cfb5c4(auStack_118);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

