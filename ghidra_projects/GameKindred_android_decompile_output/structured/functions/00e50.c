// functions/00e50 — 26 functions
#include "libGameKindred.h"




void FUN_00e50074(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64980();
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1648);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_DelayedKill_02beb3e0);
  local_38[0] = 0x3e4ccccd;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5011c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d65010();
  plVar4 = (long *)FUN_00e31058(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x40))();
  uVar5 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar5,1);
  lVar3 = lVar3 + 0x10;
  uVar5 = FUN_00e406e4(lVar3);
  uVar5 = FUN_00d9d4d4(uVar5,0,1,0);
  FUN_00d9d4f0(uVar5,FUN_00e4ffcc);
  uVar5 = FUN_00d9d33c(0x3f400000);
  FUN_00d9d344(uVar5,0x40001);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1660);
  local_58[0] = 0x3e99999a;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  FUN_00d66d28(param_1);
  uVar2 = FUN_00d5cf60();
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar2);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1668);
  local_58[0] = 0x3e99999a;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  FUN_00d66d28(param_1);
  uVar2 = FUN_00d5cf60();
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e502a4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  lVar3 = FUN_00d64080(param_1);
  uVar4 = FUN_00d2d01c(lVar3 + 0x10);
  uVar4 = FUN_00d9b610(uVar4,PTR_s_Buff_Silvernail_C_BeingKnockedBa_02bf1670);
  FUN_00d9b5b0();
  FUN_00d39534();
  FUN_00d9b5b0(uVar4);
  plVar5 = (long *)FUN_00d2cf7c();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e50440;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  FUN_00d9b5b0(uVar4);
  plVar5 = (long *)FUN_00d2b818();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"BONUS_DAMAGE",4);
  FUN_00d9b5b0(uVar4);
  plVar5 = (long *)FUN_00d2a160();
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Silvernail_C_BeingKnockedBa_02bf1670);
  uVar4 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d59f54(uVar2,2,8,0x19,0);
  lVar3 = FUN_00d4891c(1.0 / fVar6,uVar4,1);
  FUN_00d39534(lVar3 + 0x10);
  plVar5 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"TRIPWIRE_DAMAGE_PER_SEC",2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e50440(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,4,0x19,0);
  return;
}




void FUN_00e50454(undefined8 param_1)

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
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d44df8(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_00d44df8(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x58))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d29c34(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,8);
  (**(code **)(*plVar3 + 0x38))();
  uVar4 = FUN_00d29c84(lVar2);
  FUN_00d46b64(uVar4,0x18);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silence");
  (**(code **)(*plVar3 + 0x90))();
  uVar4 = FUN_00d29f44(lVar2);
  local_48 = FUN_00e505ac;
  local_40 = 3;
  FUN_00d47690(uVar4,2,&local_48);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Slowed_buff");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e505ac(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,9,0x19,0);
  return;
}




void FUN_00e505c0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00d66d28();
  if ((*(byte *)(lVar2 + 0x2f6) >> 4 & 1) == 0) {
    FUN_00d67b84(param_1);
    FUN_00d9e390();
    lVar2 = FUN_00d65010(param_1);
    plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silvernail_B_DamageOverTime");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
    (**(code **)(*plVar3 + 0xb0))(plVar3,1);
    plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
    FUN_00d44d70(param_1);
    uVar1 = FUN_00ceab2c();
    (**(code **)(*plVar3 + 0x30))(plVar3,uVar1,7);
    uVar4 = FUN_00d64d7c(param_1);
    lVar2 = FUN_00d4891c(0x3f000000,uVar4,1);
    FUN_00d39534(lVar2 + 0x10);
    plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
    (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE_PER_SECOND",3);
    lVar2 = FUN_00d65e5c(param_1);
    FUN_00d29f94(lVar2 + 0x10);
  }
  else {
    lVar2 = FUN_00d63f30(param_1);
    plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
    (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Silvernail_B_DamageOverTime_02bf1678);
  }
  return;
}




void FUN_00e50710(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e50774;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e50774(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00e50788(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  lVar4 = FUN_00d66d28(param_1);
  pcVar1 = "Effect_Silvernail_C_Impact";
  if ((*(uint *)(lVar4 + 0x2f4) & 0x110) != 0) {
    pcVar1 = "Effect_Silvernail_C_Impact_Small";
  }
  (**(code **)(*plVar3 + 0x48))(plVar3,pcVar1);
  plVar3 = (long *)FUN_00e4a500(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Silvernail_C_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar4 + 0x4fc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00e50880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",4);
  return;
}




void FUN_00e50884(void)

{
  return;
}




void FUN_00e50888(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64980();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"BONUS_DAMAGE",4);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00e50440;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  FUN_00d66d28(param_1);
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silvernail_C_Impact_Stun");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e50994(undefined8 *param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,0,3);
  fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  fVar2 = fVar2 + fVar4 * fVar3;
  *param_2 = fVar2;
  *param_3 = fVar2;
  return;
}




void FUN_00e50a08(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d657dc();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e50a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e50994);
  return;
}




void FUN_00e50a38(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined1 auStack_98 [112];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  FUN_00d4e934(auStack_98,DAT_031bc1e4);
  FUN_00d4e980(auStack_98,*(undefined4 *)(lVar2 + 0x260));
  FUN_00d4daf4(auStack_98,1,0,0,lVar2);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4dc24(auStack_98,0);
  FUN_00d4d364(auStack_98,1);
  local_a0 = 0;
  FUN_00d9e840(auStack_98,&local_a0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a0);
}




void FUN_00e50af8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00e50a38(*param_1);
  if (lVar1 != 0) {
    return;
  }
  FUN_00d436dc(*param_1);
  return;
}




void FUN_00e50b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e50a38(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_00e50b58(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d39a54(lVar1);
  FUN_00d3e604(uVar2,FUN_00e50af8);
  plVar3 = (long *)FUN_00d2a160(lVar1);
  (**(code **)(*plVar3 + 0x48))();
  plVar3 = (long *)FUN_00d2a160(lVar1);
  (**(code **)(*plVar3 + 0x50))();
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_00d2b688(lVar1);
  FUN_00d29fe4(lVar1);
  plVar3 = (long *)FUN_00e2153c(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e50b30);
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x1500);
  plVar3 = (long *)FUN_00d2887c(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Invulnerable_02beb400);
  uVar2 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar2,PTR_s_Ability__Hero057__B_02befb88,PTR_s_Ability__Hero057__B_LeapOff_02befb90);
  return;
}




void FUN_00e50c40(void)

{
  return;
}




void FUN_00e50c44(undefined8 param_1)

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
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e50d00;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00e50d14;
  local_40 = 3;
  FUN_00d47690(uVar4,1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e50d00(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,4,0x19,0);
  return;
}




void FUN_00e50d14(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00e50d28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero057_C_Cloud");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0x3f800000);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40800000);
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,&local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd8))(0x3f4ccccd);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar5 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d59f54(uVar2,3,9,0x19,0);
  lVar3 = FUN_00d4891c(1.0 / fVar6,uVar5,0);
  plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
  local_58 = FUN_00e50ee0;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x20))(0x3f800000);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))();
  local_58 = FUN_00e50ef4;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,1,2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e50ee0(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,8,0x19,0);
  return;
}




void FUN_00e50ef4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,2,0x19,0);
  return;
}




void FUN_00e50f08(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2b728(lVar3);
  local_48 = FUN_00e51034;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d2887c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Yates_DefaultAttack_B_Speed_02bf16c8);
  local_48 = FUN_00e51040;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d2a320(lVar3);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_Mace");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Yates_AA_Aura");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

