// functions/00dfb — 19 functions
#include "libGameKindred.h"




void FUN_00dfb168(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecc8,0,9);
  return;
}




void FUN_00dfb180(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00dfb18c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_1e8 [16];
  code *local_1d8;
  undefined4 local_1d0;
  undefined1 auStack_1c8 [64];
  undefined4 local_188;
  undefined1 auStack_168 [64];
  undefined4 local_128;
  code *local_108;
  undefined4 local_100;
  undefined4 local_c8;
  undefined1 auStack_a8 [64];
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_1e8);
  lVar2 = FUN_00cfa6cc(auStack_1e8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfaa2c(auStack_1e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01_Circle");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_1e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Inara_A");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00cfac24(auStack_1e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Inara_A");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x534));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfa294(auStack_1e8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00d4dcdc(auStack_a8,1);
  local_68 = 0x3f266666;
  uVar4 = FUN_00cfaf84(auStack_1e8);
  FUN_00cf5460(0x40a00000,uVar4,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_1e8);
  plVar3 = (long *)FUN_00cf9b44(auStack_1e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Inara_A_Slow_02bf1780);
  local_108 = FUN_00dfb524;
  local_100 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_108);
  FUN_00cf9eec(auStack_1e8);
  FUN_00d4d9e8(&local_108);
  FUN_00d4daf4(&local_108,1,0,1,0);
  FUN_00d4dabc(&local_108,1);
  FUN_00d4dcdc(&local_108,1);
  local_c8 = 0x3f266666;
  FUN_00d4d9e8(auStack_168);
  FUN_00d4daf4(auStack_168,1,0,0,0);
  FUN_00d4dabc(auStack_168,0x10);
  FUN_00d4dcdc(auStack_168,1);
  local_128 = 0x3f266666;
  FUN_00d4d9e8(auStack_1c8);
  FUN_00d4daf4(auStack_1c8,1,0,0,0);
  FUN_00d4dabc(auStack_1c8,0x20000000);
  FUN_00d4dcdc(auStack_1c8,1);
  local_188 = 0x3f266666;
  lVar2 = FUN_00cf9f7c(auStack_1e8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Inara_Talent_TalentA_02bf2290;
  uVar4 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x40a00000,uVar4,&local_108,0,0,0,0);
  uVar4 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x40a00000,uVar4,auStack_168,0,0,0,0);
  uVar4 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x40a00000,uVar4,auStack_1c8,0,0,0,0);
  uVar4 = FUN_00cfa5ac(lVar2);
  local_1d8 = FUN_00dfb538;
  local_1d0 = 3;
  FUN_00cf6d54(uVar4,&local_1d8);
  FUN_00cf9eec(lVar2);
  uVar4 = FUN_00cfa294(auStack_1e8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_1e8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_1e8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfb524(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dfb538(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecd8,0,9);
  return;
}




undefined1  [16] FUN_00dfb550(void)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00d50ef8();
  auVar4 = FUN_00d59f54(uVar1,1,5,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Inara_Talent_TalentB_02bf2280);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320ecd0,0,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ + fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00dfb5cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_168 [16];
  code *local_158;
  undefined4 local_150;
  undefined4 local_118;
  code *local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 local_e0;
  code *local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined4 local_c0;
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_168);
  uVar2 = FUN_00cfb05c(auStack_168);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_168);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  plVar4 = (long *)FUN_00cfac24(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Inara_B");
  lVar3 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar3 + 0x538));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfaa2c(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfab04(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Inara_B");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfab04(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Inara_B_Cone");
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4daf4(auStack_b8,0,1,0,0);
  FUN_00d4dba0(0x41f00000,auStack_b8);
  FUN_00d4dabc(auStack_b8,0x40000);
  FUN_00d4dacc(auStack_b8,0x100000);
  FUN_00d4dcdc(auStack_b8,1);
  local_78 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_168);
  FUN_00cf5504(uVar2,auStack_b8,0,FUN_00dfbaa8,0,1,0);
  FUN_00cfa09c(auStack_168);
  plVar4 = (long *)FUN_00cfa684(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_158 = (code *)CONCAT44(local_158._4_4_,0x42700000);
  local_150 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,&local_158);
  local_c8 = (code *)CONCAT44(local_c8._4_4_,0x41f00000);
  local_c0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_c8);
  local_d8 = FUN_00dfb550;
  local_d0 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_d8);
  local_e8[0] = 0x41200000;
  local_e0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,local_e8);
  local_f8 = FUN_00dfbabc;
  local_f0 = 3;
  (**(code **)(*plVar4 + 0x58))(plVar4,&local_f8);
  plVar4 = (long *)FUN_00cf9b44(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0);
  local_158 = FUN_00dfbad0;
  local_150 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_158);
  FUN_00cf9eec(auStack_168);
  FUN_00d4d9e8(&local_158);
  FUN_00d4daf4(&local_158,0,1,0,0);
  FUN_00d4dba0(0x41f00000,&local_158);
  FUN_00d4dac4(&local_158,0x301);
  FUN_00d4dacc(&local_158,0x80);
  FUN_00d4dcdc(&local_158,1);
  local_118 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_168);
  FUN_00cf5504(uVar2,&local_158,0,FUN_00dfbaa8,0,1,0);
  plVar4 = (long *)FUN_00cf9b44(auStack_168);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Inara_B_IsMarkedHero_02bf1788);
  local_c8 = FUN_00dfbad0;
  local_c0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_c8);
  FUN_00cf9eec(auStack_168);
  uVar2 = FUN_00cfa294(auStack_168);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_168);
  local_c8 = FUN_00dfbae4;
  local_c0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_c8);
  local_d8 = FUN_00dfbaf8;
  local_d0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_d8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_00cf9f7c(auStack_168);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Inara_Talent_TalentC_02bf2270;
  plVar4 = (long *)FUN_00cf9afc(lVar3 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Invulnerable_02beb400);
  local_c8 = FUN_00dfb168;
  local_c0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_c8);
  uVar2 = FUN_00cfa294(auStack_168);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_168);
  FUN_00cf9ea4(auStack_168);
  uVar2 = FUN_00cfa294(auStack_168);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_168);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_168);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfbaa8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00dfbabc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00dfbad0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00dfbae4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dfbaf8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dfbb0c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Inara_C_Cast");
  local_38 = (code *)CONCAT44(local_38._4_4_,0x3f000000);
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Inara_C");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x53c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Inara_C_SpeedBoost_Control_02bf17b0);
  local_38 = FUN_00dfbce0;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Inara_C_HasDashAvailable_02bf17a8);
  local_38 = FUN_00dfbcf4;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfbce0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00dfbcf4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




