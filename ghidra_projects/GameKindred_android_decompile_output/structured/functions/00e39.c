// functions/00e39 — 22 functions
#include "libGameKindred.h"




void FUN_00e390a0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d66d28(*param_1);
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
    return;
  }
  FUN_00d5a450(0x3f800000,lVar2,"Stun",1,1,0);
  return;
}




void FUN_00e39104(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  FUN_00d67b04(0x3f000000);
  FUN_00d42ce8(param_1,0x1f,"Effect_Sleep","OverHead");
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00d67b84(param_1);
    uVar4 = FUN_00d44008(uVar5,PTR_s_Buff_Samuel_Talent_UnwakingNight_02bee240);
    if ((uVar4 & 1) == 0) {
      lVar6 = FUN_00d67c60(param_1);
      puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
      uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
      uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
      *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar3;
      uVar1 = *(uint *)(lVar6 + 0xf8);
      *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e38f88;
      *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    }
  }
  lVar6 = FUN_00d63f30(param_1);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_00d2a160(lVar6);
  (**(code **)(*plVar7 + 0x38))();
  FUN_00d2a1b0(lVar6);
  uVar5 = FUN_00d39a54(lVar6);
  FUN_00d3e604(uVar5,FUN_00e390a0);
  lVar6 = FUN_00d65010(param_1);
  plVar7 = (long *)FUN_00d2df94(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Samuel_ability_c_loop");
  lVar8 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar8 + 800));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  plVar7 = (long *)FUN_00d29c34(lVar6 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,4);
  lVar6 = FUN_00d64980(param_1);
  plVar7 = (long *)FUN_00d2779c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Idle");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x20))();
  (**(code **)(*plVar7 + 0x28))();
  plVar7 = (long *)FUN_00d2cc5c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Samuel_ability_c_end");
  lVar6 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar6 + 0x31c));
                    /* WARNING: Could not recover jumptable at 0x00e392dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x28))(plVar7);
  return;
}




float FUN_00e392e0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02e3ef78) break;
      lVar4 = *(long *)(lVar4 + 0x20);
    } while (lVar4 != 0);
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf48) break;
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  uVar1 = FUN_00d6bb44(lVar3,DAT_031bae88);
  fVar5 = DAT_031bae8c;
  if (((DAT_031bae90 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_031bae90), fVar5 = DAT_031bae8c, iVar2 != 0)) {
    DAT_031bae8c = 2.0943952;
    __cxa_guard_release(&DAT_031bae90);
    fVar5 = DAT_031bae8c;
  }
  DAT_031bae8c = fVar5;
  if (uVar1 == 0) {
    iVar2 = FUN_00d53990(lVar4,2);
    if (iVar2 != 2) {
      return 0.0;
    }
    fVar5 = (float)thunk_FUN_00d086f0(0,param_1,0,1);
    fVar6 = DAT_031bae8c;
  }
  else {
    fVar6 = (float)uVar1;
  }
  return fVar5 * fVar6;
}




void FUN_00e3940c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00e39df0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"barrel_bnd",FUN_00e392e0);
                    /* WARNING: Could not recover jumptable at 0x00e39448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))();
  return;
}




void FUN_00e3944c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar1 = FUN_00d66cf4(uVar3);
  if (1 < uVar1) {
    uVar2 = FUN_00d66d28(uVar3);
    uVar2 = thunk_FUN_00d086f0(uVar2,4,1);
    FUN_00d67d3c(uVar3);
    FUN_00d67d04(uVar2,uVar3);
    FUN_00d671f8(uVar3,1);
    return;
  }
  FUN_00d66d04(uVar3,0x80,1);
  return;
}




void FUN_00e394d0(undefined8 *param_1)

{
  FUN_00d66d04(*param_1,0x80,0);
  return;
}




void FUN_00e394e0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00d66d28(*param_1);
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_SAW_Talent_SpeedySpinUp_02bee120);
  uVar1 = FUN_00d426b0(*param_1);
  if ((uVar2 & 1) != 0) {
    FUN_00d5a3d0(uVar1,DAT_031ac510,0,9);
    return;
  }
  thunk_FUN_00d086f0(uVar1,2,1);
  return;
}




void FUN_00e39550(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65a7c();
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d6592c(param_1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e396bc;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e394e0;
  local_40 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  uVar4 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar4,FUN_00e394d0);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d6624c(param_1);
  uVar4 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar4,FUN_00e3944c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e396bc(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




float FUN_00e396c8(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,1,4,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,1,3,0x19,0);
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  return fVar2;
}




void FUN_00e3972c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  undefined *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69224(param_1,&local_90);
    lVar4 = FUN_00d66d28(local_90);
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    lVar6 = 0;
    local_60[0] = PTR_s_Ability__SAW__DefaultAttack_02bef4b8;
    local_60[1] = PTR_s_Ability__SAW__AltAttack_02bef4c0;
    local_60[2] = PTR_s_Ability__SAW__CritAttack_02bef4c8;
    do {
      uVar2 = FUN_00d5401c(lVar5,*(undefined8 *)((long)local_60 + lVar6));
      FUN_00d00ad0(auStack_88,*(undefined4 *)(lVar4 + 0x260),uVar2);
      FUN_00ce20fc(auStack_88);
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x18);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3982c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d65010();
  lVar5 = lVar5 + 0x10;
  uVar6 = FUN_00d29f44(lVar5);
  local_68 = FUN_00e396c8;
  local_60 = 4;
  FUN_00d47690(uVar6,1,&local_68);
  plVar7 = (long *)FUN_00d2ccac(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Ability__SAW__Shank_02bef4d0);
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Idle","RoadieRunIdle");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Move","RoadieRun");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"MoveStart","RoadieRun_MoveStart");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"MoveStop","RoadieRun_MoveStop");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Sprint","RoadieRun");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"IdleCombat","RoadieRunIdle");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"MoveCombat","RoadieRun");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"MoveStartCombat","RoadieRun_MoveStart");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"MoveStopCombat","RoadieRun_MoveStop");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"MoveSheath","RoadieRun");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"IdleSheath","RoadieRunIdle");
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar5 + 0x10);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onEndName_02bed518;
  uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3972c;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e39ac4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_38[0] = FUN_00d59f54(uVar2,2,6,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e39b3c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__SAW__B_02bef4d8,PTR_s_Ability__SAW__B_Cancel_02bef4e0);
  plVar3 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_SAW_ability_2");
  lVar1 = FUN_00d09310();
  FUN_00d095e4(*(undefined4 *)(lVar1 + 0xf4));
                    /* WARNING: Could not recover jumptable at 0x00e39bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}




void FUN_00e39bb8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_SAW_HeroicPerk_SpinUp_02bf0ee0);
  local_38 = FUN_00ddfec8;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e39c60(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = FUN_00d65e5c();
  FUN_00e2d248(lVar1 + 0x10);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d657dc(param_1);
  uVar2 = FUN_00d3a390(lVar1 + 0x10);
  FUN_00d481b8(uVar2,FUN_00d483fc);
  lVar1 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2df44(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","StrafeIdle");
  plVar3 = (long *)FUN_00d2df44(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","StrafeIdle");
  uVar2 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3e4ccccd,uVar2,0);
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar4 = FUN_00e39e40(lVar1 + 0x10);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined4 *)(lVar4 + 8) = 0x40933333;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  FUN_00d2a320(lVar1 + 0x88);
  return;
}




void FUN_00e39d5c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4403c(param_1,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_SAW_Withdraw");
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e39df0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a38f0();
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




undefined8 * FUN_00e39e40(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_0281fd98;
      *puVar2 = 0;
      puVar2[2] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00e39eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d99120(param_2);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar2 = FUN_00d9ecdc(lVar1,*(undefined4 *)(param_1 + 0x1c));
    }
    else {
      uVar2 = FUN_00d9ee8c();
    }
    uVar3 = FUN_00a83478(param_1 + 8,param_2,0);
    FUN_00d99988(uVar2,uVar3,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}




void FUN_00e39f40(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero010_REignition");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Skaarf_Attack_1");
  lVar1 = FUN_00d09310();
  FUN_00d09788(*(undefined4 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00e39fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




float FUN_00e39fd8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d426b0(*param_1);
  lVar3 = *(long *)(param_2 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031bafc0 <= fVar4) {
    fVar4 = DAT_031bafc0;
  }
  fVar5 = DAT_031baf00;
  if (DAT_031baf00 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = (float)thunk_FUN_00d086f0(uVar1,2,1);
  fVar4 = fVar4 * fVar5;
  if ((*(uint *)(param_2 + 0x2f4) >> 2 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 0xc & 1) == 0) goto LAB_00e3a084;
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  fVar5 = (float)thunk_FUN_00d086f0(uVar1,uVar2,1);
  fVar4 = fVar4 * fVar5;
LAB_00e3a084:
  if (*(char *)(param_1[0x85] + 0xe) != '\0') {
    fVar5 = (float)thunk_FUN_00d086f0(uVar1,3,1);
    fVar4 = fVar4 * fVar5;
  }
  return fVar4;
}

