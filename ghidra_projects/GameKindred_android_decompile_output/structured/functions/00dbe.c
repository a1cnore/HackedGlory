// functions/00dbe — 21 functions
#include "libGameKindred.h"




void FUN_00dbe010(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,0xd,0x19,0);
  return;
}




void FUN_00dbe024(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Death",1,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_38);
  uVar2 = FUN_00d094e8(0);
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Glaive_Death",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbe130(void)

{
  FUN_00cfc038(PTR_s_Buff_Glaive_Withdraw_02bf06c0);
  return;
}




void FUN_00dbe140(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x15;
  return;
}




void FUN_00dbe14c(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = thunk_FUN_00d086f0(uVar1,2,1);
  *param_2 = uVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00dbe17c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b4) + 1.0) *
          (*(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0))
  ;
  if (DAT_031b0804 <= fVar3) {
    fVar3 = DAT_031b0804;
  }
  fVar4 = _DAT_031b0744;
  if (_DAT_031b0744 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320e684,0,9);
  fVar4 = (fVar3 + -1.0) * fVar4;
  lVar2 = FUN_00d517cc(param_1);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x260) != *(int *)(param_2 + 0x260))) &&
     (*(char *)(param_2 + 0x2f6) < '\0')) {
    fVar3 = (float)thunk_FUN_00d086f0(lVar1,1,1);
    fVar4 = fVar4 * fVar3;
  }
  return fVar4;
}




void FUN_00dbe268(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 local_50 [4];
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d50ef8();
  lVar4 = *(long *)(lVar3 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x1b0) + 1.0) *
          (*(float *)(lVar4 + 0x48) + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0));
  if (DAT_031b0800 <= fVar5) {
    fVar5 = DAT_031b0800;
  }
  local_4c = DAT_031b0740;
  if (DAT_031b0740 <= fVar5) {
    local_4c = fVar5;
  }
  fVar5 = (*(float *)(lVar4 + 0x218) + 1.0) *
          (*(float *)(lVar4 + 0xb0) + *(float *)(lVar4 + 0x164) * (*(float *)(lVar4 + 0x2cc) + 1.0))
  ;
  if (DAT_031b0868 <= fVar5) {
    fVar5 = DAT_031b0868;
  }
  fVar6 = DAT_031b07a8;
  if (DAT_031b07a8 <= fVar5) {
    fVar6 = fVar5;
  }
  local_50[0] = 0;
  iVar2 = rand();
  if ((float)iVar2 * 4.656613e-10 + 0.0 <= fVar6) {
    local_50[0] = 1;
  }
  FUN_00cfb800(lVar3,&local_4c,local_50,0);
  fVar5 = (float)thunk_FUN_00d086f0(lVar3,0,0xb);
  local_4c = fVar5 + local_4c;
  lVar4 = FUN_00d517cc(param_1);
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x260))) &&
     (*(char *)(param_2 + 0x2f6) < '\0')) {
    fVar5 = (float)thunk_FUN_00d086f0(lVar3,1,1);
    local_4c = fVar5 * local_4c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_4c);
}




void FUN_00dbe400(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 local_50 [4];
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d50ef8();
  lVar4 = *(long *)(lVar3 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x1b0) + 1.0) *
          (*(float *)(lVar4 + 0x48) + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0));
  if (DAT_031b0800 <= fVar5) {
    fVar5 = DAT_031b0800;
  }
  local_4c = DAT_031b0740;
  if (DAT_031b0740 <= fVar5) {
    local_4c = fVar5;
  }
  fVar5 = (*(float *)(lVar4 + 0x218) + 1.0) *
          (*(float *)(lVar4 + 0xb0) + *(float *)(lVar4 + 0x164) * (*(float *)(lVar4 + 0x2cc) + 1.0))
  ;
  if (DAT_031b0868 <= fVar5) {
    fVar5 = DAT_031b0868;
  }
  fVar6 = DAT_031b07a8;
  if (DAT_031b07a8 <= fVar5) {
    fVar6 = fVar5;
  }
  local_50[0] = 0;
  iVar2 = rand();
  if ((float)iVar2 * 4.656613e-10 + 0.0 <= fVar6) {
    local_50[0] = 1;
  }
  FUN_00cfb800(lVar3,&local_4c,local_50,0);
  fVar5 = (float)thunk_FUN_00d086f0(lVar3,0,0xb);
  local_4c = fVar5 + local_4c;
  fVar5 = (float)FUN_00d59f54(lVar3,0,3,4,0);
  local_4c = fVar5 + local_4c;
  lVar4 = FUN_00d517cc(param_1);
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x260))) &&
     (*(char *)(param_2 + 0x2f6) < '\0')) {
    fVar5 = (float)thunk_FUN_00d086f0(lVar3,1,1);
    local_4c = fVar5 * local_4c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_4c);
}




