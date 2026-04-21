// functions/00d3d — 21 functions
#include "libGameKindred.h"




void FUN_00d3d170(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d70a78();
    if (*(char *)(lVar5 + 0xe4) != '\0') {
      lVar5 = FUN_00d67c60(param_1);
      lVar6 = FUN_00d67c60(param_1);
      uVar3 = FUN_00e6a474("time_last_barrier_disabled");
      uVar3 = FUN_0091ed5c("time_last_barrier_disabled",uVar3,0x12345678);
      uVar3 = (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar3);
      puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
      *puVar7 = 0;
      lVar5 = FUN_00d67c60(param_1);
      puVar2 = PTR_s_onBuffIntervalName_02bed520;
      uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
      uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
      *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
      uVar1 = *(uint *)(lVar5 + 0xf8);
      *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3cf3c;
      *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
      FUN_00d67b04(0x3f000000,param_1);
      return;
    }
  }
  return;
}




void FUN_00d3d298(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_140 [16];
  undefined8 local_130;
  undefined1 auStack_128 [96];
  undefined1 auStack_c8 [96];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_130);
  lVar5 = FUN_00d66d28(local_130);
  uVar2 = FUN_00e6a474("time_last_barrier_disabled");
  uVar2 = FUN_0091ed5c("time_last_barrier_disabled",uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  lVar8 = *(long *)(lVar5 + 0x18);
  while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  uVar7 = FUN_00d6bbac(lVar8,DAT_0315c904,0);
  if ((uVar7 & 1) == 0) {
    FUN_00d55794(lVar5,auStack_140,0);
    FUN_00d4d9e8(auStack_c8);
    FUN_00d4daf4(auStack_c8,0,1,0,lVar5);
    FUN_00d4db48(*(float *)(*(long *)(lVar5 + 0x38) + 0x128) + 1.0,auStack_c8,auStack_140);
    FUN_00d4dac4(auStack_c8,0x18);
    FUN_00d4d9e8(auStack_128);
    FUN_00d4daf4(auStack_128,0,1,0,lVar5);
    FUN_00d4db48(*(float *)(*(long *)(lVar5 + 0x38) + 0x128) + 8.0,auStack_128,auStack_140);
    FUN_00d4dabc(auStack_128,4);
    iVar3 = FUN_00d9e840(auStack_c8,auStack_60,1,0);
    iVar4 = FUN_00d9e840(auStack_128,auStack_68,1,0);
    if (iVar4 != 0 || iVar3 != 0) {
      fVar9 = (float)FUN_009bc24c();
      *pfVar6 = fVar9;
      FUN_00d66d34(local_130);
      lVar8 = FUN_00d7bcfc();
      if (lVar8 != 0) {
        FUN_00d7f9ec(lVar5,lVar8);
      }
      goto LAB_00d3d508;
    }
  }
  fVar9 = (float)FUN_009bc24c();
  FUN_00d66d34(local_130);
  lVar8 = FUN_00d7bcfc();
  if (lVar8 == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)FUN_00d7bce4(lVar8);
    if (1500.0 <= fVar10) goto LAB_00d3d508;
  }
  if (*pfVar6 + 3.0 < fVar9) {
    fVar9 = (float)FUN_00d67b0c(local_130);
    fVar9 = (float)NEON_fminnm(fVar10 + fVar9 * 300.0,0x44bb8000);
    if (lVar8 == 0) {
      uVar2 = FUN_00d66d34(local_130);
      FUN_00d7f914(fVar9,lVar5,lVar5,4,uVar2);
    }
    else {
      FUN_00d7fa78(fVar9 - fVar10,lVar5,lVar5,lVar8);
    }
  }
LAB_00d3d508:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3d538(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d70a78();
    if (*(char *)(lVar5 + 0xe4) != '\0') {
      lVar5 = FUN_00d67c60(param_1);
      lVar6 = FUN_00d67c60(param_1);
      uVar3 = FUN_00e6a474("time_last_barrier_disabled");
      uVar3 = FUN_0091ed5c("time_last_barrier_disabled",uVar3,0x12345678);
      uVar3 = (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar3);
      puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
      *puVar7 = 0;
      lVar5 = FUN_00d67c60(param_1);
      puVar2 = PTR_s_onBuffIntervalName_02bed520;
      uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
      uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
      *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
      uVar1 = *(uint *)(lVar5 + 0xf8);
      *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3d298;
      *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
      FUN_00d67b04(0x3f000000,param_1);
      return;
    }
  }
  return;
}




