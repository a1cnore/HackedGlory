// functions/00df4 — 24 functions
#include "libGameKindred.h"




void FUN_00df4084(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float local_730 [4];
  float local_720 [4];
  undefined4 local_710 [2];
  undefined1 auStack_708 [112];
  undefined8 local_698 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    thunk_FUN_00d9ff34(local_710,PTR_s_Buff_Hero052_SuperOP_02bf1590);
    FUN_00d4e934(auStack_708,local_710[0]);
    FUN_00d4e998(auStack_708,0);
    FUN_00d4db40(auStack_708,uVar4);
    FUN_00d4daf4(auStack_708,1,0,0,0);
    FUN_00d4ddc4(auStack_708);
    FUN_00d4dca4(auStack_708,"Hero052_SpecialBall",0);
    uVar2 = FUN_00d9e840(auStack_708,local_698,200,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      puVar6 = local_698;
      do {
        uVar5 = *puVar6;
        uVar4 = FUN_00d51778(param_1);
        FUN_00d55794(uVar5,local_730,0);
        FUN_00d55794(uVar4,local_720,0);
        fVar7 = (float)local_730._4_8_ - (float)local_720._4_8_;
        fVar8 = SUB84(local_730._4_8_,4) - SUB84(local_720._4_8_,4);
        fVar8 = (local_730[0] - local_720[0]) * (local_730[0] - local_720[0]) + fVar7 * fVar7 +
                fVar8 * fVar8;
        fVar7 = SQRT(fVar8);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(fVar8);
        }
        if (fVar7 <= 10.0) {
          FUN_008ff6ec(*puVar6,2,uVar4);
        }
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df4220(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 local_6f0 [2];
  undefined1 auStack_6e8 [112];
  undefined8 local_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_4);
    thunk_FUN_00d9ff34(local_6f0,PTR_s_Buff_Hero052_BallLocator_02bf1598);
    FUN_00d4e934(auStack_6e8,local_6f0[0]);
    FUN_00d4e998(auStack_6e8,0);
    FUN_00d4db40(auStack_6e8,uVar4);
    FUN_00d4daf4(auStack_6e8,1,0,0,0);
    FUN_00d4ddc4(auStack_6e8);
    FUN_00d4dca4(auStack_6e8,"Hero052_Ball",0);
    iVar2 = FUN_00d9e840(auStack_6e8,local_678,200,0);
    if (iVar2 != 0) {
      local_700 = FUN_00d51820(param_4);
      uStack_6fc = param_2;
      local_6f8 = param_3;
      FUN_008ff6f4(local_678[0],3,&local_700);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4324(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar2,FUN_00df3ee8);
  uVar2 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar2,FUN_00df4084);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_2,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df442c(void)

{
  FUN_00df4324("Attack",0xa2,"CenterBody");
  return;
}




void FUN_00df4444(void)

{
  FUN_00df4324("AltAttack",0xa2,"CenterBody");
  return;
}




void FUN_00df445c(void)

{
  FUN_00df4324("CritAttack",0xa2,"CenterBody");
  return;
}




void FUN_00df4474(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfa954(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_38 = FUN_00df4570;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,0,&local_38);
  FUN_00cfb05c(auStack_48);
  FUN_00cf99dc(auStack_48);
  plVar2 = (long *)FUN_00cf9b44(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Stunned_02beb430);
  local_38 = (code *)CONCAT44(local_38._4_4_,0x40000000);
  local_30 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0xa3,"CenterBody");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4570(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00df4584(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00df45ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4654(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 local_6f0 [2];
  undefined1 auStack_6e8 [112];
  undefined8 local_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_4);
    thunk_FUN_00d9ff34(local_6f0,PTR_s_Buff_Hero052_BallLocator_02bf1598);
    FUN_00d4e934(auStack_6e8,local_6f0[0]);
    FUN_00d4e998(auStack_6e8,0);
    FUN_00d4db40(auStack_6e8,uVar4);
    FUN_00d4daf4(auStack_6e8,1,0,0,0);
    FUN_00d4ddc4(auStack_6e8);
    FUN_00d4dca4(auStack_6e8,"Hero052_Ball",0);
    iVar2 = FUN_00d9e840(auStack_6e8,local_678,200,0);
    if (iVar2 != 0) {
      local_700 = FUN_00d51820(param_4);
      uStack_6fc = param_2;
      local_6f8 = param_3;
      FUN_008ff6f4(local_678[0],0,&local_700);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df4758(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  *(undefined4 *)(param_6 + 1) = DAT_03218f90;
  *param_6 = _DAT_03218f88;
  return;
}




void FUN_00df479c(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Hero052_Ball*",1);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00df4758);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4820(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d59f54(param_2,1,5,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_00df4858(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 local_700 [2];
  undefined1 auStack_6f8 [112];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_4);
    thunk_FUN_00d9ff34(local_700,PTR_s_Buff_Hero052_BallLocator_02bf1598);
    FUN_00d4e934(auStack_6f8,local_700[0]);
    FUN_00d4e998(auStack_6f8,0);
    FUN_00d4db40(auStack_6f8,uVar4);
    FUN_00d4daf4(auStack_6f8,1,0,0,0);
    FUN_00d4ddc4(auStack_6f8);
    FUN_00d4dca4(auStack_6f8,"Hero052_Ball",0);
    uVar2 = FUN_00d9e840(auStack_6f8,auStack_688,200,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      puVar5 = auStack_688;
      do {
        local_710 = FUN_00d51820(param_4);
        uStack_70c = param_2;
        local_708 = param_3;
        FUN_008ff6f4(*puVar5,1,&local_710);
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4974(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 local_700 [2];
  undefined1 auStack_6f8 [112];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_4);
    thunk_FUN_00d9ff34(local_700,PTR_s_Buff_Hero052_SuperOP_02bf1590);
    FUN_00d4e934(auStack_6f8,local_700[0]);
    FUN_00d4e998(auStack_6f8,0);
    FUN_00d4db40(auStack_6f8,uVar4);
    FUN_00d4daf4(auStack_6f8,1,0,0,0);
    FUN_00d4ddc4(auStack_6f8);
    FUN_00d4dca4(auStack_6f8,"Hero052_SpecialBall",0);
    uVar2 = FUN_00d9e840(auStack_6f8,auStack_688,200,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      puVar5 = auStack_688;
      do {
        local_710 = FUN_00d51820(param_4);
        uStack_70c = param_2;
        local_708 = param_3;
        FUN_008ff6f4(*puVar5,1,&local_710);
        uVar3 = uVar3 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4a90(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00df4ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4b60(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00df4858);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00df4974);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_38);
  uVar2 = FUN_00cfcad8(uVar2,0xa5,"CenterBody");
  FUN_00cfcba8(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4c40(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cf95ec(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 8))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))();
  (**(code **)(*plVar2 + 0x40))();
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4ce8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_58);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero052_Ball_Appear");
  uVar4 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar4,"Move",0,1,0,"AttackToIdle");
  plVar3 = (long *)FUN_00cfa12c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_48[0] = 0x42200000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  FUN_00cfb56c(auStack_58);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero052_Ball_Appear");
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4e58(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfa6cc(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0xa6,"CenterBody");
  FUN_00cfcba8(uVar2,1);
  plVar3 = (long *)FUN_00cfa954(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_38 = FUN_00df4f4c;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,0,&local_38);
  lVar4 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df4f4c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00df4f60(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"InFront");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero052_Ultimate_Warning");
  local_48[0] = 0x3f19999a;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xd8))(0x3e99999a);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_58);
  uVar2 = FUN_00cfcad8(uVar2,0xa4,"CenterBody");
  FUN_00cfcba8(uVar2,1);
  plVar3 = (long *)FUN_00cfa12c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))();
  local_48[0] = 0x3eb33333;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  FUN_00cfb56c(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero052_Ball_RushStun");
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

