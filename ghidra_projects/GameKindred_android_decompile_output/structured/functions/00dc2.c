// functions/00dc2 — 26 functions
#include "libGameKindred.h"




void FUN_00dc2140(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,7,0x19,0);
  return;
}




void FUN_00dc2154(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,8,0x19,0);
  return;
}




void FUN_00dc2168(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  *param_4 = 6.0;
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,3,6,0x19,0);
  *param_3 = *param_4 / (fVar2 + 0.1);
  return;
}




void FUN_00dc21c0(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00dc21d4(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,param_4,0);
  fVar2 = (float)FUN_00d9dc10(param_2,uVar1);
  fVar3 = (float)FUN_00d59f54(uVar1,3,6,0x19,0);
  *param_3 = fVar2 / fVar3;
  return;
}




undefined8 FUN_00dc224c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(ushort *)(param_2 + 0x88) & 0x1f;
  if ((((uVar4 == 0x1f) || (uVar2 = 0, 1 < *(ushort *)(param_2 + (ulong)uVar4 * 0x38 + 0x90) - 3))
      && (uVar2 = 0, (*(byte *)(param_2 + 0x2f8) >> 3 & 1) == 0)) &&
     (uVar2 = FUN_00d51964(param_1), (int)uVar2 != 0)) {
    uVar4 = 0;
    do {
      lVar3 = FUN_00d51944(param_1,uVar4);
      uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
      if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar1 = FUN_00d51964(param_1);
    } while (uVar4 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}




undefined1  [16] FUN_00dc2314(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_00d50ef8();
  auVar4 = FUN_00d59f54(lVar1,3,3,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Grumpjaw_Talent_BigAppetite_02bedf50);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031abfa8,1,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ + fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00dc2390(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability03_C_Eat",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Grumpjaw_C_Swallow",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09e18(*(undefined4 *)(lVar4 + 0x3b4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Grumpjaw_Ability_C_Toss",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfadd4(auStack_58);
  FUN_00cf5da8(uVar2,PTR_s_Buff_Grumpjaw_C_Grabbed_02bf0780,0,1);
  FUN_00cf5e8c();
  FUN_00cf5e7c();
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Grumpjaw_C_Grabbed_02bf0780);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf44e8(0x3f666666,uVar2,PTR_s_Buff_Grumpjaw_C_BeingTossed_02bf0788,1,0);
  uVar2 = FUN_00cf9c1c(auStack_58);
  FUN_00cf816c(uVar2,FUN_00dc21d4,0,0);
  uVar2 = FUN_00cf9bd4(auStack_58);
  FUN_00cf834c(uVar2,FUN_00dc2168,0,0);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar2,FUN_00dc21c0);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_58);
  uVar2 = FUN_00cfadd4(auStack_58);
  FUN_00cf5da8(uVar2,PTR_s_Buff_Grumpjaw_C_BeingTossed_02bf0788,0,1);
  FUN_00cf5e8c();
  FUN_00cf5e7c();
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00da1124(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  uVar2 = FUN_00cf9ab4(lVar4 + 0xb0);
  FUN_00cf44e8(0xbf800000,uVar2,PTR_s_Buff_Grumpjaw_Eaten_02bf0770,1,0);
  plVar6 = (long *)FUN_00cf9afc(lVar4 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Grumpjaw_Eating_02bf0768);
  local_48 = FUN_00dc2314;
  local_40 = 5;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
  (**(code **)(*plVar6 + 0x60))(plVar6,FUN_00dc224c);
  FUN_00cf9eec(auStack_58);
  FUN_00cf9ea4(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar2,FUN_00dc2154);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc2684(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float __x;
  undefined8 local_a0;
  float local_98;
  undefined1 local_90 [8];
  float local_88;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_6 = 0x41a00000;
  uVar3 = FUN_00d5048c();
  fVar4 = (float)FUN_00d51820(param_4);
  FUN_00d55794(uVar3,local_90,0);
  fVar4 = fVar4 - local_90._0_4_;
  param_2 = param_2 - local_90._4_4_;
  param_3 = param_3 - local_88;
  __x = fVar4 * fVar4 + param_2 * param_2 + param_3 * param_3;
  uVar3 = DAT_03218f68;
  fVar5 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar5 = SQRT(__x);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(__x);
    }
    uVar3 = CONCAT44(param_2 / fVar5,fVar4 / fVar5);
    fVar5 = param_3 / fVar5;
  }
  fVar4 = (float)FUN_00d50cc8(param_4);
  local_a0 = CONCAT44(local_90._4_4_ + (float)((ulong)uVar3 >> 0x20) * fVar4,
                      local_90._0_4_ + (float)uVar3 * fVar4);
  local_98 = fVar5 * fVar4 + local_88;
  uVar2 = thunk_FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,local_90,&local_a0,uVar2);
  FUN_00da32dc(auStack_80,param_7,0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc27e0(void)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  if (PTR_s_Ability__Grumpjaw__C_02beebd8 == (undefined *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar4 = (uint)(byte)*PTR_s_Ability__Grumpjaw__C_02beebd8;
    local_30[0] = 0x811c9dc5;
    pbVar3 = PTR_s_Ability__Grumpjaw__C_02beebd8;
    if (*PTR_s_Ability__Grumpjaw__C_02beebd8 != 0) {
      do {
        uVar5 = (uint)pbVar3[1];
        local_30[0] = (local_30[0] ^ uVar4) * 0x1000193;
        uVar4 = uVar5;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
    }
  }
  thunk_FUN_00d9f258(uVar2,local_30);
  FUN_00d6d8a4();
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc2878(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfa8c4(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Grumpjaw__C_02beebd8);
  local_48 = FUN_00dc27e0;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09e18(*(undefined4 *)(lVar4 + 0x3b4));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Grumpjaw_Ability_C_Spit",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability03_C_SpitOut",0,1,0,"AttackToIdle");
  plVar3 = (long *)FUN_00cfac6c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"spitOut");
  (**(code **)(*plVar3 + 0x18))(0x3f000000);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfadd4(auStack_58);
  FUN_00cf5da8(uVar2,PTR_s_Buff_Grumpjaw_Eaten_02bf0770,0,1);
  FUN_00cf5e8c();
  FUN_00cf5e7c();
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Grumpjaw_Eaten_02bf0770);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf44e8(0x3ecccccd,uVar2,PTR_s_Buff_Stunned_02beb430,1,0);
  uVar2 = FUN_00cf9c1c(auStack_58);
  FUN_00cf816c(uVar2,FUN_00dc2684,0,0);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Grumpjaw_SpitOut",1,0,1,0,0);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Grumpjaw_Eating_02bf0768);
  FUN_00cf9eec(auStack_58);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc2ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00dc2ba0(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc2ac8("Attack",param_2,FUN_00cfb6d0);
  return;
}




void FUN_00dc2bb4(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc2ac8("AltAttack",param_2,FUN_00cfb6d0);
  return;
}




void FUN_00dc2bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc2ac8("CritAttack",param_2,FUN_00cfb8b4);
  return;
}




void FUN_00dc2bdc(void)

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




void FUN_00dc2c34(void)

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




void FUN_00dc2c8c(void)

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




void FUN_00dc2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09f68(*(undefined4 *)(lVar4 + 0x40c));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Churnwalker_basic_attack_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Churnwalker_basic_attack_02");
  FUN_00cf41bc(uVar3,"Sound_Churnwalker_basic_attack_03");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfa00c(auStack_58);
  FUN_00cf6bb0(uVar2,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc2e54(void)

{
  FUN_00dc2ce4("Attack","Effect_Churnwalker_AA",FUN_00cfb6d0);
  return;
}




void FUN_00dc2e70(void)

{
  FUN_00dc2ce4("AltAttack","Effect_Churnwalker_AA",FUN_00cfb6d0);
  return;
}




void FUN_00dc2e8c(void)

{
  FUN_00dc2ce4("CritAttack","Effect_Churnwalker_AA",FUN_00cfb8b4);
  return;
}




void FUN_00dc2ea8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d50cc8(param_1);
  fVar4 = (float)NEON_fminnm(uVar2,0x41200000);
  fVar3 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  *param_3 = fVar4 / fVar3;
  return;
}




void FUN_00dc2f10(undefined8 param_1,float *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  uVar3 = FUN_00da000c(uVar2,auStack_2c);
  *param_2 = (float)uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc2f68(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *in_x3;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  uVar2 = FUN_00da000c(uVar2,auStack_2c);
  *in_x3 = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc2fbc(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d5048c();
  iVar2 = FUN_00da000c(uVar3,auStack_2c);
  if (iVar2 == 1) {
    pcVar4 = "Ability01";
  }
  else {
    pcVar4 = "Ability01_Right";
  }
  thunk_FUN_00d9ff34(&local_30,pcVar4);
  *param_2 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

