// functions/00d35 — 29 functions
#include "libGameKindred.h"




void FUN_00d3506c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  lVar2 = FUN_00d66d28(param_1);
  uVar4 = *(undefined4 *)(*(long *)(lVar2 + 0x40) + 0x308);
  FUN_00d3e534();
  uVar3 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40908(uVar4,uVar3,5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35100(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&local_98,&local_a0);
  lVar5 = FUN_00d66d28(local_98);
  uVar6 = FUN_00daa578(local_a0,lVar5);
  if (((uVar6 & 1) != 0) && ((*(byte *)(local_a0 + 0xc) >> 2 & 1) != 0)) {
    uVar2 = *(undefined4 *)(lVar5 + 0x260);
    ppuVar1 = &PTR_s_Buff_Item_Spellsword_RechargeOnN_02beb810;
    if ((*(uint *)(*(long *)(local_a0 + 0x20) + 0x2f4) & 1) != 0) {
      ppuVar1 = &PTR_s_Buff_Item_Spellsword_Recharge_02beb808;
    }
    puVar7 = *ppuVar1;
    uVar4 = FUN_00d66d34(local_98);
    FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar2,uVar2,puVar7,uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d351e8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d35100;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d35258(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_Spellsword__02beb130);
  uVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar3);
  FUN_00d3e534();
  lVar4 = FUN_00d29818();
  FUN_00d42654(auStack_50,lVar4);
  uVar5 = FUN_00d08524(uVar2,0,1);
  *(undefined4 *)(lVar4 + 0x10) = uVar5;
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 8);
  FUN_00d3e534();
  lVar4 = FUN_00d29818();
  FUN_00d42654(auStack_50,lVar4);
  uVar5 = FUN_00d08524(uVar2,0,1);
  *(undefined4 *)(lVar4 + 0x10) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3533c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_Spellsword__02beb130);
  uVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar3);
  FUN_00d3e534();
  lVar4 = FUN_00d29818();
  FUN_00d42654(auStack_50,lVar4);
  uVar5 = FUN_00d08524(uVar2,1,1);
  *(undefined4 *)(lVar4 + 0x10) = uVar5;
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 8);
  FUN_00d3e534();
  lVar4 = FUN_00d29818();
  FUN_00d42654(auStack_50,lVar4);
  uVar5 = FUN_00d08524(uVar2,1,1);
  *(undefined4 *)(lVar4 + 0x10) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35420(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00d35498;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xb,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35498(void)

{
  FUN_00d085c4(PTR_s__Item_PiercingShard__02beb0d8,0,1);
  return;
}




float FUN_00d354b0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_BrokenMyth__02beb040,0,1);
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_PiercingShard__02beb0d8,0,1);
  return fVar1 - fVar2;
}




void FUN_00d35500(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00d354b0;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xb,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35578(void)

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
  FUN_00d4bbf8(uVar2,2);
  uVar2 = FUN_00d4bc10();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,8);
  FUN_00d2cf2c(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Item_Frostburn_Slow_02beb838);
  local_48 = FUN_00d3562c;
  local_40 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3562c(void)

{
  FUN_00d085c4(PTR_s__Item_Frostburn__02beb0a0,1,1);
  return;
}




void FUN_00d35644(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00d356f8;
  local_40 = 2;
  FUN_00d47690(uVar3,2,&local_48);
  plVar4 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Slowed_buff");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d356f8(void)

{
  FUN_00d085c4(PTR_s__Item_Frostburn__02beb0a0,0,1);
  return;
}




void FUN_00d35710(void)

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
  uVar2 = FUN_00d4bc10();
  uVar2 = FUN_00d4bce8(uVar2,0x440000);
  lVar3 = FUN_00d4bc48(uVar2,8);
  lVar3 = lVar3 + 0x10;
  FUN_00d2cf2c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Item_Spellfire_Damage_02beb848);
  local_48 = FUN_00d357fc;
  local_40 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_MortalWound_02beb418);
  local_48 = FUN_00d357fc;
  local_40 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d357fc(void)

{
  FUN_00d085c4(PTR_s__Item_Spellfire__02beb128,1,1);
  return;
}




float FUN_00d35814(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_Spellfire__02beb128,0,1);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar5 = (*(float *)(lVar1 + 0x1b4) + 1.0) *
          (*(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0))
  ;
  if (DAT_0315ce44 <= fVar5) {
    fVar5 = DAT_0315ce44;
  }
  fVar6 = DAT_0315cd80._4_4_;
  if (DAT_0315cd80._4_4_ <= fVar5) {
    fVar6 = fVar5;
  }
  fVar3 = (float)FUN_00d085c4(PTR_s__Item_Spellfire__02beb128,3,1);
  fVar4 = (float)FUN_00d085c4(PTR_s__Item_Spellfire__02beb128,4,1);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar5 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_0315ced0 <= fVar5) {
    fVar5 = DAT_0315ced0;
  }
  fVar7 = DAT_0315ce10;
  if (DAT_0315ce10 <= fVar5) {
    fVar7 = fVar5;
  }
  fVar5 = (float)FUN_00d085c4(PTR_s__Item_Spellfire__02beb128,1,1);
  return (fVar2 * fVar6 + fVar3 + (fVar4 - fVar3) * ((fVar7 + -1.0) / 11.0)) / fVar5;
}