undefined1  [16] FUN_00dbe5bc(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  lVar1 = FUN_00d50ef8();
  auVar5 = FUN_00d59f54(lVar1,0,3,0x19,0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Grace_Talent_SealOfRetribut_02bf1ef8);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_0320e684,0,9);
    uVar6 = (ulong)(uint)(auVar5._0_4_ * fVar4);
    uVar7 = 0;
  }
  lVar3 = FUN_00d517cc(param_1);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x260) != *(int *)(param_2 + 0x260))) &&
     (*(char *)(param_2 + 0x2f6) < '\0')) {
    fVar4 = (float)thunk_FUN_00d086f0(lVar1,1,1);
    uVar6 = (ulong)(uint)((float)uVar6 * fVar4);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_00dbe680(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_1);
    fVar5 = (float)thunk_FUN_00d086f0(lVar3,5,1);
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar6 = (*(float *)(lVar4 + 0x1dc) + 1.0) *
            (*(float *)(lVar4 + 0x74) +
            *(float *)(lVar4 + 0x128) * (*(float *)(lVar4 + 0x290) + 1.0));
    if (DAT_031b082c <= fVar6) {
      fVar6 = DAT_031b082c;
    }
    fVar7 = DAT_031b076c;
    if (DAT_031b076c <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar7 <= 0.1) {
      fVar7 = 0.1;
    }
    FUN_00d04e08(fVar5 / fVar7,auStack_58,*(undefined4 *)(lVar3 + 0x260),0xd60c580b,1);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00dbe76c(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)thunk_FUN_00d086f0(param_1,4,1);
  return -fVar1;
}




void FUN_00dbe78c(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_88 [2];
  float local_80;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  local_88[0] = 8.0093623e+31;
  FUN_00d58298(uVar2,local_88,auStack_78);
  *param_2 = local_48;
  *(undefined4 *)(param_2 + 1) = local_40;
  FUN_00d557c4(uVar2,local_88,&DAT_03218f68);
  fVar3 = atan2f(local_80,local_88[0]);
  *param_3 = fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbe830(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *local_b8;
  undefined4 local_b0;
  undefined1 auStack_a8 [64];
  undefined4 local_68;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FUN_00cfaabc();
  pcVar1 = "Effect_Grace_A_Retribution";
  if ((param_2 & 1) == 0) {
    pcVar1 = "Effect_Grace_AA_Impact";
  }
  (**(code **)(*plVar4 + 0x50))(plVar4,pcVar1,FUN_00dbe78c);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dba0(0x42340000,auStack_a8);
  FUN_00d4dcdc(auStack_a8,1);
  local_68 = 0x3f266666;
  uVar5 = FUN_00cfaf84(param_1);
  FUN_00cf5460(0x40b00000,uVar5,auStack_a8,0,0,1,0);
  puVar3 = PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8;
  uVar5 = FUN_00cf9ab4(param_1);
  uVar5 = FUN_00cf456c(uVar5,puVar3,FUN_00dbeb64,1,0);
  FUN_00cf45d4(uVar5,FUN_00dbe14c);
  plVar4 = (long *)FUN_00cfa09c(param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  if ((param_2 & 1) == 0) {
    local_b8 = FUN_00dbe268;
    local_b0 = 5;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_b8,0,5);
    FUN_00da06d4(param_1,PTR_s_Buff_Grace_Talent_SealOfRetribut_02bf1ef8);
    FUN_00d9b0f8();
    plVar4 = (long *)FUN_00cfa09c();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
    local_b8 = FUN_00dbe17c;
    local_b0 = 5;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_b8,1,9);
    uVar5 = FUN_00cf9cf4(param_1);
    FUN_00cf2e48(uVar5,FUN_00dbe680);
  }
  else {
    local_b8 = FUN_00dbe5bc;
    local_b0 = 5;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_b8,1,0xb);
    plVar4 = (long *)FUN_00cfa09c(param_1);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
    local_b8 = FUN_00dbe400;
    local_b0 = 5;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_b8,0,7);
  }
  lVar6 = FUN_00cf9f7c(param_1);
  lVar7 = FUN_00da1124(lVar6 + 0x10);
  lVar6 = lVar6 + 0xb0;
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 8) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 1;
  if ((param_2 & 1) == 0) {
    plVar4 = (long *)FUN_00cfa8c4(lVar6);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Grace__A_02beeb30);
    local_b8 = FUN_00dbe76c;
    local_b0 = 3;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  }
  plVar4 = (long *)FUN_00cfa8c4(lVar6);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Grace__B_02beeb38);
  local_b8 = FUN_00dbe76c;
  local_b0 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  plVar4 = (long *)FUN_00cfa8c4(lVar6);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Grace__C_02beeb40);
  local_b8 = FUN_00dbe76c;
  local_b0 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00cf9eec(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbeb64(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,0x91);
  return;
}




