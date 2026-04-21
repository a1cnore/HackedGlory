// functions/00d2e — 11 functions
#include "libGameKindred.h"




void FUN_00d2e034(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d426b0(*param_1);
  uVar2 = FUN_00d59f54(uVar1,2,8,0x19,0);
  *param_2 = uVar2;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00d2e07c(float param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d041e4(param_1 * -0.16666667,auStack_60,*(undefined4 *)(param_2 + 0x260),0x12,1,0,0xffffffff
              );
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2e0f4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined8 local_98;
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar3 = FUN_00d66d28(local_98);
  lVar4 = FUN_00d67c60(local_98);
  uVar2 = FUN_00e6a474("rampTimer");
  uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  lVar4 = FUN_00d67c60(local_98);
  uVar2 = FUN_00e6a474("disableTimer");
  uVar2 = FUN_0091ed5c("disableTimer",uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  lVar4 = FUN_00d67c60(local_98);
  uVar2 = FUN_00e6a474("__VAR1_FLOAT__");
  uVar2 = FUN_0091ed5c("__VAR1_FLOAT__",uVar2,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  if (*pfVar6 <= 0.01) {
    if (*pfVar5 < 3.0) {
      *puVar7 = 0x3f800000;
      fVar8 = (float)FUN_00d67b0c(local_98);
      FUN_00d041e4((fVar8 * 0.5) / 3.0,auStack_90,*(undefined4 *)(lVar3 + 0x260),0x12,1,0,0xffffffff
                  );
      FUN_00ce20fc(auStack_90);
      fVar8 = (float)FUN_00d67b0c(local_98);
      *pfVar5 = fVar8 + *pfVar5;
    }
  }
  else {
    fVar8 = (float)FUN_00d67b0c(local_98);
    *pfVar6 = *pfVar6 - fVar8;
    *puVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2e2f4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_50);
  uVar3 = FUN_00d66d28(local_50);
  lVar4 = FUN_00d67c60(local_50);
  uVar2 = FUN_00e6a474("rampTimer");
  uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
  FUN_00d2e07c(*puVar5,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2e3b0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar3 = FUN_00d66d28(local_50);
  uVar4 = FUN_00daa578(local_58,uVar3);
  if ((uVar4 & 1) == 0) {
    if (((*(long *)(local_58 + 0x28) == 0) ||
        ((*(byte *)(*(long *)(local_58 + 0x28) + 0x2f4) >> 4 & 1) == 0)) &&
       ((*(long *)(local_58 + 0x20) == 0 ||
        ((*(byte *)(*(long *)(local_58 + 0x20) + 0x2f4) >> 4 & 1) == 0)))) {
      lVar5 = FUN_00d67c60(local_50);
      uVar2 = FUN_00e6a474("rampTimer");
      uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
      FUN_00d2e07c(*puVar6,uVar3);
      lVar5 = FUN_00d67c60(local_50);
      uVar2 = FUN_00e6a474("rampTimer");
      uVar2 = FUN_0091ed5c("rampTimer",uVar2,0x12345678);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
      *puVar6 = 0;
      uVar4 = FUN_00daa58c(local_58,uVar3);
      if ((uVar4 & 1) != 0) {
        lVar5 = FUN_00d67c60(local_50);
        uVar2 = FUN_00e6a474("disableTimer");
        uVar2 = FUN_0091ed5c("disableTimer",uVar2,0x12345678);
        puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
        *puVar6 = 0x40a00000;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2e548(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("rampTimer");
    uVar4 = FUN_0091ed5c("rampTimer",uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("disableTimer");
    uVar4 = FUN_0091ed5c("disableTimer",uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("rampTimer");
    uVar4 = FUN_0091ed5c("rampTimer",uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = 0;
    lVar6 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("disableTimer");
    uVar4 = FUN_0091ed5c("disableTimer",uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = 0;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2e0f4;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
    uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2e3b0;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onEndName_02bed518;
    uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2e2f4;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 8);
  FUN_00d3e534();
  uVar8 = FUN_00d2965c();
  FUN_00d42654(auStack_60,uVar8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2e7f8(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69224(param_1,&local_80);
    lVar4 = FUN_00d66d28(local_80);
    fVar7 = (float)FUN_009bc24c();
    uVar2 = FUN_00e6a474("timeOfLastDamageExchange");
    uVar2 = FUN_0091ed5c("timeOfLastDamageExchange",uVar2,0x12345678);
    pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    fVar10 = *pfVar5;
    fVar8 = (float)FUN_00d085c4(PTR_s__Item_Lifespring__02beb0c0,1,1);
    if (fVar10 + fVar8 < fVar7) {
      lVar6 = *(long *)(lVar4 + 0x40);
      fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
              (*(float *)(lVar6 + 0x38) +
              *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
      if (DAT_0315ce30 <= fVar7) {
        fVar7 = DAT_0315ce30;
      }
      fVar10 = *(float *)(lVar6 + 0x308);
      fVar8 = DAT_0315cd70;
      if (DAT_0315cd70 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar7 = (float)FUN_00d085c4(PTR_s__Item_Lifespring__02beb0c0,0,1);
      fVar9 = (float)FUN_00d67b0c(local_80);
      if (1.0 < fVar9 * fVar7 * (fVar8 - fVar10)) {
        FUN_00d043c0(auStack_78,*(undefined4 *)(lVar4 + 0x260),0,0);
        FUN_00ce20fc(auStack_78);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2e96c(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_40,&local_48);
  lVar3 = FUN_00d66d28(local_40);
  if ((((*(int *)(local_48 + 0x10) == *(int *)(lVar3 + 0x260)) && (*(long *)(local_48 + 0x20) != 0))
      && ((*(byte *)(*(long *)(local_48 + 0x20) + 0x2f4) & 1) != 0)) ||
     (((*(int *)(local_48 + 0x18) == *(int *)(lVar3 + 0x260) && (*(long *)(local_48 + 0x28) != 0))
      && ((*(byte *)(*(long *)(local_48 + 0x28) + 0x2f4) & 1) != 0)))) {
    uVar5 = FUN_009bc24c();
    uVar2 = FUN_00e6a474("timeOfLastDamageExchange");
    uVar2 = FUN_0091ed5c("timeOfLastDamageExchange",uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *puVar4 = uVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2ea58(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  FUN_00d67b04(0x3f000000);
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("timeOfLastDamageExchange");
  uVar3 = FUN_0091ed5c("timeOfLastDamageExchange",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("timeOfLastDamageExchange");
  uVar3 = FUN_0091ed5c("timeOfLastDamageExchange",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar3);
  *puVar5 = 0;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2e7f8;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2e96c;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d2ebc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_Flare__02beb088);
  FUN_00d08524(uVar2,0,1);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Revealed_02bebaf8);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_b0,uVar2);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x80000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  uVar2 = FUN_00d66d28(param_1);
  FUN_00d55794(uVar2,auStack_c0,0);
  lVar3 = FUN_00d66d28(param_1);
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar6 = (*(float *)(lVar3 + 0x1e4) + 1.0) *
          (*(float *)(lVar3 + 0x7c) + *(float *)(lVar3 + 0x130) * (*(float *)(lVar3 + 0x298) + 1.0))
  ;
  if (DAT_0315ce74 <= fVar6) {
    fVar6 = DAT_0315ce74;
  }
  fVar7 = DAT_0315cdb0._4_4_;
  if (DAT_0315cdb0._4_4_ <= fVar6) {
    fVar7 = fVar6;
  }
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_ScoutTrap__02beb108);
  fVar6 = (float)FUN_00d08524(uVar2,4,1);
  FUN_00d4db48(fVar6 + fVar7 + -0.1,auStack_98,auStack_c0);
  FUN_00d3e534();
  uVar2 = FUN_00d3940c();
  FUN_00d42654(auStack_b0,uVar2);
  FUN_00d3fad8(uVar2,auStack_98,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d2a994();
  FUN_00d42654(auStack_b0,uVar2);
  FUN_00d46fc0(uVar2,PTR_s_Buff_Stealth_02bebaf0);
  FUN_00d3e534();
  uVar2 = FUN_00d2cb84();
  FUN_00d42654(auStack_b0,uVar2);
  FUN_00d3e888(0xbf800000,0,0,uVar2,PTR_s_Buff_GloballyVisible_02bebad8,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_b0,uVar2);
  lVar3 = FUN_00d65010(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"FlareHoverPoint");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Flare_Proj_E");
  (**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Flare_Proj_A");
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Flare_Ring_E");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Flare_Ring_A");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00d2df94(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"build://Sounds/Items/item_flare_loop.mp3");
  lVar3 = FUN_00d09310();
  FUN_00d093b8(*(undefined4 *)(lVar3 + 0x14));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"build://Sounds/Items/item_flare_end.mp3");
  lVar5 = FUN_00d09310();
  FUN_00d093b8(*(undefined4 *)(lVar5 + 0x18));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00d394e4(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2ef3c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,PTR_s__Item_FlareLoader__02beb090);
  FUN_00d08524(uVar1,0,1);
  FUN_00d67d04(param_1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Revealed_02bebaf8);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"FlareHoverPoint");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Flare_Proj_E");
  (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Flare_Proj_A");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Flare_Ring_E");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Flare_Ring_A");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"build://Sounds/Items/item_flare_loop.mp3");
  lVar2 = FUN_00d09310();
  FUN_00d093b8(*(undefined4 *)(lVar2 + 0x14));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"build://Sounds/Items/item_flare_end.mp3");
  lVar4 = FUN_00d09310();
  FUN_00d093b8(*(undefined4 *)(lVar4 + 0x18));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d394e4(lVar2 + 0x10);
  return;
}

