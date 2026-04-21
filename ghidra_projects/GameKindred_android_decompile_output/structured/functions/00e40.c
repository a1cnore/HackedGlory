// functions/00e40 — 17 functions
#include "libGameKindred.h"




void FUN_00e40034(undefined8 param_1)

{
  FUN_00e3fbe4(param_1,PTR_s_Buff_Skye_LineMissileVolley_Expl_02bf1038);
  return;
}




void FUN_00e40040(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  uVar3 = FUN_00e406e4(lVar2 + 0x10);
  uVar3 = FUN_00d9d4d4(uVar3,0,1,0);
  FUN_00d9d4f0(uVar3,FUN_00e3ff78);
  uVar3 = FUN_00d9d33c(0x3f800000);
  FUN_00d9d344(uVar3,0x40000);
  plVar4 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e3ff64;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar3 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar3,0);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00e406e4(lVar2);
  uVar3 = FUN_00d9d4d4(uVar3,0,1,0);
  FUN_00d9d4f0(uVar3,FUN_00e3ff78);
  uVar3 = FUN_00d9d33c(0x3f800000);
  FUN_00d9d344(uVar3,0x40000);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Skye_HitByMissileVolley_02bf1028)
  ;
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b818(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x30))(plVar4,4);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e401e4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  fVar6 = (float)FUN_00d59f54(uVar3,4,3,0x19,0);
  FUN_00d67d04(fVar6 + -0.2,param_1);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 0x20);
  FUN_00d3e534();
  uVar5 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar5);
  FUN_00d3e534();
  uVar5 = FUN_00d2cb84();
  FUN_00d42654(auStack_50,uVar5);
  puVar2 = PTR_s_Buff_Skye_MissileVolley_PlayMiss_02bf1048;
  fVar6 = (float)FUN_00d59f54(uVar3,4,4,0x19,0);
  FUN_00d3e888(fVar6 + 0.2,0,0,uVar5,puVar2,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40314(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_60);
  fVar7 = (float)FUN_00d67b5c(local_60);
  if (0.2 < fVar7) {
    uVar3 = FUN_00d66d28(local_60);
    plVar4 = (long *)FUN_00d5bae0();
    if (plVar4 != (long *)0x0) {
      iVar2 = rand();
      puVar6 = (&PTR_s_Sound_Skye_Ability_C_Hit_1_0281fdb0)[iVar2 % 6];
      FUN_00d5cf60(uVar3);
      uVar3 = FUN_00d9e390();
      lVar5 = FUN_00d09310();
      uVar8 = FUN_00d09980(*(undefined4 *)(lVar5 + 0x214));
      uVar3 = FUN_00d5babc(uVar3);
      (**(code **)(*plVar4 + 0x100))(uVar8,plVar4,puVar6,0,1,0xffffffff,1,uVar3);
    }
  }
  fVar7 = (float)FUN_00d67b34(local_60);
  if (0.2 < fVar7) {
    FUN_00e3f8e0(0,param_1,"Effect_Skye_C_Explosion","Effect_Skye_C_Explosion",1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4045c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_num_pfx_spawned_02bf0fa8;
    uVar3 = FUN_00e6a474(PTR_s_num_pfx_spawned_02bf0fa8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar3);
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_num_pfx_spawned_02bf0fa8;
    uVar3 = FUN_00e6a474(PTR_s_num_pfx_spawned_02bf0fa8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
    *puVar6 = 0;
    FUN_00d67b04(0x3e4ccccd,param_1);
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e40314;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e4058c(undefined8 param_1)

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
  local_38[0] = FUN_00d59f54(uVar2,4,6,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40604(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_00d4403c(param_1,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Skye_Withdraw1");
  lVar3 = FUN_00d09310();
  FUN_00d09980(*(undefined4 *)(lVar3 + 0x218));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_wheel_spin");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  lVar1 = FUN_00d6624c(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Skye_Withdraw2");
  lVar1 = FUN_00d09310();
  FUN_00d09980(*(undefined4 *)(lVar1 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x00e406e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e406e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0f44();
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




void FUN_00e40734(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x40200000;
  local_38 = 1;
  FUN_00d42a20(0,0x3f800000,param_1,local_40);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  FUN_00d2a320(lVar3 + 0x10);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_40,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d29a68();
  FUN_00d42654(local_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e407dc(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar4 = FUN_00d66d28(local_50);
  FUN_00d69224(param_1,&local_60);
  lVar5 = FUN_00d66d28(local_60);
  lVar5 = *(long *)(lVar5 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar6 = FUN_00d6bbac(lVar5,DAT_031b8e18,0);
  if (((uVar6 & 1) == 0) && (uVar6 = FUN_00daa58c(local_58,uVar4), (uVar6 & 1) != 0)) {
    uVar2 = *(ushort *)(*(long *)(local_58 + 0x20) + 0x88) & 0x1f;
    if ((uVar2 == 0x1f) ||
       (1 < *(ushort *)(*(long *)(local_58 + 0x20) + (ulong)uVar2 * 0x38 + 0x90) - 3)) {
      uVar2 = FUN_00d66cf4(local_50);
      uVar3 = FUN_00d66cfc(local_50);
      if ((0.0 < (float)uVar2 + -3.0) && (0.0 < (float)uVar3 + -3.0)) {
        fVar7 = *(float *)(local_58 + 0x54) -
                (((float)uVar2 + -3.0) / ((float)uVar3 + -3.0)) * *(float *)(local_58 + 0x54);
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        *(float *)(local_58 + 0x54) = fVar7;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40938(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d69224(param_1,&local_98);
    lVar7 = FUN_00d66d28(local_98);
    lVar7 = *(long *)(lVar7 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    uVar6 = FUN_00d6c0bc(lVar7,PTR_s_Buff_SpawnStage_MatchStart_Speed_02bf1060);
    if ((uVar6 & 1) != 0) {
      uVar4 = FUN_00d67b84(local_98);
      lVar7 = FUN_00d66d28(local_98);
      puVar3 = PTR_s_Buff_SpawnStage_MatchStart_Speed_02bf1060;
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(0x41a00000,0,0,auStack_90,uVar4,uVar1,puVar3,uVar5,1,0,0);
      FUN_00ce20fc(auStack_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e40a34(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031bb1f0 <= fVar3) {
    fVar3 = DAT_031bb1f0;
  }
  fVar4 = DAT_031bb130;
  if (DAT_031bb130 <= fVar3) {
    fVar4 = fVar3;
  }
  FUN_00ceace8();
  uVar1 = FUN_00ceb054();
  fVar3 = 0.2;
  if ((uVar1 & 1) == 0) {
    fVar3 = 0.125;
  }
  return *(float *)(param_1 + 0x454) * fVar3 * fVar4;
}




void FUN_00e40acc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  code *local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = FUN_00d67c60();
  puVar4 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar5 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar5;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e407dc;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  puVar4 = PTR_s_onBeforeReApplyName_02bed500;
  uVar5 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar5;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e40938;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x3e99999a,param_1);
  uVar7 = FUN_00d64d7c(param_1);
  lVar6 = FUN_00d4891c(0x3e99999a,uVar7,0);
  lVar6 = lVar6 + 0x10;
  FUN_00d39534(lVar6);
  plVar8 = (long *)FUN_00d39584(lVar6);
  local_60 = FUN_00e40a34;
  local_58 = 5;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_60);
  (**(code **)(*plVar8 + 0x20))();
  plVar8 = (long *)FUN_00d2887c(lVar6);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))
                             (plVar8,PTR_s_Buff_SpawnStage_MidMatch_SpeedBo_02bf1058);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x40a00000);
  local_58 = 1;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_60);
  lVar6 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar6 + 0x10);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_60,lVar6 + 0x28);
  lVar6 = FUN_00d66d28(param_1);
  lVar6 = *(long *)(lVar6 + 0x40);
  fVar9 = (*(float *)(lVar6 + 0x1a8) + 1.0) *
          (*(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0xf4) * (*(float *)(lVar6 + 0x25c) + 1.0));
  if (DAT_031bb1f8 <= fVar9) {
    fVar9 = DAT_031bb1f8;
  }
  fVar3 = DAT_031bb138;
  if (DAT_031bb138 <= fVar9) {
    fVar3 = fVar9;
  }
  FUN_00d3e534();
  lVar6 = FUN_00d29818();
  FUN_00d42654(&local_60,lVar6);
  *(float *)(lVar6 + 0x10) = fVar3 * 0.0375;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40d24(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_DeathRay");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3e800000,uVar4,0);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00e12bf0(lVar2 + 0x10);
  *(undefined4 *)(lVar5 + 0xc) = 0x100000;
  FUN_00d2ab44(lVar2 + 0x88);
  FUN_00d39534(lVar2 + 0xa0);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))();
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48,2,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40e58(undefined8 param_1)

{
  long lVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = 0x40800000;
  local_30 = 1;
  FUN_00d42a20(0,0x3f800000,param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40eb8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_c0;
  undefined1 auStack_b8 [88];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_c0);
    fVar7 = (float)FUN_00d6a1f8(local_c0);
    fVar8 = (float)FUN_009bc24c();
    if (fVar7 <= fVar8) {
      lVar6 = FUN_00d66d28(local_c0);
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      uVar4 = FUN_00d66d34(local_c0);
      FUN_00d009d0(auStack_60,uVar1,uVar4);
      FUN_00ce20fc(auStack_60);
      puVar3 = PTR_s_Buff_SpawnStage_MatchStart_Speed_02bf1060;
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(0x41a00000,0,0,auStack_b8,uVar1,uVar1,puVar3,uVar4,1,0,0);
      FUN_00ce20fc(auStack_b8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e40fa8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00ceace8();
  uVar5 = FUN_00ceaf3c();
  if ((uVar5 & 1) != 0) {
    FUN_00d67b04(0x3e4ccccd,param_1);
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e40eb8;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d65010(param_1);
    FUN_00d29be4(lVar6 + 0x10);
    uVar7 = FUN_00d29c84(lVar6 + 0x10);
    FUN_00d46b64(uVar7,0x80);
    lVar6 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_50,lVar6 + 8);
    FUN_00d3e534();
    uVar7 = FUN_00d2a79c();
    FUN_00d42654(auStack_50,uVar7);
    FUN_00d41de0(uVar7,1);
    lVar6 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_50,lVar6 + 0x18);
    FUN_00d3e534();
    uVar7 = FUN_00d2a504();
    FUN_00d42654(auStack_50,uVar7);
    FUN_00d3e534();
    uVar7 = FUN_00d2a8bc();
    FUN_00d42654(auStack_50,uVar7);
    uVar7 = FUN_00d47c14(uVar7);
    FUN_00da2040(uVar7,"Effect_MatchStart_ShoppinDelay_Finish");
    FUN_00d3e534();
    uVar7 = FUN_00d2a6c0();
    FUN_00d42654(auStack_50,uVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

