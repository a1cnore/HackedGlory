// functions/00d37 — 28 functions
#include "libGameKindred.h"




void FUN_00d3714c(void)

{
  FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,0,1);
  return;
}




void FUN_00d37164(void)

{
  FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,8,1);
  return;
}




void FUN_00d3717c(void)

{
  FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,1,1);
  return;
}




void FUN_00d37194(void)

{
  FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,2,1);
  return;
}




void FUN_00d371ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_78 [2];
  undefined4 local_70;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_68 = FUN_00d373ec;
  local_60 = 2;
  FUN_00d47690(uVar3,1,&local_68);
  plVar4 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Pulseweave_TriggerRing");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_68._0_4_ = 0x3e99999a;
  local_60 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_68);
  local_78[0] = 0x40a00000;
  local_70 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,local_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar4 = (long *)FUN_00d2b778(lVar2);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x40a00000);
  local_60 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_68);
  plVar4 = (long *)FUN_00d2b818(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"DAMAGE_BASE",PTR_s__Item_Pulseweave__02beb0f0);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Item_Pulseweave_Slow_02beb900);
  local_68 = FUN_00d37404;
  local_60 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Pulseweave_Explosion");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3e99999a);
  local_60 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_68);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d373ec(void)

{
  FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,3,1);
  return;
}




void FUN_00d37404(void)

{
  FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,7,1);
  return;
}




