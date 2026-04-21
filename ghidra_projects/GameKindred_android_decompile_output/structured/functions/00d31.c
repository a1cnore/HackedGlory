// functions/00d31 — 28 functions
#include "libGameKindred.h"




void FUN_00d31188(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d634b4();
  lVar1 = FUN_00d4a9f0();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d396a4(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x2e363791;
  plVar3 = (long *)FUN_00d2887c(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_RooksDecree_AttackBuff_02beb6e8);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d31200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_RooksDecree_AttackBuff_02beb6e8);
  return;
}




void FUN_00d31204(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,0,0,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4db48(0x41400000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d312b4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d67c60();
  uVar2 = FUN_00e6a474("Consumed");
  uVar2 = FUN_0091ed5c("Consumed",uVar2,0x12345678);
  (**(code **)(*(long *)(lVar3 + 0x100) + 8))(lVar3 + 0x100,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("Consumed");
  uVar2 = FUN_0091ed5c("Consumed",uVar2,0x12345678);
  puVar4 = (undefined1 *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x10))(lVar3 + 0x100,uVar2);
  *puVar4 = 0;
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,5);
  FUN_00d4bc38();
  uVar5 = FUN_00d4bc10();
  lVar3 = FUN_00d4bce8(uVar5,1);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar6 = FUN_00d39744(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(char **)(lVar6 + 0x20) = "Consumed";
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 8) = 1;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  uVar5 = FUN_00d31490(lVar3);
  FUN_00d9ca38(uVar5,FUN_00d31204);
  plVar7 = (long *)FUN_00d2b7c8(lVar3);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))();
  (**(code **)(*plVar7 + 0x30))(plVar7,0x29);
  plVar7 = (long *)FUN_00d2b6d8(lVar3);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"RooksDecree");
  local_58 = FUN_00d314e0;
  local_50 = 2;
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  uVar5 = FUN_00d314f8(lVar3);
  lVar6 = FUN_00d98a14(uVar5,"Consumed");
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 4;
  *(undefined1 *)(lVar6 + 0x1c) = 1;
  plVar7 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Item_RooksDecree_AttackBuff_02beb6e8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d31490(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0c90();
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




void FUN_00d314e0(void)

{
  FUN_00d085c4(PTR_s__Item_RooksDecree__02beb100,2,1);
  return;
}




void FUN_00d314f8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f644();
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




void FUN_00d31548(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d67b84(*param_1);
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_RooksDecree__02beb100,1,1);
  fVar3 = (float)FUN_00d085c4(PTR_s__Item_RooksDecree__02beb100,0,1);
  *param_2 = fVar2 + fVar3 * (float)uVar1;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00d315c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  *param_3 = "CenterBody";
  return;
}




void FUN_00d31604(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d31630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00d31548);
  return;
}




void FUN_00d31634(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d634b4();
  lVar1 = FUN_00d4a9f0();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d396a4(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x704bbe25;
  plVar3 = (long *)FUN_00d2887c(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Aftershock_attackBuff_02beb700);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d316ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Aftershock_attackBuff_02beb700);
  return;
}




