// functions/00e08 — 8 functions
#include "libGameKindred.h"




void FUN_00e0823c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  plVar3 = (long *)FUN_00cfab04(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,param_3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_58);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac24(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Karas_Basic_Attack_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Karas_Basic_Attack_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Karas_Basic_Attack_3");
  lVar4 = FUN_00d09310();
  FUN_00d0a64c(*(undefined4 *)(lVar4 + 0x6e0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar2,param_2,param_4);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e083e4(void)

{
  FUN_00e0823c("Attack",0xde,"Effect_Karas_DefaultAttacks_Static","BladeShot");
  return;
}




void FUN_00e08404(void)

{
  FUN_00e0823c("AltAttack",0xdf,"Effect_Karas_AltAttacks_Static","AltAttack_RightShot");
  return;
}




void FUN_00e08424(void)

{
  FUN_00e0823c("CritAttack",0xe0,"Effect_Karas_AltAttacks_Static","BladeShot");
  return;
}




void FUN_00e08444(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  (**(code **)(*plVar4 + 0x10))(0x3f99999a);
  plVar4 = (long *)FUN_00cfab04(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Karas_Ability_A_Static");
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_38);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfac6c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))();
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Karas_Ability_A_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a64c(*(undefined4 *)(lVar2 + 0x6f0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Karas_Talent_TalentB_02bf2450;
  uVar3 = FUN_00cfb17c(lVar2 + 200);
  uVar3 = FUN_00cfcad8(uVar3,0xe2,"Ability01_BladeShot");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,0xe2,"TalentB_LeftShot");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,0xe2,"TalentB_RightShot");
  FUN_00cfcba8(uVar3,1);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0867c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cf9ea4(auStack_68);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 200;
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10;
  uVar4 = FUN_00cfb05c(lVar2);
  FUN_00cf7b3c(uVar4,1);
  plVar5 = (long *)FUN_00cfaa2c(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability02");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  (**(code **)(*plVar5 + 0x10))(0x40000000);
  plVar5 = (long *)FUN_00cfab04(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Karas_B_Land_Static");
  local_58._0_4_ = 0x3f000000;
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)FUN_00cfac24(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Karas_Ability_B_Cast");
  lVar3 = FUN_00d09310();
  FUN_00d0a64c(*(undefined4 *)(lVar3 + 0x6f8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar4 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar4,0);
  plVar5 = (long *)FUN_00cfac6c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability2");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar5 + 0x20))();
  plVar5 = (long *)FUN_00cf9afc(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3ecccccd);
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x48))(plVar5,0xe5);
  plVar5 = (long *)FUN_00cfa12c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_58 = FUN_00e0893c;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_68);
  FUN_00cf9ea4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0893c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e08950(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auStack_98 [16];
  undefined4 local_88 [2];
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar10 = 0x811c9dc5;
  FUN_00cfb5b4(auStack_98);
  uVar2 = FUN_00cfb05c(auStack_98);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  plVar3 = (long *)FUN_00cfac6c(auStack_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  lVar4 = FUN_00cf9f7c(auStack_98);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 200;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Karas_Talent_TalentC_02bf2460;
  plVar3 = (long *)FUN_00cf9afc(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10);
  local_88[0] = 0x3fe66666;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_88);
  lVar4 = lVar4 + 0xb0;
  plVar3 = (long *)FUN_00cf9afc(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10);
  local_88[0] = 0x3fe66666;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfab04(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Karas_Ability_C_Static");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_88[0] = 0x3fd9999a;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfab04(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Karas_Ability_C_Static");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_88[0] = 0x3fd9999a;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfac24(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Karas_Ability_C_Cast");
  lVar5 = FUN_00d09310();
  FUN_00d0a64c(*(undefined4 *)(lVar5 + 0x700));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfac24(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Karas_Ability_C_Cast");
  lVar5 = FUN_00d09310();
  FUN_00d0a64c(*(undefined4 *)(lVar5 + 0x700));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  lVar6 = FUN_00cf9f7c(auStack_98);
  lVar4 = FUN_00db5fb8(lVar6 + 0x10);
  if (PTR_s_Ability__Karas__C_02bf00c0 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    if (*PTR_s_Ability__Karas__C_02bf00c0 != 0) {
      uVar7 = 0x811c9dc5;
      uVar8 = (uint)(byte)*PTR_s_Ability__Karas__C_02bf00c0;
      pbVar9 = PTR_s_Ability__Karas__C_02bf00c0;
      do {
        pbVar9 = pbVar9 + 1;
        uVar7 = (uVar7 ^ uVar8) * 0x1000193;
        uVar8 = (uint)*pbVar9;
      } while (*pbVar9 != 0);
    }
  }
  *(uint *)(lVar4 + 8) = uVar7;
  *(undefined4 *)(lVar4 + 0xc) = 2;
  lVar4 = FUN_00cf9f7c(lVar6 + 0xb0);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Karas_Talent_TalentC_02bf2460;
  plVar3 = (long *)FUN_00cf9afc(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_88);
  lVar4 = lVar4 + 200;
  plVar3 = (long *)FUN_00cf9afc(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfab04(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Karas_Ability_C_Static");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfab04(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Karas_Ability_C_Static");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  lVar6 = FUN_00cf9f7c(auStack_98);
  lVar4 = FUN_00db5fb8(lVar6 + 0x10);
  if (PTR_s_Ability__Karas__C_02bf00c0 == (undefined *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar7 = (uint)(byte)*PTR_s_Ability__Karas__C_02bf00c0;
    pbVar9 = PTR_s_Ability__Karas__C_02bf00c0;
    if (*PTR_s_Ability__Karas__C_02bf00c0 != 0) {
      do {
        uVar8 = (uint)pbVar9[1];
        uVar10 = (uVar10 ^ uVar7) * 0x1000193;
        uVar7 = uVar8;
        pbVar9 = pbVar9 + 1;
      } while (uVar8 != 0);
    }
  }
  *(uint *)(lVar4 + 8) = uVar10;
  *(undefined4 *)(lVar4 + 0xc) = 3;
  lVar4 = FUN_00cf9f7c(lVar6 + 0xb0);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Karas_Talent_TalentC_02bf2460;
  plVar3 = (long *)FUN_00cf9afc(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_88);
  lVar4 = lVar4 + 200;
  plVar3 = (long *)FUN_00cf9afc(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_LockFlurryBlade_02bf1c10);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfab04(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Karas_Ability_C_Static");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
  plVar3 = (long *)FUN_00cfab04(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Karas_Ability_C_Static");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe3,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar6);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar6);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(lVar4);
  uVar2 = FUN_00cfcad8(uVar2,0xe4,"Ability03_FanShot");
  FUN_00cfcba8(uVar2,2);
  plVar3 = (long *)FUN_00cf9dcc(auStack_98);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Karas_WindBlur_02bf1c08);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