void FUN_00dbeb70(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,&local_58,0);
  fVar3 = (float)FUN_00d51830(param_4);
  fVar3 = fVar3 - local_58;
  param_3 = param_3 - local_50;
  __x = fVar3 * fVar3 + (param_2 - fStack_54) * (param_2 - fStack_54) + param_3 * param_3;
  fVar5 = DAT_03218f88;
  fVar4 = DAT_03218f90;
  if (0.001 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    fVar5 = fVar3 / fVar4;
    fVar4 = param_3 / fVar4;
  }
  fVar5 = atan2f(fVar4,fVar5);
  *param_5 = fVar5;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dbec50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfab04(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Mace");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Grace_AA");
  local_58[0] = 0x3fa00000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_68);
  uVar2 = FUN_00cfa00c(auStack_68);
  FUN_00cf6bb0(uVar2,param_2);
  uVar2 = FUN_00cfab4c(auStack_68);
  uVar2 = FUN_00cf3a9c(0x3f800000,uVar2,"Effect_Grace_AA_Impact_Lt",0);
  FUN_00cf3bdc(0,uVar2,FUN_00dbeb70);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfab94(auStack_68);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09ec0(*(undefined4 *)(lVar4 + 0x3d0));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Grace_Light_Impact_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Grace_Light_Impact_02");
  FUN_00cf41bc(uVar2,"Sound_Grace_Light_Impact_03");
  FUN_00cfb0a4(auStack_68);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00cf7700);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00dbe830(auStack_68,0);
  plVar3 = (long *)FUN_00cf9afc(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Grace_PlayRetributionImpact_02bf06c8);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbeeb0(void)

{
  FUN_00dbec50("Attack",FUN_00da04a0);
  return;
}




void FUN_00dbeec4(void)

{
  FUN_00dbec50("AltAttack",FUN_00da04a0);
  return;
}




void FUN_00dbeed8(void)

{
  FUN_00dbec50("CritAttack",FUN_00da05d0);
  return;
}




void FUN_00dbeeec(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined8 param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d517cc();
  if (lVar2 == 0) {
    uVar3 = FUN_00d50ef8(param_4);
    FUN_00d55794(uVar3,local_58,0);
    *param_5 = local_58[0];
    *param_6 = local_50;
    lVar2 = FUN_00d50ef8(param_4);
    uVar4 = *(undefined4 *)(lVar2 + 0x260);
  }
  else {
    uVar4 = FUN_00d51830(param_4);
    *param_5 = uVar4;
    *param_6 = param_3;
    uVar4 = *(undefined4 *)(lVar2 + 0x260);
  }
  *param_7 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbefa4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar3 = FUN_00cfa444(auStack_78);
  FUN_00cf2fa4(uVar3,PTR_s_Buff_Grace_A_Lockout_02bf06e8,2);
  uVar3 = FUN_00cfa444(auStack_78);
  FUN_00cf2fa4(uVar3,PTR_s_Buff_Grace_A_LockoutOnUltimate_02bf06f0,2);
  uVar3 = FUN_00cfa444(auStack_78);
  FUN_00cf2fa4(uVar3,PTR_s_Buff_Grace_A_LockoutOnUltimateUs_02bf06f8,2);
  FUN_00da0778(auStack_78);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability01_Startup",0,0,0,0);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09ec0(*(undefined4 *)(lVar4 + 0x3dc));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grace_A_Dash_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Grace_A_Dash_02");
  FUN_00cf98bc(auStack_78);
  puVar2 = PTR_s_Buff_Grace_A_GuardOmni_02bf0708;
  uVar3 = FUN_00cf9ab4(auStack_78);
  FUN_00cf456c(uVar3,puVar2,FUN_00dc03d8,1,0);
  puVar2 = PTR_s_Buff_Grace_A_Lockout_02bf06e8;
  uVar3 = FUN_00cf9ab4(auStack_78);
  FUN_00cf456c(uVar3,puVar2,FUN_00dc03d8,1,0);
  FUN_00cf9eec(auStack_78);
  FUN_00da0d80(auStack_78,FUN_00dc03ec);
  puVar2 = PTR_s_Buff_Grace_A_GuardDirectional_02bf0718;
  uVar3 = FUN_00cf9ab4(auStack_78);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00dc0400,1,0);
  FUN_00cf45d4(uVar3,FUN_00dbeeec);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb05c(auStack_78);
  FUN_00cf7b3c(uVar3,2);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability01_Dash",0,0,0,0);
  plVar5 = (long *)FUN_00cfa12c(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3eb33333,0,0x3f800000,0x3f800000);
  local_68[0] = 0x42040000;
  local_60 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,local_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  (**(code **)(*plVar5 + 0xb8))(0x41700000);
  FUN_00da0808(auStack_78);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability01_DashEndAttack",0,0,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09ec0(*(undefined4 *)(lVar4 + 0x3d4));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grace_A_Impact_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Grace_A_Impact_02");
  FUN_00cf41bc(uVar3,"Sound_Grace_A_Impact_03");
  FUN_00dbe830(auStack_78,1);
  plVar5 = (long *)FUN_00cfb134(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3e99999a);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41500000);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da0f54(auStack_78,PTR_s_Buff_Grace_PostAbilityBonuses_02bf06e0,FUN_00dc0414);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfacb4(auStack_78);
  FUN_00cf50b0(0x3f000000);
  FUN_00da07e0(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

