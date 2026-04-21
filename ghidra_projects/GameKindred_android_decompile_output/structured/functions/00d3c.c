// functions/00d3c — 20 functions
#include "libGameKindred.h"




void FUN_00d3c1a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00d3c1b8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00d3c1cc(undefined8 param_1,undefined8 param_2)

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
  FUN_00d4db40(param_2,uVar3);
  FUN_00d4daf4(param_2,1,0,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d59f54(uVar2,2,6,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3c294(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00d3c2a8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ringo_Ult_DOT");
  plVar4 = (long *)FUN_00d2df94(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Ability_C_Burn_Loop");
  (**(code **)(*plVar4 + 0x28))(0x3ecccccd);
  uVar5 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d59f54(uVar2,2,4,0x19,0);
  lVar3 = FUN_00d4891c(1.0 / fVar6,uVar5,0);
  plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
  local_48 = FUN_00d3c294;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"BurnDamagePerSecond",2);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d3c408(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined4 local_b3;
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    FUN_00d69224(param_1,&local_120);
    lVar5 = FUN_00d66d28(local_120);
    uVar4 = FUN_00ced270(*(undefined4 *)(lVar5 + 0x260));
    if ((uVar4 & 1) != 0) {
      FUN_00d4d9e8(auStack_a8);
      FUN_00d4dabc(auStack_a8,0x8000000);
      lVar6 = FUN_00d9dc3c(0x41400000,lVar5,auStack_a8);
      if (lVar6 == 0) {
        FUN_00d4dca4(auStack_a8,PTR_s_Neutral_JungleMinion_StoreCenter_02beb2e8,0);
        lVar6 = FUN_00d9dc3c(0x41400000,lVar5,auStack_a8);
        if (lVar6 == 0) goto LAB_00d3c5e8;
      }
      lVar5 = FUN_00d5a5c4(lVar6,"Bone_Lamp");
      if (lVar5 != 0) {
        uStack_100 = 0;
        local_108 = 0;
        uStack_110 = 0;
        local_118 = 0;
        local_f8 = 0x6eb29fc;
        local_f0 = 0xffffffff;
        local_e4 = 0xff000000;
        local_dc = _DAT_03218ef8;
        local_d4 = DAT_03218f40;
        local_cc = DAT_03218f48;
        local_ec = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_bc = 2;
        local_b4 = 1;
        local_b3 = 1;
        local_f4 = 0xbf800000;
        uVar2 = FUN_00e6a474("PFXonShopID");
        uVar2 = FUN_0091ed5c("PFXonShopID",uVar2,0x12345678);
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
        local_f0 = *puVar7;
        uStack_100 = FUN_00d5babc(lVar6);
        FUN_00d5a578(lVar6,&local_118,"Bone_Lamp");
        uVar2 = *(undefined4 *)(lVar6 + 0x260);
        uVar3 = FUN_00e6a474("NearestShopGuid");
        uVar3 = FUN_0091ed5c("NearestShopGuid",uVar3,0x12345678);
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
        *puVar7 = uVar2;
      }
    }
  }
LAB_00d3c5e8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3c614(long *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  uVar1 = FUN_00e6a474("NearestShopGuid");
  uVar1 = FUN_0091ed5c("NearestShopGuid",uVar1,0x12345678);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
  lVar3 = FUN_00d9e390(*puVar2);
  if (lVar3 != 0) {
    uVar1 = FUN_00e6a474("PFXonShopID");
    uVar1 = FUN_0091ed5c("PFXonShopID",uVar1,0x12345678);
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
    FUN_00d5a6f4(lVar3,*puVar2);
    return;
  }
  return;
}




void FUN_00d3c6d0(undefined8 param_1)

{
  long lVar1;
  undefined4 *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69e4c(param_1,&uStack_30,0,0,0,&local_38,0);
  FUN_00d69fc0(uStack_30,*local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3c738(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar3 = FUN_00d6eb50();
    lVar4 = FUN_00d66d28(param_1);
    uVar1 = FUN_00d6e9d4(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x298));
  }
  FUN_00d3c794(param_1,uVar1);
  return;
}




void FUN_00d3c794(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00d3cc94);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Shop_AllowStorePurchase_02beba80)
  ;
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3c858(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = FUN_00d74134();
  }
  FUN_00d3c794(param_1,uVar1);
  return;
}




void FUN_00d3c898(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = FUN_00d74134();
  }
  FUN_00d3c8d8(param_1,uVar1);
  return;
}




void FUN_00d3c8d8(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00d3cd44);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Shop_AllowStorePurchase_02beba80)
  ;
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3c99c(void)

{
  return;
}