void FUN_00d35954(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Clockwork_Burst");
  uVar4 = FUN_00d64d7c(param_1);
  fVar5 = (float)FUN_00d085c4(PTR_s__Item_Spellfire__02beb128,2,1);
  lVar2 = FUN_00d4891c(1.0 / fVar5,uVar4,0);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  local_48 = FUN_00d35814;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,3);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35a78(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auStack_b8 [64];
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_70,&local_78);
  lVar5 = FUN_00d66d28(local_70);
  lVar11 = *(long *)(local_78 + 0x20);
  uVar6 = FUN_00daa578(local_78,lVar5);
  if (((((uVar6 & 1) != 0) && (fVar12 = *(float *)(*(long *)(lVar11 + 0x40) + 0x308), 0.0 < fVar12))
      && (fVar12 <= *(float *)(local_78 + 0x54))) && ((*(ushort *)(lVar11 + 0x2f4) & 0x110) != 0)) {
    iVar1 = *(int *)(lVar11 + 0x260);
    lVar7 = FUN_00d67c60(local_70);
    uVar3 = FUN_00e6a474("Guid_lastMinionProced");
    uVar3 = FUN_0091ed5c("Guid_lastMinionProced",uVar3,0x12345678);
    piVar8 = (int *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar3);
    if (iVar1 != *piVar8) {
      uVar9 = FUN_00d6eb50();
      uVar9 = FUN_00d6eb5c(uVar9,PTR_s__Item_BookOfEulogies__02beb030);
      uVar13 = FUN_00d08524(uVar9,1,1);
      if ((*(char *)(*(long *)(lVar5 + 0x38) + 0x60) != '\0') &&
         ((*(byte *)(local_78 + 0xc) & 1) != 0)) {
        uVar13 = FUN_00d08524(uVar9,2,1);
      }
      uVar3 = *(undefined4 *)(lVar11 + 0x260);
      lVar11 = FUN_00d67c60(local_70);
      uVar4 = FUN_00e6a474("Guid_lastMinionProced");
      uVar4 = FUN_0091ed5c("Guid_lastMinionProced",uVar4,0x12345678);
      puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x100) + 0x10))(lVar11 + 0x100,uVar4);
      *puVar10 = uVar3;
      FUN_00daa4a4(uVar13,auStack_b8,*(undefined4 *)(lVar5 + 0x260),*(undefined4 *)(lVar5 + 0x260),
                   0xffffffff,0xffffffff,0xee,0xffffffff);
      FUN_00910c0c(auStack_b8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35c74(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar4 = FUN_00d67c60();
  lVar5 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("Guid_lastMinionProced");
  uVar3 = FUN_0091ed5c("Guid_lastMinionProced",uVar3,0x12345678);
  uVar3 = (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar3);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar3);
  *puVar6 = 0xffffffff;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d35a78;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d35d7c(void)

{
  return;
}




void FUN_00d35d80(void)

{
  return;
}




void FUN_00d35d84(void)

{
  return;
}




void FUN_00d35d88(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  float fVar5;
  
  uVar1 = FUN_00d66d28(*param_1);
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Item_High_Vamp_02beb868);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Item_Mid_Vamp_02beb860);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Item_Low_Vamp_02beb858);
      fVar5 = 0.0;
      if ((uVar2 & 1) == 0) goto LAB_00d35e24;
      ppuVar4 = &PTR_s__Item_BookOfEulogies__02beb030;
    }
    else {
      ppuVar4 = &PTR_s__Item_BarbedNeedle__02beb020;
    }
    uVar3 = 0;
  }
  else {
    ppuVar4 = &PTR_s__Item_SerpentMask__02beb110;
    uVar3 = 4;
  }
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,*ppuVar4);
  fVar5 = (float)FUN_00d08524(uVar1,uVar3,1);
LAB_00d35e24:
  *(float *)(param_1[0x85] + 0x38) = fVar5 + *(float *)(param_1[0x85] + 0x38);
  return;
}




void FUN_00d35e44(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d64464();
  FUN_00d4bbf8(uVar1,4);
  lVar2 = FUN_00d4bc10();
  uVar1 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar1,FUN_00d35d88);
  return;
}




void FUN_00d35e74(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00d35eec;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,9,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d35eec(void)

{
  FUN_00d085c4(PTR_s__Item_PiercingSpear__02beb0e0,0,1);
  return;
}




float FUN_00d35f04(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_TensionBow__02beb158,0,1);
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_Bonesaw__02beb028,0,1);
  return fVar1 - fVar2;
}




void FUN_00d35f54(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00d35f04;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,9,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d35fcc(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_Bonesaw__02beb028,0,1);
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_PiercingSpear__02beb0e0,0,1);
  return fVar1 - fVar2;
}