void FUN_00d3741c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    fVar3 = (float)FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,5,1);
    fVar5 = *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
    fVar4 = (float)FUN_00d085c4(PTR_s__Item_Pulseweave__02beb0f0,6,1);
    local_68[0] = fVar3 + fVar5 * fVar4;
    local_60 = 1;
    FUN_00d42c70(param_1,local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00d374dc(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar2 = FUN_00d66d28(*param_1);
  uVar3 = FUN_00d44be0(uVar2,PTR_s_Buff_Item_Stormcrown_02beb908);
  ppuVar1 = &PTR_s__Item_Stormcrown__02beb140;
  if ((uVar3 & 1) == 0) {
    ppuVar1 = &PTR_s__Item_StormguardBanner__02beb148;
  }
  auVar5 = FUN_00d09208(uVar2,*ppuVar1,0,3);
  if ((*(ushort *)(*(long *)(param_1[0x85] + 0x20) + 0x2f4) & 0x1011) != 0) {
    ppuVar1 = &PTR_s__Item_Stormcrown__02beb140;
    if ((uVar3 & 1) == 0) {
      ppuVar1 = &PTR_s__Item_StormguardBanner__02beb148;
    }
    fVar4 = (float)FUN_00d085c4(*ppuVar1,1,1);
    auVar5 = ZEXT416((uint)(auVar5._0_4_ * fVar4));
  }
  return auVar5;
}




void FUN_00d37594(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00d66d28(*param_1);
  uVar3 = FUN_00d44be0(uVar2,PTR_s_Buff_Item_Stormcrown_02beb908);
  ppuVar1 = &PTR_s__Item_Stormcrown__02beb140;
  if ((uVar3 & 1) == 0) {
    ppuVar1 = &PTR_s__Item_StormguardBanner__02beb148;
  }
  FUN_00d085c4(*ppuVar1,2,1);
  return;
}




void FUN_00d375dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  uVar2 = FUN_00d4bc38();
  lVar3 = FUN_00d4bcf0(uVar2,0x300);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d396a4(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 0xdb161949;
  lVar3 = FUN_00d29e8c(lVar3 + 0xa0);
  lVar4 = FUN_00d2a370(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Item_Stormcrown_02beb908;
  FUN_00d2cf2c(lVar3);
  plVar5 = (long *)FUN_00d2b818(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  local_48 = FUN_00d374dc;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,2,1);
  plVar5 = (long *)FUN_00d2cf7c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Item_StormguardBannerHitPfx_02beb918);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00d2b6d8(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"StormguardBanner");
  local_48 = FUN_00d37594;
  local_40 = 4;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0x58))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37760(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tension_Proc");
                    /* WARNING: Could not recover jumptable at 0x00d377ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00d377b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  uVar2 = FUN_00d4bc38();
  lVar3 = FUN_00d4bcf8(uVar2,0x100000);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d396a4(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(undefined4 *)(lVar4 + 8) = 0xdb161949;
  FUN_00d2cf2c(lVar3);
  plVar5 = (long *)FUN_00d2b818(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  local_48 = FUN_00d374dc;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,2,1);
  plVar5 = (long *)FUN_00d2cf7c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Item_StormguardBannerHitPfx_02beb918);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00d2b6d8(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"StormguardBanner");
  local_48 = FUN_00d37594;
  local_40 = 4;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0x58))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37914(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00d37a3c;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x24,2,&local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00d37a54;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x22,0,&local_48);
  uVar4 = FUN_00d64c38(param_1);
  uVar4 = FUN_00d4c1e8(uVar4,6);
  FUN_00d4c1e8(uVar4,3);
  FUN_00d4c200();
  uVar4 = FUN_00d4c228();
  lVar2 = FUN_00d4c2e0(uVar4,1);
  FUN_00d39c74(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_CapacitorPlate_Lockout_02beb928);
  local_48 = FUN_00d37a6c;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37a3c(void)

{
  FUN_00d085c4(PTR_s__Item_CapacitorPlate__02beb048,0,1);
  return;
}




void FUN_00d37a54(void)

{
  FUN_00d085c4(PTR_s__Item_CapacitorPlate__02beb048,1,1);
  return;
}




void FUN_00d37a6c(void)

{
  FUN_00d085c4(PTR_s__Item_CapacitorPlate__02beb048,4,1);
  return;
}




void FUN_00d37a84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00d37af0;
  local_30 = 2;
  FUN_00d47690(uVar3,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37af0(void)

{
  FUN_00d085c4(PTR_s__Item_CapacitorPlate__02beb048,2,1);
  return;
}




void FUN_00d37b08(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_CapacitorPlate_SpeedBo_02beb930);
  local_38 = FUN_00d37b8c;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37b8c(void)

{
  FUN_00d085c4(PTR_s__Item_CapacitorPlate__02beb048,3,1);
  return;
}




void FUN_00d37ba4(void)

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
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Item_TornadoTrigger_Movespe_02beb940);
  local_38 = FUN_00d37c38;
  local_30 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37c38(void)

{
  FUN_00d085c4(PTR_s__Item_TornadoTrigger__02beb160,1,1);
  return;
}




void FUN_00d37c50(undefined8 param_1)

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
  local_38 = FUN_00d37cdc;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,2,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37cdc(void)

{
  FUN_00d085c4(PTR_s__Item_TornadoTrigger__02beb160,0,1);
  return;
}




void FUN_00d37cf4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  undefined1 auStack_188 [16];
  undefined8 local_178;
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [96];
  long local_e8 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_178);
  uVar6 = FUN_00d66d28(local_178);
  uVar2 = FUN_00e6a474("chargeupTimer");
  uVar2 = FUN_0091ed5c("chargeupTimer",uVar2,0x12345678);
  pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  fVar13 = *pfVar7;
  if (fVar13 <= 0.0) {
    FUN_00d4d9e8(auStack_148);
    uVar8 = FUN_00d66d28(local_178);
    FUN_00d55794(uVar8,auStack_188,0);
    FUN_00d4db40(auStack_148,uVar6);
    FUN_00d4daf4(auStack_148,1,0,0,0);
    FUN_00d4db48(0x3ff33333,auStack_148,auStack_188);
    FUN_00d4dd1c(auStack_148,1);
    FUN_00d4dabc(auStack_148,1);
    uVar3 = FUN_00d9e840(auStack_148,local_e8,0x10,0);
    uVar11 = (ulong)uVar3;
    if (uVar3 != 0) {
      iVar4 = FUN_00d6a078(local_178);
      lVar9 = FUN_00d9e390();
      if (lVar9 == 0) goto LAB_00d37e90;
      plVar12 = local_e8;
      do {
        if (*(int *)(*plVar12 + 0x260) == iVar4) {
          lVar10 = FUN_00d66d28(local_178);
          uVar2 = *(undefined4 *)(lVar10 + 0x260);
          uVar5 = FUN_00d66d34(local_178);
          FUN_00d009d0(auStack_170,uVar2,uVar5);
          FUN_00ce20fc(auStack_170);
          FUN_008ff6ec(uVar6,0,lVar9);
        }
        uVar11 = uVar11 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar11 != 0);
    }
    fVar13 = *pfVar7;
  }
  *pfVar7 = fVar13 + -1.0;
LAB_00d37e90:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d37ec4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  lVar4 = FUN_00d67c60();
  uVar3 = FUN_00e6a474("chargeupTimer");
  uVar3 = FUN_0091ed5c("chargeupTimer",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("chargeupTimer");
  uVar3 = FUN_0091ed5c("chargeupTimer",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar3);
  *puVar5 = 0x40a00000;
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar4 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar4 + 0xf8);
    *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d37cf4;
    *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
    FUN_00d67b04(0x3e4ccccd,param_1);
    return;
  }
  return;
}




void FUN_00d37ff4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d67d04(0x42700000);
  FUN_00d67b04(0x3dcccccd,param_1);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d329c0;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x18);
  FUN_00d3e534();
  uVar6 = FUN_00d29db0();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

