// functions/00dec — 19 functions
#include "libGameKindred.h"




void FUN_00dec1c0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00dec1cc(void)

{
  FUN_00debebc("Attack");
  return;
}




void FUN_00dec1d8(void)

{
  FUN_00debebc("AltAttack");
  return;
}




void FUN_00dec1e4(void)

{
  FUN_00debebc("CritAttack");
  return;
}




void FUN_00dec1f0(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
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
  fVar3 = (float)FUN_00d51820(param_4);
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




int FUN_00dec2d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00cf2ed4();
  if (iVar2 != 0) goto LAB_00dec3e4;
  lVar4 = FUN_00d50ef8(param_1);
  lVar6 = *(long *)(lVar4 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  iVar2 = FUN_00d53990(lVar6,1);
  if (iVar2 != 2) {
    iVar2 = 2;
    iVar3 = FUN_00d53990(lVar6,2);
    if (iVar3 == 2) goto LAB_00dec3e4;
    iVar2 = FUN_00d53990(lVar6,4);
    if (iVar2 != 2) {
      iVar2 = FUN_00d53990(lVar6,8);
      if (iVar2 == 2) {
        lVar6 = *(long *)(lVar4 + 0x18);
        while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar6 = *(long *)(lVar6 + 0x20);
        }
        thunk_FUN_00d9ff34(local_40,PTR_s_Buff_Varya_C_ComboWindow_02bf1358);
        uVar5 = FUN_00d6bbac(lVar6,local_40[0],0);
        if ((uVar5 & 1) == 0) goto LAB_00dec348;
      }
      iVar2 = 0;
      goto LAB_00dec3e4;
    }
  }
LAB_00dec348:
  iVar2 = 2;
LAB_00dec3e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00dec410(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d53990(lVar2,8);
  return iVar1 == 2;
}




uint FUN_00dec45c(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d50ef8();
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  thunk_FUN_00d9ff34(local_30,PTR_s_Buff_Varya_B_Control_02bf12f0);
  uVar4 = FUN_00d6bbac(lVar3,local_30[0],0);
  if ((uVar4 & 1) == 0) {
    thunk_FUN_00d9ff34(local_38,PTR_s_Buff_Varya_A_QuickSpearAvailable_02bf12e8);
    uVar2 = FUN_00d6bbac(lVar3,local_38[0],0);
  }
  else {
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dec520(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar3 = FUN_00cfad44(auStack_48);
  FUN_00cf2ec0(uVar3,FUN_00dec2d0);
  uVar3 = FUN_00cf9f34(auStack_48);
  uVar4 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar4,FUN_00dec410);
  FUN_00d9b0f8(uVar3);
  plVar5 = (long *)FUN_00cf9d3c();
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)*puVar6)(puVar6,PTR_s_Ability__Varya__C_02bef7b8);
  FUN_00d9b0f8(uVar3);
  FUN_00cf98bc();
  FUN_00d9b0f8(uVar3);
  puVar2 = PTR_s_Buff_Varya_C_ComboWindow_02bf1358;
  uVar4 = FUN_00cf9d84();
  FUN_00cf49b0(uVar4,puVar2);
  FUN_00d9b0f8(uVar3);
  FUN_00cf9eec();
  uVar3 = FUN_00cf9f34(auStack_48);
  uVar4 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar4,FUN_00dec45c);
  FUN_00d9b100(uVar3);
  uVar4 = FUN_00cf9634();
  uVar4 = FUN_00cfc5fc(uVar4,PTR_s_Ability__Varya__A_Default_02bef7c0);
  FUN_00cfc614(uVar4,FUN_00cfc7e4);
  FUN_00d9b0f8(uVar3);
  uVar3 = FUN_00cf9634();
  uVar3 = FUN_00cfc5fc(uVar3,PTR_s_Ability__Varya__A_Quick_02bef7c8);
  FUN_00cfc614(uVar3,FUN_00cfc7e4);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dec670(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_00dec67c(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d50ef8();
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  thunk_FUN_00d9ff34(&local_30,PTR_s_Buff_Varya_B_Control_02bf12f0);
  uVar5 = FUN_00d6bbac(lVar4,local_30,&local_2c);
  bVar2 = false;
  if ((uVar5 & 1) != 0) {
    iVar3 = FUN_00d6bf28(lVar4,local_2c);
    bVar2 = iVar3 == 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00dec72c(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d50ef8();
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  thunk_FUN_00d9ff34(&local_30,PTR_s_Buff_Varya_B_Control_02bf12f0);
  uVar5 = FUN_00d6bbac(lVar4,local_30,&local_2c);
  bVar2 = false;
  if ((uVar5 & 1) != 0) {
    iVar3 = FUN_00d6bf28(lVar4,local_2c);
    bVar2 = iVar3 == 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00dec7dc(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d50ef8();
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  thunk_FUN_00d9ff34(&local_30,PTR_s_Buff_Varya_B_Control_02bf12f0);
  uVar5 = FUN_00d6bbac(lVar4,local_30,&local_2c);
  bVar2 = false;
  if ((uVar5 & 1) != 0) {
    iVar3 = FUN_00d6bf28(lVar4,local_2c);
    if (iVar3 < 2) {
      iVar3 = FUN_00d6bf28(lVar4,local_2c);
      bVar2 = iVar3 == -1;
    }
    else {
      bVar2 = true;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00dec8a8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00da0778(auStack_58);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d0a010(*(undefined4 *)(lVar4 + 0x460));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Varya_Ability_A_Buildup_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Varya_Ability_A_Buildup_2");
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdle");
  plVar5 = (long *)FUN_00cfab04(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Lightning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Varya_A_Cast_Delay");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_48);
  FUN_00da0f54(auStack_58,PTR_s_Buff_Varya_A_WatchForStun_02bf12d0,FUN_00decb84);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00decb84);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d0a010(*(undefined4 *)(lVar4 + 0x460));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Varya_Ability_A_Spear_Throw_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Varya_Ability_A_Spear_Throw_2");
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar6 = FUN_00d9ab88();
  FUN_00d9b188(uVar6,PTR_s_Ability__Varya__A_02bef7b0);
  FUN_00d9b0f8(uVar3);
  uVar6 = FUN_00cfb17c();
  uVar6 = FUN_00cfcad8(uVar6,0x84,"SpearThrow");
  FUN_00cfcbbc(uVar6,FUN_00dec670);
  FUN_00d9b100(uVar3);
  uVar3 = FUN_00cfb17c();
  FUN_00cfcad8(uVar3,0x84,"SpearThrow");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_58);
  puVar2 = PTR_s_Buff_SpeedDecayingUsingBuffVar_02beb4d0;
  uVar3 = FUN_00cf9ab4(auStack_58);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00dec1c0,1,0);
  FUN_00cf45d4(uVar3,FUN_00debda0);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da07e0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00decb84(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00decb98(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00da0778(auStack_58);
  FUN_00cf98bc(auStack_58);
  puVar2 = PTR_s_Buff_Varya_A_QuickSpearAvailable_02bf12e8;
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,puVar2);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability01_Quick",0,1,0,"AttackToIdle");
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Lightning");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Varya_A_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_48);
  FUN_00da0f54(auStack_58,PTR_s_Buff_Varya_A_WatchForStun_02bf12d0,FUN_00decf3c);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00decf3c);
  FUN_00cf7578(uVar3,0);
  uVar5 = FUN_00cfab94(auStack_58);
  lVar6 = FUN_00d09310();
  uVar3 = FUN_00d0a010(*(undefined4 *)(lVar6 + 0x460));
  FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Varya_Ability_A_Spear_Throw_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar5,"Sound_Varya_Ability_A_Spear_Throw_2");
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b188(uVar5,PTR_s_Ability__Varya__A_02bef7b0);
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfb17c();
  uVar5 = FUN_00cfcad8(uVar5,0x84,"CenterBody");
  FUN_00cfcbbc(uVar5,FUN_00dec670);
  FUN_00d9b100(uVar3);
  uVar3 = FUN_00cfb17c();
  FUN_00cfcad8(uVar3,0x84,"CenterBody");
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar5,FUN_00dec72c);
  FUN_00d9b0f8(uVar3);
  FUN_00cf98bc();
  FUN_00d9b0f8(uVar3);
  puVar2 = PTR_s_Buff_Varya_B_MoveDefaultAvailabl_02bf1318;
  uVar5 = FUN_00cf9ab4();
  FUN_00cf456c(uVar5,puVar2,FUN_00decf50,1,0);
  FUN_00d9b0f8(uVar3);
  FUN_00cf9eec();
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar5,FUN_00dec7dc);
  FUN_00d9b0f8(uVar3);
  FUN_00cf98bc();
  FUN_00d9b0f8(uVar3);
  puVar2 = PTR_s_Buff_Varya_B_MoveAvailable_02bf1310;
  uVar5 = FUN_00cf9ab4();
  uVar5 = FUN_00cf456c(uVar5,puVar2,FUN_00decf50,1,0);
  FUN_00cf45c4(uVar5,FUN_00deb9a0);
  FUN_00d9b0f8(uVar3);
  FUN_00cf9eec();
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar5,FUN_00dec67c);
  FUN_00d9b0f8(uVar3);
  FUN_00cf98bc();
  FUN_00d9b0f8(uVar3);
  puVar2 = PTR_s_Buff_Varya_B_Control_02bf12f0;
  uVar5 = FUN_00cf9d84();
  FUN_00cf49b0(uVar5,puVar2);
  FUN_00d9b100(uVar3);
  puVar2 = PTR_s_Buff_SpeedDecayingUsingBuffVar_02beb4d0;
  uVar5 = FUN_00cf9ab4();
  uVar5 = FUN_00cf456c(uVar5,puVar2,FUN_00dec1c0,1,0);
  FUN_00cf45d4(uVar5,FUN_00debda0);
  FUN_00d9b0f8(uVar3);
  FUN_00cf9eec();
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da07e0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00decf3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00decf50(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,7,0x19,0);
  return;
}




void FUN_00decf64(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d50ef8();
  fVar7 = (float)FUN_00d59f54(lVar3,0,1,1,1);
  if (fVar7 <= *(float *)(*(long *)(lVar3 + 0x40) + 0x310)) {
    lVar4 = *(long *)(lVar3 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    iVar2 = FUN_00d53990(lVar4,0);
    if (iVar2 == 1) {
      lVar3 = *(long *)(lVar3 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      thunk_FUN_00d9ff34(local_30,PTR_s_Buff_Varya_B_Combo_A_Pressable_02bf1300);
      uVar5 = FUN_00d6bbac(lVar3,local_30[0],0);
      uVar6 = 0;
      if ((uVar5 & 1) == 0) {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