void FUN_00d3d660(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar2 = FUN_00ceae88();
  if ((uVar2 & 1) == 0) {
    FUN_00ceace8();
    uVar2 = FUN_00ceaf14();
    if ((uVar2 & 1) == 0) {
      FUN_00ceace8();
      uVar2 = FUN_00ceb04c();
      if ((uVar2 & 1) == 0) {
        FUN_00ceace8();
        uVar2 = FUN_00ceae98();
        if ((uVar2 & 1) == 0) {
          FUN_00ceace8();
          uVar2 = FUN_00ceaf84();
          if ((uVar2 & 1) == 0) {
            uVar3 = FUN_00d64464(param_1);
            FUN_00d4bbf8(uVar3,5);
            lVar4 = FUN_00d4bc24();
            plVar5 = (long *)FUN_00d2b728(lVar4 + 0x10);
            local_48[0] = 0x3f2b851f;
            local_40 = 1;
            (**(code **)(*plVar5 + 0x30))(plVar5,local_48);
            plVar5 = (long *)FUN_00d2887c(lVar4 + 0x10);
            plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                                       (plVar5,PTR_s_Buff_Turret_DamageReduction_5v5__02bebaa0);
            local_48[0] = 0x3f000000;
            local_40 = 1;
            (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
            lVar4 = FUN_00d65010(param_1);
            plVar5 = (long *)FUN_00d2945c(lVar4 + 0x10);
            plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"BarrierLocator");
            plVar5 = (long *)(**(code **)(*plVar5 + 0x48))
                                       (plVar5,"Effect_Turret_DamageReduction_Aura");
            (**(code **)(*plVar5 + 0xb0))(plVar5,1);
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3d7ac(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"BarrierLocator");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Turret_DamageReduction");
                    /* WARNING: Could not recover jumptable at 0x00d3d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00d3d7fc(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d64d7c();
  lVar2 = FUN_00d4891c(0x42700000,uVar1,0);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3d834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Turret_GainPowerOverTime_Pa_02bebab0);
  return;
}




void FUN_00d3d838(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38[0] = 0x41200000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,4,1,local_38);
  (**(code **)(*plVar3 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3d8b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0xbf800000,uVar2,7,2,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0xbf800000,uVar2,8,2,0,0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x18);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0x3f800000,uVar2,7,2,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0x3f800000,uVar2,8,2,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3da08(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3da6c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) goto LAB_00d3db88;
  FUN_00d69294(param_1,&local_30,&local_38);
  lVar4 = FUN_00d66d28(local_30);
  if ((((*(float *)(*(long *)(lVar4 + 0x40) + 0x308) <= 0.0) ||
       (*(int *)(local_38 + 3) != *(int *)(lVar4 + 0x260))) ||
      ((*(byte *)((long)local_38 + 0xc) >> 2 & 1) == 0)) ||
     ((local_38[5] == 0 || ((*(byte *)(local_38[5] + 0x2f4) >> 3 & 1) == 0)))) goto LAB_00d3db88;
  if (((char *)*local_38 == (char *)0x0) ||
     ((iVar2 = strcmp((char *)*local_38,PTR_s_Ability__BlackclawCaptured__Defa_02bee6a8), iVar2 == 0
      || (iVar2 = strcmp((char *)*local_38,PTR_s_Ability__KrakenCaptured__Default_02beeff0),
         iVar2 == 0)))) {
LAB_00d3db78:
    uVar5 = 5;
  }
  else {
    iVar2 = strcmp((char *)*local_38,PTR_s_Ability__BlackclawCaptured__AltA_02bee6b0);
    if ((iVar2 == 0) ||
       (iVar2 = strcmp((char *)*local_38,PTR_s_Ability__KrakenCaptured__AltAtta_02beeff8),
       iVar2 == 0)) {
      uVar5 = 6;
    }
    else {
      iVar2 = strcmp((char *)*local_38,PTR_s_Ability__KrakenCaptured__CritAtt_02bef000);
      if (iVar2 != 0) goto LAB_00d3db78;
      uVar5 = 7;
    }
  }
  FUN_008ff6ec(lVar4,uVar5,lVar4);
LAB_00d3db88:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3dbbc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3da6c;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d3dc2c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00d66cf4(*param_1);
  if (iVar1 == 0) {
    puVar2 = &DAT_01e277f2;
  }
  else {
    iVar1 = FUN_00d66cf4(*param_1);
    puVar2 = (&PTR_s_Effect_Turret_Aggro_Lvl_1_0281a9e8)[iVar1 - 1];
  }
  FUN_00e6a584(param_2,puVar2,param_3);
  return;
}




void FUN_00d3dc90(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3f200000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xd,1,local_58);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3f200000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xe,1,local_58);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Muzzle");
  (**(code **)(*plVar3 + 0x58))(plVar3,FUN_00d3dc2c);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3dda8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00d6a078(*param_1);
  if (iVar1 != -1) {
    *param_4 = "Bone_CenterMass";
    lVar2 = FUN_00d9e390();
    if (lVar2 != 0) {
      *param_2 = lVar2;
    }
  }
  return;
}




void FUN_00d3ddfc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29c84(lVar2 + 0x10);
  FUN_00d46b64(uVar3,0x200);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,4);
  lVar2 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Turret_Invulnerable_FlyoutT_02bebad0);
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3dea8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a414(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3decc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,8);
  return;
}




void FUN_00d3ded0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,3);
  return;
}




void FUN_00d3df20(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3df6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,7);
  return;
}




void FUN_00d3df70(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3dfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,7);
  return;
}




void FUN_00d3dfc0(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d2b638(lVar1 + 0x10);
  return;
}




void FUN_00d3dfd8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3e024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,2);
  return;
}