void FUN_00d3c9a0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_00d63f30();
  plVar7 = (long *)FUN_00d2887c(lVar6 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Shop_CanShopIcon_02beba78);
  lVar6 = FUN_00d64980(param_1);
  plVar7 = (long *)FUN_00d2a160(lVar6 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Shop_CanShopIcon_02beba78);
  iVar3 = FUN_00d6a078(param_1);
  if (iVar3 == 0) {
    uVar4 = FUN_00d74134();
    FUN_00d69fc0(param_1,uVar4);
  }
  lVar6 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onApplyName_02bed4f8;
  uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar5 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar5 * 8 + 0x40) = FUN_00d3c408;
  *(uint *)(lVar6 + 0xf8) = uVar5 + 1;
  lVar6 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onEndName_02bed518;
  uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
  uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar5 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar5 * 8 + 0x40) = FUN_00d3c614;
  *(uint *)(lVar6 + 0xf8) = uVar5 + 1;
  lVar6 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onAfterReApplyName_02bed508;
  uVar4 = FUN_00e6a474(PTR_s_onAfterReApplyName_02bed508);
  uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar5 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar5 * 8 + 0x40) = FUN_00d3c6d0;
  *(uint *)(lVar6 + 0xf8) = uVar5 + 1;
  lVar6 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("PFXonShopID");
  uVar4 = FUN_0091ed5c("PFXonShopID",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
  lVar6 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("NearestShopGuid");
  uVar4 = FUN_0091ed5c("NearestShopGuid",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 8);
  FUN_00d3e534();
  uVar8 = FUN_00d2a79c();
  FUN_00d42654(auStack_60,uVar8);
  FUN_00d41de0(uVar8,1);
  FUN_00d3e534();
  uVar8 = FUN_00d2965c();
  FUN_00d42654(auStack_60,uVar8);
  uVar5 = FUN_00d3e540(uVar8);
  lVar6 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("PFXonShopID");
  uVar4 = FUN_0091ed5c("PFXonShopID",uVar4,0x12345678);
  puVar9 = (uint *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
  *puVar9 = uVar5 & 0xffff;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3cc94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67b78();
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar3);
  cVar2 = FUN_00d55870(uVar3);
  FUN_00d4daf4(param_2,1,cVar2 == '\0',1,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4db48(0x40e66666,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3cd44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67b78();
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar3);
  cVar2 = FUN_00d55870(uVar3);
  FUN_00d4daf4(param_2,1,cVar2 == '\0',1,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4db48(0x41733333,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3cdf4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&uStack_98,&local_a0);
  lVar7 = *(long *)(local_a0 + 0x20);
  lVar5 = FUN_00d66d28(uStack_98);
  uVar6 = FUN_00daa578(local_a0,lVar5);
  if ((((uVar6 & 1) != 0) && ((*(byte *)(local_a0 + 0xc) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(local_a0 + 0x20) + 0x2f4) >> 4 & 1) != 0)) {
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar2 = *(undefined4 *)(lVar7 + 0x260);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar2,"Buff_MinionShreddedByTurret",uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3cecc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3cdf4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d3cf3c(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_b8);
  lVar4 = FUN_00d66d28(local_b8);
  uVar2 = FUN_00e6a474("time_last_barrier_disabled");
  uVar2 = FUN_0091ed5c("time_last_barrier_disabled",uVar2,0x12345678);
  pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  lVar7 = *(long *)(lVar4 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  uVar6 = FUN_00d6bbac(lVar7,DAT_0315c904,0);
  if ((uVar6 & 1) == 0) {
    FUN_00d55794(lVar4,auStack_c8,0);
    FUN_00d4d9e8(auStack_b0);
    FUN_00d4daf4(auStack_b0,0,1,0,lVar4);
    FUN_00d4db48(*(float *)(*(long *)(lVar4 + 0x38) + 0x128) + 1.0,auStack_b0,auStack_c8);
    FUN_00d4dac4(auStack_b0,0x18);
    iVar3 = FUN_00d9e840(auStack_b0,auStack_50,1,0);
    if (iVar3 != 0) {
      fVar8 = (float)FUN_009bc24c();
      *pfVar5 = fVar8;
      FUN_00d66d34(local_b8);
      lVar7 = FUN_00d7bcfc();
      if (lVar7 != 0) {
        FUN_00d7f9ec(lVar4,lVar7);
      }
      goto LAB_00d3d144;
    }
  }
  fVar8 = (float)FUN_009bc24c();
  FUN_00d66d34(local_b8);
  lVar7 = FUN_00d7bcfc();
  if (lVar7 == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)FUN_00d7bce4(lVar7);
    if (800.0 <= fVar9) goto LAB_00d3d144;
  }
  if (*pfVar5 + 3.0 < fVar8) {
    fVar8 = (float)FUN_00d67b0c(local_b8);
    fVar8 = (float)NEON_fminnm(fVar9 + fVar8 * 200.0,0x44480000);
    if (lVar7 == 0) {
      uVar2 = FUN_00d66d34(local_b8);
      FUN_00d7f914(fVar8,lVar4,lVar4,4,uVar2);
    }
    else {
      FUN_00d7fa78(fVar8 - fVar9,lVar4,lVar4,lVar7);
    }
  }
LAB_00d3d144:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

