// functions/00dc3 — 32 functions
#include "libGameKindred.h"




void FUN_00dc3038(void)

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
  uVar2 = FUN_00cfa444(auStack_48);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Churnwalker_A_Casting_02bf07d8,2);
  FUN_00cfa6cc(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3094(uVar2,FUN_00dc2fbc,0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09f68(*(undefined4 *)(lVar4 + 0x410));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Churnwalker_Ability_A_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Churnwalker_Ability_A_2");
  FUN_00cf41bc(uVar3,"Sound_Churnwalker_Ability_A_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar2,FUN_00dc31f0);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x14,"CenterBody");
  FUN_00cfcbbc(uVar2,FUN_00dc2f10);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  uVar2 = FUN_00cf44e8(0xbf800000,uVar2,PTR_s_Buff_Churnwalker_A_Casting_02bf07d8,1,0);
  FUN_00cf45d4(uVar2,FUN_00dc2f68);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00dc2ea8);
  lVar4 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc31f0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dc3204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d4db40(param_2,uVar1);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  return;
}




void FUN_00dc3250(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = DAT_031b9bd8;
  lVar3 = *(long *)(param_2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar2 = FUN_00d50ef8();
  FUN_00d6bca8(lVar3,uVar1,*(undefined4 *)(lVar2 + 0x260),0);
  return;
}




undefined4 FUN_00dc32b0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Churnwalker_ChainTetherSelf_02bf07a0);
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x400;
  }
  return uVar3;
}




