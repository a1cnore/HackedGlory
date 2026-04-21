// functions/00df9 — 34 functions
#include "libGameKindred.h"




void FUN_00df90ac(undefined8 param_1,undefined8 param_2)

{
  FUN_00df8fd0("Attack",param_2,0);
  return;
}




void FUN_00df90bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00df8fd0("AltAttack",param_2,0);
  return;
}




void FUN_00df90cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00df8fd0("CritAttack",param_2,2);
  return;
}




void FUN_00df90dc(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df9134(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df918c(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df91e4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df92c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00df91e4("Attack",param_2,0);
  return;
}




void FUN_00df92d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00df91e4("AltAttack",param_2,0);
  return;
}




void FUN_00df92e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00df91e4("CritAttack",param_2,2);
  return;
}




void FUN_00df92f0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xb8,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_38 = FUN_00d94b80;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38,0,2);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df93f0(void)

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
  FUN_00cfa2dc(auStack_48);
  FUN_00cf99dc(auStack_48);
  plVar3 = (long *)FUN_00cf9b44(auStack_48);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero057_B_Attachment_Target_02bf16a8);
  plVar3 = (long *)FUN_00cf9b44(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero057_Perk_Barrier_02bf1698);
  local_38 = FUN_00df9548;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00cf9eec(auStack_48);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero057_B_Attached_02bf16a0);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df9548(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00df9554(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,2,4,0x19,0);
  *param_3 = uVar2;
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00df95ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d4db40(param_2,uVar1);
  FUN_00d4daf4(param_2,1,0,0,0);
  FUN_00d4dabc(param_2,1);
  return;
}




void FUN_00df95f8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfaef4(auStack_c8);
  uVar3 = FUN_00d9cff4(uVar3,FUN_00df95ac);
  FUN_00d9cb40(uVar3,PTR_s_Buff_Hero057_B_Attachment_Target_02bf16a8);
  uVar3 = FUN_00cf9d84(auStack_c8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Hero057_B_Attachment_Target_02bf16a8);
  FUN_00cf9eec(auStack_c8);
  FUN_00cf98bc(auStack_c8);
  uVar3 = FUN_00cf9d84(auStack_c8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Hero057_B_Attached_02bf16a0);
  FUN_00cf9eec(auStack_c8);
  plVar4 = (long *)FUN_00cfa12c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  local_98[0] = 0x3e4ccccd;
  local_90 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,local_98);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_c8);
  FUN_00d4d9e8(local_98);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4daf4(local_98,0,1,0,0);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero057_B_StunArea");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3e4ccccd);
  local_a0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_a8);
  local_b8[0] = 0x40800000;
  local_b0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,local_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5460(0x40800000,uVar3,local_98,0,0,1,0);
  uVar3 = FUN_00cfa00c(auStack_c8);
  FUN_00cf6bb0(uVar3,FUN_00df9554);
  plVar4 = (long *)FUN_00cf9b44(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_a8 = FUN_00df9884;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df9884(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00df9898(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cfa294();
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00df98cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar2,FUN_00df99f8);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero057_C_Cloud_02bf16b8);
  local_38 = FUN_00df9a0c;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cfaef4(auStack_48);
  uVar2 = FUN_00d9cff4(uVar2,FUN_00df95ac);
  FUN_00d9cb40(uVar2,PTR_s_Buff_Hero057_B_Attachment_Target_02bf16a8);
  plVar3 = (long *)FUN_00cf9b44(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero057_C_Steroid_02bf16b0);
  local_38 = FUN_00df9a20;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df99f8(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,7,0x19,0);
  return;
}




void FUN_00df9a0c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00df9a20(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00df9a34(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar3 = FUN_00dfa9cc(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(code **)(lVar3 + 8) = FUN_00df9cf4;
  *(undefined4 *)(lVar3 + 0x10) = 3;
  plVar4 = (long *)FUN_00cfaa2c(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x58))(plVar4,*param_1);
  plVar4 = (long *)FUN_00cfaa2c(lVar2 + 200);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_1[1]);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,param_1[5]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,param_1[6]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,param_1[7]);
  lVar2 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar2 + 0x504));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar5 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar5,FUN_00cf76f0);
  FUN_00cf7578(uVar5,FUN_00cfb9b0);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar3 = FUN_00dfa9cc(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(code **)(lVar3 + 8) = FUN_00df9cf4;
  *(undefined4 *)(lVar3 + 0x10) = 3;
  plVar4 = (long *)FUN_00cfab04(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,param_1[2]);
  plVar4 = (long *)FUN_00cfab04(lVar2 + 200);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,param_1[3]);
  plVar4 = (long *)FUN_00cfa0e4(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,param_2);
  (**(code **)(*plVar4 + 0x68))(plVar4,param_1[0xc]);
  FUN_00cf99dc(auStack_68);
  plVar4 = (long *)FUN_00cf9b44(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,param_1[4]);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00cf9eec(auStack_68);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,param_1[8]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,param_1[9]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,param_1[10]);
  lVar2 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar2 + 0x504));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (param_1[0xb] != 0) {
    plVar4 = (long *)FUN_00cf9afc(auStack_68);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,param_1[0xb]);
    local_58 = FUN_00df9d00;
    local_50 = 3;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  }
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df9cf4(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,7,1);
  return;
}




void FUN_00df9d00(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00df9d0c(void)

{
  FUN_00df9a34(&DAT_031b2960,0);
  return;
}




void FUN_00df9d1c(void)

{
  FUN_00df9a34(&DAT_031b2960,2);
  return;
}




void FUN_00df9d2c(void)

{
  FUN_00df9a34(&DAT_031b29d0,0);
  return;
}




void FUN_00df9d3c(void)

{
  FUN_00df9a34(&DAT_031b29d0,2);
  return;
}




void FUN_00df9d4c(void)

{
  FUN_00df9a34(&DAT_031b2a40,0);
  return;
}




void FUN_00df9d5c(void)

{
  FUN_00df9a34(&DAT_031b2a40,2);
  return;
}




void FUN_00df9d6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01_Throw");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Yates_A");
  lVar2 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar2 + 0x508));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xb9,"HookLocator");
  FUN_00cfcba8(uVar3,0);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df9eb8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01_Recoil");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  uVar4 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df9f78(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  plVar2 = (long *)FUN_00cf9afc(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Yates_B_IsCasting_02bf1700);
  local_48 = FUN_00dfa034;
  local_40 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00dfa034);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

