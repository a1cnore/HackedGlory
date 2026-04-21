// functions/00d28 — 23 functions
#include "libGameKindred.h"




void FUN_00d2806c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d66d28(param_1);
    FUN_00d55794(uVar3,auStack_38,0);
    FUN_00cb6ef8(uVar3,auStack_38,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d280e0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  uVar4 = FUN_00e6a474("fearPositionX");
  uVar4 = FUN_0091ed5c("fearPositionX",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("fearPositionZ");
  uVar4 = FUN_0091ed5c("fearPositionZ",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  FUN_00d67b04(0x3e4ccccd,param_1);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d27db4;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d63f30(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar6 + 0x38))();
  FUN_00d2a1b0(lVar5);
  FUN_00d29b94(lVar5);
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2a200();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d3e5d0(uVar7,FUN_00d27c70);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d2a200();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d3e5d0(uVar7,FUN_00d27c70);
  FUN_00d3e534();
  uVar7 = FUN_00d29a68();
  FUN_00d42654(auStack_60,uVar7);
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,"Bone_Head");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Feared");
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  uVar7 = FUN_00d29c84(lVar5);
  FUN_00d46b64(uVar7,0x1e);
  plVar6 = (long *)FUN_00d29c34(lVar5);
  (**(code **)(*plVar6 + 0x30))(plVar6,7);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x18);
  FUN_00d3e534();
  uVar7 = FUN_00d2a200();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d3e5d0(uVar7,FUN_00d2806c);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28398(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [8];
  float local_70;
  undefined8 local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69224(param_1,&local_68);
    uVar4 = FUN_00d66d28(local_68);
    FUN_00d55794(uVar4,local_78,0);
    fVar5 = (float)FUN_00d6a1f8(local_68);
    fVar6 = (float)FUN_00d6a25c(local_68);
    local_80 = fVar6 + fVar6 + local_70;
    local_88 = CONCAT44(local_78._4_4_ + 0.0,fVar5 + fVar5 + local_78._0_4_);
    uVar2 = FUN_00da2eb4(uVar4);
    FUN_00da32b0(auStack_60,local_78,&local_88,uVar2);
    FUN_00da32dc(auStack_60,auStack_98,0);
    uVar4 = FUN_00d66d28(local_68);
    FUN_00cb6ef8(uVar4,auStack_98,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2848c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d67b04(0x3e4ccccd);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d28398;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d63f30(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar6 + 0x38))();
  FUN_00d2a1b0(lVar5);
  FUN_00d29b94(lVar5);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar7);
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,"Bone_Head");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Feared");
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  uVar7 = FUN_00d29c84(lVar5);
  FUN_00d46b64(uVar7,0x1e);
  plVar6 = (long *)FUN_00d29c34(lVar5);
  (**(code **)(*plVar6 + 0x30))(plVar6,7);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x18);
  FUN_00d3e534();
  uVar7 = FUN_00d2a200();
  FUN_00d42654(auStack_50,uVar7);
  FUN_00d3e5d0(uVar7,FUN_00d2806c);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28648(undefined8 param_1)

{
  FUN_00d4403c(param_1,1);
  return;
}




void FUN_00d28650(void)

{
  return;
}




void FUN_00d28654(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a2d0(lVar1 + 0x10);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
  (**(code **)*puVar3)();
  lVar1 = FUN_00d65d0c(param_1);
  FUN_00d2a320(lVar1 + 0x10);
  uVar4 = FUN_00d634b4(param_1);
  lVar1 = FUN_00d4aa60(uVar4,PTR_s_Ability__Emote_Dance_02bee7f8);
  FUN_00d2a320(lVar1 + 0x10);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00d286d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2a2d0(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)(*plVar3 + 8))();
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar4 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Emote_Taunt_VO_Cooldown_02beb478;
  plVar3 = (long *)FUN_00d2882c(lVar2 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,"taunt");
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Emote_Taunt_VO_Cooldown_02beb478)
  ;
  local_48[0] = 0x41700000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  lVar2 = FUN_00d64080(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  lVar2 = FUN_00d66d28(param_1);
  (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined4 *)(lVar2 + 0x260));
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65d0c(param_1);
  FUN_00d2a320(lVar2 + 0x10);
  uVar5 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa60(uVar5,PTR_s_Ability__Emote_Taunt_02bee800);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2882c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a3710();
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




void FUN_00d2887c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d598();
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




void FUN_00d288cc(void)

{
  return;
}




void FUN_00d288d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d42ce8(param_1,0x51f,"Effect_Stunned_buff","OverHead");
  lVar2 = FUN_00d65010(param_1);
  uVar3 = FUN_00d29c84(lVar2 + 0x10);
  FUN_00d46b64(uVar3,0x200);
  plVar4 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Shell");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58[0] = 0x3f99999a;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0x3f800000,0x3f000000);
  (**(code **)(*plVar4 + 0xd8))(0x3f800000);
  lVar2 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2779c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Idle");
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00d2a414(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,0xb);
  lVar2 = FUN_00d65010(param_1);
  uVar3 = FUN_00d29a18(lVar2 + 0x10);
  FUN_00d46cdc(uVar3,0x11);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2779c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Idle");
  (**(code **)(*plVar4 + 0x20))();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28a74(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_00d67c60();
  uVar1 = FUN_00e6a474("__REAPPLYING_VAR1_FLOAT__");
  uVar1 = FUN_0091ed5c("__REAPPLYING_VAR1_FLOAT__",uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x10))(lVar2 + 0x100,uVar1);
  *param_2 = *puVar3;
  return;
}




void FUN_00d28ae4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2a464(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_30 = 4;
  local_38 = FUN_00d98994;
  (**(code **)(*plVar3 + 0x10))(plVar3,6,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28b64(void)

{
  return;
}




void FUN_00d28b68(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taunt");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0x3f000000);
  (**(code **)(*plVar3 + 0xd8))(0x3f800000);
  uVar4 = FUN_00d29c84(lVar2);
  FUN_00d46b64(uVar4,0x601a);
  plVar3 = (long *)FUN_00d29c34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,5);
  lVar2 = FUN_00d64080(param_1);
  plVar3 = (long *)FUN_00d2a4b4(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28cac(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_0315ca50 <= fVar2) {
    fVar2 = DAT_0315ca50;
  }
  fVar3 = DAT_0315c990;
  if (DAT_0315c990 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = (float)FUN_00d6a1f8();
  *param_3 = fVar2 * fVar3;
  return;
}




void FUN_00d28d28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67d04(0x3f800000);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a5e0();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d402f8(uVar2,FUN_00d28cac);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2a79c();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d41de0(uVar2,1);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a5e0();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d402f8(uVar2,FUN_00d28cac);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28e68(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a86c(lVar2 + 0x10);
  uVar1 = FUN_00d6a078(param_1);
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  return;
}




void FUN_00d28ebc(undefined8 param_1)

{
  long lVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = FUN_00d6a1f8();
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28f1c(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00d44db8;
  local_30 = 4;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28f80(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00d44db8;
  local_30 = 4;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d28fe4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67d04(0x3e4ccccd);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_40,uVar2);
  uVar2 = FUN_00d47c3c(uVar2,"CenterBody");
  FUN_00da2040(uVar2,"Effect_Cleanse");
  uVar2 = FUN_00da2058(0x3f800000);
  FUN_00da2070(uVar2,1);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a994();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d46fc8(uVar2,2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