void FUN_00dc32e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar2 = FUN_00cfad44(auStack_78);
  FUN_00cf2ec0(uVar2,FUN_00dc32b0);
  FUN_00cfa6cc(auStack_78);
  plVar3 = (long *)FUN_00cfab04(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Churnwalker_TormentActivation");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f000000);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09f68(*(undefined4 *)(lVar4 + 0x418));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Churnwalker_Ability_B_Warmup_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_B_Warmup_2");
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_B_Warmup_3");
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar2,FUN_00dc3634);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cf9f7c(auStack_78);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar4 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Churnwalker_Talent_TalentB_02bee300;
  FUN_00cf98bc(lVar4);
  uVar2 = FUN_00cf9ab4(lVar4);
  FUN_00cf456c(uVar2,PTR_s_Buff_Churnwalker_B_Cloud_02bf07d0,FUN_00dc3648,1,0);
  FUN_00cf9eec(lVar4);
  uVar2 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09f68(*(undefined4 *)(lVar4 + 0x418));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Churnwalker_Ability_B_Pull_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_B_Pull_2");
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_B_Pull_3");
  uVar2 = FUN_00cfaef4(auStack_78);
  uVar2 = FUN_00d9cff4(uVar2,FUN_00dc3204);
  FUN_00d9cb40(uVar2,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
  uVar2 = FUN_00cfa564(auStack_78);
  FUN_00d9d0e8(uVar2,FUN_00dc3250);
  uVar2 = FUN_00cf9ab4(auStack_78);
  FUN_00cf44e8(0x3dcccccd,uVar2,PTR_s_Buff_Churnwalker_ChainTetherPull_02bf07c0,1,0);
  FUN_00cfa09c(auStack_78);
  plVar3 = (long *)FUN_00cfa684(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  local_48 = FUN_00dc3660;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
  local_58 = FUN_00dc3674;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  local_68[0] = 0x40666666;
  local_60 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,local_68);
  FUN_00cf9eec(auStack_78);
  lVar4 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc3634(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00dc3648(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac900,0,9);
  return;
}




void FUN_00dc3660(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dc3674(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dc3688(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  *param_4 = 0;
  fVar2 = (float)FUN_00d59f54(uVar1,2,5,0x19,0);
  *param_3 = 0.0 / fVar2;
  return;
}




void FUN_00dc36d0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00dc36e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  uVar2 = FUN_00cfad44(auStack_b8);
  FUN_00cf2ec0(uVar2,FUN_00dc32b0);
  FUN_00cfa6cc(auStack_b8);
  FUN_00cfb05c(auStack_b8);
  uVar2 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_b8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09f68(*(undefined4 *)(lVar3 + 0x41c));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Churnwalker_Ability_C_Startup_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_C_Startup_2");
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_C_Startup_3");
  plVar4 = (long *)FUN_00cfab04(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Churnwalker_TrespassActivation");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar2,FUN_00dc3a28);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar2 = FUN_00cfaef4(auStack_b8);
  uVar2 = FUN_00d9cff4(uVar2,FUN_00dc3204);
  FUN_00d9cb40(uVar2,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
  FUN_00cfa09c(auStack_b8);
  uVar2 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf456c(uVar2,PTR_s_Buff_Stunned_02beb430,FUN_00dc3a3c,1,0);
  uVar2 = FUN_00cf9d84(auStack_b8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfab94(auStack_b8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09f68(*(undefined4 *)(lVar3 + 0x41c));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Churnwalker_Ability_C_Dash_1",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfa12c(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  local_a8 = FUN_00dc36d0;
  local_a0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_a8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_b8);
  uVar2 = FUN_00cfab94(auStack_b8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09f68(*(undefined4 *)(lVar3 + 0x41c));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Churnwalker_Ability_C_End_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_C_End_1");
  FUN_00cf41bc(uVar2,"Sound_Churnwalker_Ability_C_End_1");
  FUN_00cfb0a4(auStack_b8);
  lVar3 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc3a28(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dc3a3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00dc3a50(void)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  FUN_00cfb05c(auStack_38);
  FUN_00cf98bc(auStack_38);
  FUN_00cfb0a4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc3acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc3ba4(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc3acc("Attack",param_2,FUN_00cfb6d0);
  return;
}




void FUN_00dc3bb8(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc3acc("AltAttack",param_2,FUN_00cfb6d0);
  return;
}




void FUN_00dc3bcc(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc3acc("CritAttack",param_2,FUN_00cfb8b4);
  return;
}




undefined8 FUN_00dc3be0(void)

{
  return 0;
}




undefined8 FUN_00dc3be8(void)

{
  return 0;
}




undefined8 FUN_00dc3bf0(void)

{
  return 0;
}




undefined8 FUN_00dc3bf8(void)

{
  return 0;
}




undefined8 FUN_00dc3c00(void)

{
  return 0;
}




float FUN_00dc3c08(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,0,3,0x19,0);
  return fVar1 + 0.1;
}




void FUN_00dc3c38(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  uVar4 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar4,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar4 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar4,param_2,0,0,1,0,0);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar4,FUN_00cf76f0);
  FUN_00cf7578(uVar4,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_68);
  ppuVar1 = &PTR_s_Sound_Tony_Crit_Attack_02beecb0;
  if (param_3 != 2) {
    ppuVar1 = &PTR_s_Sound_Tony_Attack_01_02beec98;
  }
  puVar7 = *ppuVar1;
  ppuVar2 = &PTR_s_Sound_Tony_Crit_Impact_02beecc8;
  if (param_3 != 2) {
    ppuVar2 = &PTR_s_Sound_Tony_Attack_Impact_01_02beece0;
  }
  lVar5 = FUN_00d09310();
  uVar8 = FUN_00d0a064(*(undefined4 *)(lVar5 + 0x470));
  FUN_00cf4164(0x3f800000,uVar8,uVar4,puVar7,0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,ppuVar1[1]);
  FUN_00cf41bc(uVar4,ppuVar1[2]);
  plVar6 = (long *)FUN_00cfa0e4(auStack_68);
  (**(code **)(*plVar6 + 0x58))(plVar6,param_3);
  uVar4 = FUN_00cfab94(auStack_68);
  puVar7 = *ppuVar2;
  lVar5 = FUN_00d09310();
  uVar8 = FUN_00d0a064(*(undefined4 *)(lVar5 + 0x470));
  FUN_00cf4164(0x3f800000,uVar8,uVar4,puVar7,0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,ppuVar2[1]);
  FUN_00cf41bc(uVar4,ppuVar2[2]);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc3e34(void)

{
  FUN_00dc3c38("Attack","Effect_Tony_AA",0);
  return;
}




void FUN_00dc3e4c(void)

{
  FUN_00dc3c38("AltAttack","Effect_Tony_AA_Alt",0);
  return;
}




void FUN_00dc3e64(void)

{
  FUN_00dc3c38("CritAttack","Effect_Tony_AA_Alt",2);
  return;
}




void FUN_00dc3e7c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0a064(*(undefined4 *)(lVar3 + 0x474));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Tony_Ability_A_Activate",0,0,0xffffffff,0,1);
  uVar4 = FUN_00cfa444(auStack_48);
  FUN_00cf2fa4(uVar4,PTR_s_Buff_Tony_A_ChargedAttack1_02bf0870,0x400);
  uVar4 = FUN_00cfa444(auStack_48);
  FUN_00cf2fa4(uVar4,PTR_s_Buff_Tony_A_ChargedAttack2_02bf0878,0x400);
  uVar4 = FUN_00cfa444(auStack_48);
  FUN_00cf2fa4(uVar4,PTR_s_Buff_Tony_A_ChargedAttack3_02bf0880,0x400);
  plVar5 = (long *)FUN_00cf9afc(auStack_48);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Tony_A_ChargedAttack1_02bf0870);
  local_38 = FUN_00dc3ff0;
  local_30 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_38);
  plVar5 = (long *)FUN_00cf9afc(auStack_48);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Tony_A_SpeedBoostAndDamage_02bf0888);
  local_38 = FUN_00dc4004;
  local_30 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_38);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc3ff0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}