void FUN_00d316b0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc48(uVar2,4);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d396a4(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(undefined4 *)(lVar4 + 8) = 0x704bbe25;
  plVar5 = (long *)FUN_00d2b6d8(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Aftershock");
  local_70 = FUN_00d318f8;
  local_68 = 2;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
  (**(code **)(*plVar5 + 0x58))();
  FUN_00d2cf2c(lVar3);
  plVar5 = (long *)FUN_00d2b818(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x48))(plVar5,"PCT_MAX_HEALTH",PTR_s__Item_Aftershock__02beb008);
  plVar5 = (long *)FUN_00d2cf7c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Item_ShowAftershockHitEffec_02beb6a8);
  local_70 = (code *)CONCAT44(local_70._4_4_,0x3dcccccd);
  local_68 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
  FUN_00d2a320(lVar3);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_70,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d294ac();
  FUN_00d42654(&local_70,uVar2);
  uVar2 = FUN_00d47dec(uVar2,"Bone_LeftHand");
  FUN_00da2040(uVar2,"Effect_AfterShock_Armed");
  FUN_00d3e534();
  uVar2 = FUN_00d294ac();
  FUN_00d42654(&local_70,uVar2);
  uVar2 = FUN_00d47dec(uVar2,"Bone_RightHand");
  FUN_00da2040(uVar2,"Effect_AfterShock_Armed");
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_70,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(&local_70,uVar2);
  lVar3 = FUN_00d64980(param_1);
  plVar5 = (long *)FUN_00d2b6d8(lVar3 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Aftershock");
  local_70 = FUN_00d318f8;
  local_68 = 2;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d318f8(void)

{
  FUN_00d085c4(PTR_s__Item_Aftershock__02beb008,0,1);
  return;
}




void FUN_00d31910(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_SprintBoots__02beb138);
  uVar4 = FUN_00d08524(uVar2,0,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d472ec(uVar4,uVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d319bc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_TravelBoots__02beb168);
  uVar4 = FUN_00d08524(uVar2,0,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d472ec(uVar4,uVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d31a68(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  long local_78;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_70,&local_78);
  iVar1 = *(int *)(local_78 + 0x10);
  lVar4 = FUN_00d66d28(local_70);
  if ((((iVar1 == *(int *)(lVar4 + 0x260)) && (*(long *)(local_78 + 0x20) != 0)) &&
      (uVar5 = FUN_00d42e7c(), (uVar5 & 1) != 0)) && ((*(byte *)(local_78 + 0xc) >> 4 & 1) == 0)) {
    uVar6 = FUN_00d6eb50();
    uVar6 = FUN_00d6eb5c(uVar6,PTR_s__Item_JourneyBoots__02beb0b8);
    uVar6 = FUN_00d08524(uVar6,4,1);
    lVar4 = FUN_00d66d28(local_70);
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar7 = FUN_00d6eb50();
    uVar3 = FUN_00d6e9d4(uVar7,PTR_s__Item_JourneyBoots__02beb0b8);
    uVar5 = FUN_00d73590(lVar4,uVar3);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_00d73004(lVar4,uVar3);
      fVar12 = (float)FUN_00d734b0(lVar4,uVar3);
      if ((float)uVar6 < fVar12) {
        uVar11 = 0x811c9dc5;
        lVar4 = FUN_00d66d28(local_70);
        uVar9 = (uint)(byte)*PTR_s_Ability__Item__JourneyBoots_02beaf20;
        pbVar8 = PTR_s_Ability__Item__JourneyBoots_02beaf20;
        if (*PTR_s_Ability__Item__JourneyBoots_02beaf20 != 0) {
          do {
            uVar10 = (uint)pbVar8[1];
            uVar11 = (uVar11 ^ uVar9) * 0x1000193;
            uVar9 = uVar10;
            pbVar8 = pbVar8 + 1;
          } while (uVar10 != 0);
        }
        FUN_00d04e08(uVar6,auStack_68,*(undefined4 *)(lVar4 + 0x260),uVar11,1);
        FUN_00ce20fc(auStack_68);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d31bf4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d31a68;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar6 = FUN_00d6eb50();
  uVar6 = FUN_00d6eb5c(uVar6,PTR_s__Item_JourneyBoots__02beb0b8);
  uVar7 = FUN_00d08524(uVar6,0,1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x30);
  FUN_00d3e534();
  uVar6 = FUN_00d29584();
  FUN_00d42654(auStack_60,uVar6);
  FUN_00d472ec(uVar7,uVar6,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d31d00(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_HalcyonChargers__02beb0a8);
  uVar4 = FUN_00d08524(uVar2,0,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d472ec(uVar4,uVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d31dac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_40 = 2;
  local_48 = param_2;
  FUN_00d47690(uVar3,1,&local_48);
  plVar4 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d31e48(undefined8 param_1)

{
  FUN_00d31dac(param_1,FUN_00d31e54);
  return;
}




void FUN_00d31e54(void)

{
  FUN_00d085c4(PTR_s__Item_SprintBoots__02beb138,1,1);
  return;
}




void FUN_00d31e6c(undefined8 param_1)

{
  FUN_00d31dac(param_1,FUN_00d31e78);
  return;
}




void FUN_00d31e78(void)

{
  FUN_00d085c4(PTR_s__Item_TravelBoots__02beb168,2,1);
  return;
}




void FUN_00d31e90(undefined8 param_1)

{
  FUN_00d31dac(param_1,FUN_00d31e9c);
  return;
}




void FUN_00d31e9c(void)

{
  FUN_00d085c4(PTR_s__Item_JourneyBoots__02beb0b8,2,1);
  return;
}




void FUN_00d31eb4(undefined8 param_1)

{
  FUN_00d31dac(param_1,FUN_00d31ec0);
  return;
}




void FUN_00d31ec0(void)

{
  FUN_00d085c4(PTR_s__Item_HalcyonChargers__02beb0a8,2,1);
  return;
}




int FUN_00d31ed8(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_0315ced0 <= fVar2) {
    fVar2 = DAT_0315ced0;
  }
  fVar3 = DAT_0315ce10;
  if (DAT_0315ce10 <= fVar2) {
    fVar3 = fVar2;
  }
  return (int)fVar3;
}




void FUN_00d31f48(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  code *local_90;
  undefined4 local_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_WeaponInfusion__02beb180);
  fVar5 = (float)FUN_00d08524(uVar2,2,1);
  fVar6 = (float)FUN_00d08524(uVar2,1,1);
  fVar12 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,4,1);
  fVar6 = (float)FUN_00d08524(uVar2,3,1);
  fVar11 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,6,1);
  fVar6 = (float)FUN_00d08524(uVar2,5,1);
  fVar10 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,8,1);
  fVar6 = (float)FUN_00d08524(uVar2,7,1);
  fVar9 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,1,1);
  fVar5 = fVar5 - fVar12;
  fVar6 = (float)FUN_00d08524(uVar2,3,1);
  fVar6 = fVar6 - fVar11;
  fVar7 = (float)FUN_00d08524(uVar2,5,1);
  fVar7 = fVar7 - fVar10;
  fVar8 = (float)FUN_00d08524(uVar2,7,1);
  fVar8 = fVar8 - fVar9;
  lVar3 = FUN_00d64080(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_90 = FUN_00d31ed8;
  local_88 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_90);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(&local_90,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  FUN_00da2040(uVar2,"Effect_Crisis_Weapon");
  uVar2 = FUN_00da2058(0x40400000);
  FUN_00da2070(uVar2,1);
  FUN_00da20b8(0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar5,uVar2,4,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar6,uVar2,0xf,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar7,uVar2,7,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar8,uVar2,8,1,0,0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d294ac();
  FUN_00d42654(&local_90,uVar2);
  uVar2 = FUN_00d47dec(uVar2,"Bone_CenterMass");
  FUN_00da2040(uVar2,"Effect_Crisis_Weapon_Con");
  FUN_00da20b8(0);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar12,uVar2,4,1);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar11,uVar2,0xf,1);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar10,uVar2,7,1);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar9,uVar2,8,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(&local_90,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  FUN_00da2040(uVar2,"Effect_Crisis_Weapon");
  uVar2 = FUN_00da2058(0x40400000);
  FUN_00da2070(uVar2,1);
  FUN_00da20b8(0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,lVar3 + 0x18);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar5,uVar2,4,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar6,uVar2,0xf,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar7,uVar2,7,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar8,uVar2,8,1,0,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

