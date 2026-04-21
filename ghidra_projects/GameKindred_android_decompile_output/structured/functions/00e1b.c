// functions/00e1b — 10 functions
#include "libGameKindred.h"




void FUN_00e1b420(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e1b42c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d42ce8(param_1,0x23,"Effect_Flicker_Immobilize",0);
  lVar1 = FUN_00d63f30(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Flicker_Ability_B_Plant_Roots");
  lVar1 = FUN_00d09310();
  FUN_00d09d70(*(undefined4 *)(lVar1 + 0x374));
                    /* WARNING: Could not recover jumptable at 0x00e1b498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e1b49c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [24];
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d66d28();
  FUN_00d5cf60();
  uVar4 = FUN_00d9e390();
  FUN_00d59f54(uVar4,0,4,0x19,0);
  FUN_00d67d04(param_1);
  FUN_00d67b04(0x3f000000,param_1);
  uVar5 = FUN_00d64d7c(param_1);
  lVar6 = FUN_00d4891c(0x3f000000,uVar5,1);
  plVar7 = (long *)FUN_00d2b778(lVar6 + 0x10);
  local_a8 = FUN_00e1b778;
  local_a0 = 3;
  (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
  plVar7 = (long *)FUN_00d2b818(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x40))();
  (**(code **)(*plVar7 + 0x38))(plVar7,"FieldDPS",0);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_a8,lVar6 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(&local_a8,uVar5);
  uVar5 = FUN_00d47d9c(uVar5);
  FUN_00da2040(uVar5,"Effect_Flicker_A_AOE_A");
  FUN_00d3e534();
  uVar5 = FUN_00e11d14();
  FUN_00d42654(&local_a8,uVar5);
  lVar6 = FUN_00d09310();
  uVar8 = FUN_00d09d70(*(undefined4 *)(lVar6 + 0x374));
  FUN_00d3ecf4(0x3f800000,uVar8,uVar5,"Sound_Flicker_Ability_A_Loop",0,1);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_c0,lVar6 + 0x20);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4db40(&local_a8,uVar4);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d55794(uVar3,auStack_d0,0);
  FUN_00d59f54(uVar4,0,3,0x19,0);
  FUN_00d4db48(&local_a8,auStack_d0);
  FUN_00d4dabc(&local_a8,1);
  FUN_00d3e534();
  uVar3 = FUN_00d3940c();
  FUN_00d42654(auStack_c0,uVar3);
  FUN_00d3fad8(uVar3,&local_a8,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2cb84();
  FUN_00d42654(auStack_c0,uVar3);
  puVar2 = PTR_s_Buff_Flicker_A_Immobilize_02bf05d0;
  uVar4 = FUN_00d59f54(uVar4,0,5,0x19,0);
  FUN_00d3e888(uVar4,0,0,uVar3,puVar2,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_c0,uVar3);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_a8,lVar6 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d29cd4();
  FUN_00d42654(&local_a8,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1b778(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00e1b78c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_48[0] = FUN_00d59f54(uVar2,1,4,0x19,0);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1b80c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  uVar3 = FUN_00d9eb64();
  uVar9 = FUN_00d53b5c(uVar3,1);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_70,lVar4 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(&local_70,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Flicker_B_AOE_Range");
  FUN_00da20b8(0);
  FUN_00d3e534();
  uVar3 = FUN_00e11d14();
  FUN_00d42654(&local_70,uVar3);
  lVar4 = FUN_00d09310();
  uVar10 = FUN_00d09d70(*(undefined4 *)(lVar4 + 0x378));
  FUN_00d3ecf4(0x3f800000,uVar10,uVar3,"Sound_Flicker_Ability_B_Loop",0,1);
  uVar3 = FUN_00d67b84(param_1);
  uVar5 = FUN_00d44008(uVar3,PTR_s_Buff_Flicker_Talent_BindingDust_02bf1e68);
  if ((uVar5 & 1) != 0) {
    FUN_00d3e534();
    uVar3 = FUN_00d395d4();
    FUN_00d42654(&local_70,uVar3);
    FUN_00d5a3d0(uVar2,DAT_0320e63c,1,9);
    FUN_00d40e24(uVar3,0x12,1);
  }
  uVar2 = FUN_00d64d7c(param_1);
  lVar4 = FUN_00d4891c(0x3f000000,uVar2,1);
  lVar4 = lVar4 + 0x10;
  plVar6 = (long *)FUN_00d2b778(lVar4);
  local_68 = 1;
  local_70._0_4_ = uVar9;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,&local_70);
  (**(code **)(*plVar6 + 0x20))(0x3f800000);
  plVar6 = (long *)FUN_00d2b818(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x40))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"DustDPS",1);
  plVar6 = (long *)FUN_00d2cf7c(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Flicker_B_Slow_02bf05e0);
  local_70._0_4_ = 0x3f19999a;
  local_68 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
  lVar4 = FUN_00d6624c(param_1);
  lVar4 = lVar4 + 0x10;
  plVar6 = (long *)FUN_00d2b778(lVar4);
  local_70 = (code *)CONCAT44(local_70._4_4_,uVar9);
  local_68 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,&local_70);
  (**(code **)(*plVar6 + 0x20))(0x3f800000);
  lVar7 = FUN_00d29e8c(lVar4);
  lVar8 = FUN_00d2a370(lVar7 + 0x10);
  *(undefined **)(lVar8 + 8) = PTR_s_Buff_Flicker_Talent_BindingDust_02bf1e68;
  plVar6 = (long *)FUN_00d2cf7c(lVar7 + 0x88);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Flicker_A_Immobilize_02bf05d0);
  local_70 = FUN_00e1bb24;
  local_68 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
  plVar6 = (long *)FUN_00d2b818(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x40))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"DustBurstDamage",1);
  plVar6 = (long *)FUN_00d2cc5c(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Flicker_Ability_A_Impact_3");
  lVar4 = FUN_00d09310();
  FUN_00d09d70(*(undefined4 *)(lVar4 + 0x378));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1bb24(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e63c,2,9);
  return;
}




void FUN_00e1bb3c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    local_a8 = 0xffffffff;
    uStack_a4 = local_a8;
    lVar7 = FUN_00d66d28(param_1);
    FUN_00d67b84(param_1);
    lVar8 = FUN_00d9e390();
    uVar9 = FUN_00d9ea08(lVar7);
    uVar6 = FUN_00d6bbac(uVar9,DAT_031b9500,&uStack_a4);
    uVar10 = FUN_00d6bbac(uVar9,DAT_031b9504,&local_a8);
    puVar4 = PTR_s_Buff_Flicker_C_Warning_02bf05f0;
    if (((uVar6 & 1) == 0) && ((uVar10 & 1) == 0)) {
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(undefined4 *)(lVar7 + 0x260);
      uVar9 = FUN_00d59f54(lVar8,2,2,0x19,0);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(uVar9,0,0,auStack_a0,uVar1,uVar2,puVar4,uVar5,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1bc70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x28);
  FUN_00d3e534();
  uVar3 = FUN_00d2a200();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e5d0(uVar3,FUN_00e1bb3c);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Flicker_C_Warning_02bf05f0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1bd80(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d67b84();
  uVar5 = FUN_00d9e390();
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    fVar12 = (float)FUN_009bc24c();
    fVar13 = (float)FUN_00d59f54(uVar5,2,7,0x19,0);
    lVar7 = FUN_00d67c60(param_1);
    lVar8 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_grace_period_02bf05a8;
    uVar4 = FUN_00e6a474(PTR_s_grace_period_02bf05a8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar8 + 0x100) + 8))(lVar8 + 0x100,uVar4);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar4);
    *pfVar9 = fVar12 + fVar13;
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1a6e8;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
  }
  uVar10 = FUN_00d634b4(param_1);
  lVar7 = FUN_00d4aab0(uVar10,FUN_00e1a81c);
  FUN_00d2a320(lVar7 + 0x10);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar7 + 0x30);
  FUN_00d3e534();
  uVar10 = FUN_00d294ac();
  FUN_00d42654(auStack_80,uVar10);
  uVar10 = FUN_00d47dc4(uVar10,"OverHead");
  FUN_00da2040(uVar10,"Effect_Flicker_C_Warning");
  FUN_00da20b8(0);
  FUN_00d3e534();
  uVar11 = FUN_00e11d14();
  FUN_00d42654(auStack_80,uVar11);
  lVar7 = FUN_00d09310();
  uVar10 = FUN_00d09d70(*(undefined4 *)(lVar7 + 0x37c));
  FUN_00d3ecf4(0x3f800000,uVar10,uVar11,"Sound_Flicker_Ability_C_Ally",0,1);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar7 + 0x20);
  FUN_00d3e534();
  uVar10 = FUN_00d2a504();
  FUN_00d42654(auStack_80,uVar10);
  FUN_00d3e534();
  uVar10 = FUN_00d2cb84();
  FUN_00d42654(auStack_80,uVar10);
  puVar3 = PTR_s_Buff_Flicker_C_Stealth_02bf0600;
  uVar4 = FUN_00d59f54(uVar5,2,8,0x19,0);
  FUN_00d3e888(uVar4,0,0,uVar10,puVar3,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00d2a6c0();
  FUN_00d42654(auStack_80,uVar5);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