undefined4 FUN_00dfbd08(void)

{
  return 0x3ecccccd;
}




void FUN_00dfbd14(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Inara_C_HasDashAvailable_02bf17a8);
  FUN_00cf9eec(auStack_58);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Inara_C2_Dash");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x540));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03_Dash");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Inara_C_Dash");
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f000000);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cf9afc(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_48 = FUN_00dfbd08;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xbb);
  plVar4 = (long *)FUN_00cfa12c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))();
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e4ccccd);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Inara_Talent_TalentC_02bf2270;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Invulnerable_02beb400);
  local_48 = FUN_00dfb168;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfbfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00d55794(param_2,param_4,0);
  return;
}




void FUN_00dfbfdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  ulong local_58;
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00d557c4(param_2,&local_58,&DAT_03218f68);
  fVar3 = (float)local_58;
  local_58 = (ulong)(uint)(float)local_58;
  fVar4 = fVar3 * fVar3 + 0.0 + local_50 * local_50;
  uVar5 = DAT_03218f68;
  fVar3 = DAT_03218f70;
  if (1e-08 <= fVar4) {
    fVar3 = SQRT(fVar4);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar4);
    }
    uVar5 = CONCAT44((float)(local_58 >> 0x20) / fVar3,(float)local_58 / fVar3);
    fVar3 = local_50 / fVar3;
  }
  lVar1 = *(long *)(param_2 + 0x40);
  fVar7 = *(float *)(*(long *)(param_2 + 0x38) + 100);
  fVar4 = (*(float *)(lVar1 + 0x1e0) + 1.0) *
          (*(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0));
  if (DAT_031b2c00 <= fVar4) {
    fVar4 = DAT_031b2c00;
  }
  fVar6 = (float)DAT_031b2b40;
  if ((float)DAT_031b2b40 <= fVar4) {
    fVar6 = fVar4;
  }
  fVar4 = fVar6 + (*(float *)(*(long *)(param_2 + 0x38) + 0x68) *
                  (fVar7 + *(float *)(param_2 + 0x2e8))) / fVar7 + 0.5;
  *param_4 = CONCAT44((float)(uVar5 >> 0x20) * fVar4 + local_48._4_4_,
                      (float)uVar5 * fVar4 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * fVar4 + local_40;
  if (*(long *)(lVar2 + 0x28) != local_38) {
    local_58 = uVar5;
    local_50 = fVar3;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

