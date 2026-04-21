// functions/00e0e — 22 functions
#include "libGameKindred.h"




void FUN_00e0e014(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e0e028(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [12];
  int local_34;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d69b9c(param_1,&local_30,&local_34,auStack_40);
    lVar5 = FUN_00d66d28(local_30);
    if ((local_34 == 4) && (*(float *)(*(long *)(lVar5 + 0x40) + 0x318) <= 0.0)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar3 = FUN_00d66d34(local_30);
      FUN_00d04628(0,auStack_68,uVar1,uVar3);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0e0d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  *param_2 = uVar1;
  *param_4 = "Bone_Chest";
  return;
}




void FUN_00e0e10c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69354(param_1,auStack_30,&local_38);
    *(undefined4 *)(local_38 + 0x2c) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0e170(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69294(param_1,&uStack_30,&local_38);
    lVar2 = local_38;
    uVar4 = FUN_00d66d28(uStack_30);
    uVar3 = FUN_00daa58c(lVar2,uVar4);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(local_38 + 0x58) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0e1ec(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = FUN_00d426b0(*param_1);
  lVar3 = *(long *)(lVar1 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x240) + 1.0) *
          (*(float *)(lVar3 + 0xd8) + *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0))
  ;
  if (DAT_031b83b0 <= fVar4) {
    fVar4 = DAT_031b83b0;
  }
  fVar6 = DAT_031b82f0;
  if (DAT_031b82f0 <= fVar4) {
    fVar6 = fVar4;
  }
  if (fVar6 <= 6.0) {
    fVar6 = 6.0;
  }
  fVar4 = (float)FUN_00d59f54(lVar1,2,4,0x19,0);
  fVar5 = (float)FUN_00d59f54(lVar1,2,5,0x19,0);
  fVar4 = fVar4 + (fVar5 - fVar4) * ((fVar6 + -6.0) / 6.0);
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Alpha_Talent_Acceleration_02bf1cc8)
  ;
  if ((uVar2 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(lVar1,DAT_0320e3f4,2,9);
    fVar4 = fVar4 * fVar6;
  }
  *param_2 = fVar4;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e0e318(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onActorResourcesChangedName_02bed570;
  uVar4 = FUN_00e6a474(PTR_s_onActorResourcesChangedName_02bed570);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0e028;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeApplyHealName_02bed620;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyHealName_02bed620);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0e10c;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0e170;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar6 = FUN_00d66d28(param_1);
  lVar5 = FUN_00d63f30(param_1);
  fVar8 = (float)FUN_00d67b34(param_1);
  fVar9 = (float)FUN_00d59f54(uVar6,2,8,0x19,0);
  plVar7 = (long *)FUN_00d2887c(lVar5 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))
                             (plVar7,PTR_s_Buff_Alpha_SelfDestruct_SelfSpee_02bf0220);
  local_50 = 1;
  local_58[0] = fVar8 * fVar9;
  (**(code **)(*plVar7 + 0x18))(plVar7,local_58);
  plVar7 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  local_58[0] = 1.0;
  local_50 = 1;
  (**(code **)(*plVar7 + 0x20))(plVar7,0,local_58);
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  plVar7 = (long *)FUN_00d2dfe4(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,4,FUN_00e0e1ec);
  plVar7 = (long *)FUN_00d2a110(lVar5);
  local_58[0] = -1.0;
  local_50 = 1;
  (**(code **)(*plVar7 + 0x30))(plVar7,1,2,local_58);
  plVar7 = (long *)FUN_00d2945c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_Chest");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Alpha_C_Charging");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x90))();
  (**(code **)(*plVar7 + 0xa0))(plVar7,FUN_00e0e0d4);
  plVar7 = (long *)FUN_00d2945c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Alpha_C_Ground");
  (**(code **)(*plVar7 + 0x90))();
  plVar7 = (long *)FUN_00d2df94(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Alpha_Ability_C_Loop");
  lVar5 = FUN_00d09310();
  FUN_00d09b78(*(undefined4 *)(lVar5 + 0x2ac));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar5 = FUN_00d6624c(param_1);
  plVar7 = (long *)FUN_00d46828(lVar5 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Ability__Alpha__SelfDestruct_02bee478);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0e66c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  uVar3 = FUN_00d67b84(param_1);
  uVar4 = FUN_00d44008(uVar3,PTR_s_Buff_Alpha_Talent_Acceleration_02bf1cc8);
  if ((uVar4 & 1) == 0) {
    local_58 = FUN_00e0e7d4;
    local_50 = 3;
    FUN_00d42a20(0,0x3f800000,param_1,&local_58);
    fVar7 = (float)FUN_00d59f54(uVar2,2,1,0x19,0);
    fVar8 = (float)FUN_00d59f54(uVar2,2,8,0x19,0);
    lVar5 = FUN_00d64980(param_1);
    plVar6 = (long *)FUN_00d2887c(lVar5 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))
                               (plVar6,PTR_s_Buff_Alpha_SelfDestruct_SelfSlow_02bf0228);
    local_58 = (code *)CONCAT44(local_58._4_4_,fVar7 * (1.0 - fVar8));
    local_50 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_58);
  }
  else {
    FUN_00d59f54(uVar2,2,1,0x19,0);
    FUN_00d67d04(param_1);
    FUN_00d5a3d0(uVar2,DAT_0320e3f4,1,9);
    FUN_00d42a90(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0e7d4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00e0e7e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28();
  FUN_00d59f54(uVar1,2,7,0x19,0);
  FUN_00d42bd0(param_1);
  return;
}




void FUN_00e0e820(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  long *local_78;
  undefined8 local_70;
  int local_68 [12];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69294(param_1,&local_70,&local_78);
    lVar4 = FUN_00d66d28(local_70);
    uVar3 = FUN_00daa578(local_78,lVar4);
    if (((((uVar3 & 1) != 0) && (iVar2 = FUN_00d5c238(lVar4,1), iVar2 != 0)) &&
        ((int)local_78[1] == 0)) &&
       ((((*(byte *)((long)local_78 + 0xc) >> 2 & 1) != 0 &&
         (fVar9 = (float)FUN_00d59f54(lVar4,1,3,0x19,0), *local_78 != 0)) &&
        (thunk_FUN_00d9ff34(local_68), local_68[0] != DAT_031afb94)))) {
      uVar5 = 0x811c9dc5;
      uVar7 = (uint)(byte)*PTR_s_Ability__Alpha__B_02bee468;
      pbVar6 = PTR_s_Ability__Alpha__B_02bee468;
      if (*PTR_s_Ability__Alpha__B_02bee468 != 0) {
        do {
          uVar8 = (uint)pbVar6[1];
          uVar5 = (uVar5 ^ uVar7) * 0x1000193;
          uVar7 = uVar8;
          pbVar6 = pbVar6 + 1;
        } while (uVar8 != 0);
      }
      FUN_00d04e08(-fVar9,local_68,*(undefined4 *)(lVar4 + 0x260),uVar5,0);
      FUN_00ce20fc(local_68);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e0e968(void)

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
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0e820;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




uint FUN_00e0e9d8(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00d66d28();
  uVar4 = FUN_00d9eb38();
  iVar1 = FUN_00d53990(uVar4,0);
  uVar2 = 0;
  if (iVar1 != 2) {
    iVar1 = FUN_00d53990(uVar4,3);
    uVar2 = 0;
    if (iVar1 != 2) {
      uVar3 = FUN_00d9ea08(uVar3);
      uVar2 = FUN_00d6bbac(uVar3,DAT_031b8230,0);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2 & 1;
}




void FUN_00e0ea4c(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_88 [64];
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69294(param_1,&local_40,&local_48);
    lVar4 = FUN_00d66d28(local_40);
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    if (((*(int *)(local_48 + 8) == 0) && ((*(byte *)(local_48 + 0xc) >> 2 & 1) != 0)) &&
       (uVar3 = FUN_00d6bbac(lVar5,DAT_031b8220,0), (uVar3 & 1) == 0)) {
      fVar6 = (float)FUN_00d59f54(lVar4,1,4,0xd,0);
      uVar2 = FUN_00d66cf4(local_40);
      fVar6 = fVar6 * (float)uVar2;
      if ((*(byte *)(*(long *)(local_48 + 0x20) + 0x2f4) >> 4 & 1) != 0) {
        fVar7 = (float)FUN_00d59f54(lVar4,1,5,0x19,0);
        fVar6 = fVar6 * fVar7;
      }
      FUN_00daa4a4(fVar6,auStack_88,*(undefined4 *)(lVar4 + 0x260),*(undefined4 *)(lVar4 + 0x260),
                   0xffffffff,0xffffffff,0xee,0xffffffff);
      FUN_00910c0c(auStack_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0eba0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d66d04(param_1,0x100,1);
  FUN_00d6a324(param_1,FUN_00e0e9d8);
  lVar5 = FUN_00d65010(param_1);
  plVar6 = (long *)FUN_00d2945c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,"Bone_Chest");
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Alpha_B_Buff");
  lVar5 = FUN_00d6592c(param_1);
  uVar7 = FUN_00d2d01c(lVar5 + 0x10);
  uVar8 = FUN_00d9b294();
  FUN_00d9b610(uVar8,PTR_s_Buff_Alpha_Talent_CoreOverclock_02bf1cf0);
  FUN_00d9b5b0(uVar7);
  plVar6 = (long *)FUN_00d2a110();
  local_58 = FUN_00e0edd4;
  local_50 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xf,1,&local_58);
  (**(code **)(*plVar6 + 0x38))();
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar5 + 0x10);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0ea4c;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar7 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar7,6);
  uVar7 = FUN_00d4bc10();
  lVar5 = FUN_00d4bc48(uVar7,4);
  plVar6 = (long *)FUN_00d467d8(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  uVar4 = FUN_00d67b3c(param_1);
  local_58 = (code *)CONCAT44(local_58._4_4_,uVar4);
  local_50 = 1;
  (**(code **)(*plVar6 + 0x10))(plVar6,&local_58);
  uVar7 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar7,4);
  uVar7 = FUN_00d4bc10();
  lVar5 = FUN_00d4bc60(uVar7,PTR_s_Ability__Alpha__B_02bee468);
  plVar6 = (long *)FUN_00d2b728(lVar5 + 0x10);
  local_58 = FUN_00e0edec;
  local_50 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_58);
  (**(code **)(*plVar6 + 0x48))();
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0edd4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e408,0,9);
  return;
}




void FUN_00e0edec(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00e0ee00(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x100,1);
  FUN_00d6a324(param_1,FUN_00e0e9d8);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,6);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc48(uVar3,4);
  plVar4 = (long *)FUN_00d467d8(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  uVar5 = FUN_00d67b3c(param_1);
  local_48 = (code *)CONCAT44(local_48._4_4_,uVar5);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_48);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,2);
  uVar3 = FUN_00d4bc10();
  uVar3 = FUN_00d4bc60(uVar3,PTR_s_Ability__Alpha__A_02bee458);
  lVar2 = FUN_00d4bca4(uVar3,0);
  plVar4 = (long *)FUN_00d33d18(lVar2 + 0x10);
  local_48 = FUN_00e0ef90;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x38))();
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,2);
  uVar3 = FUN_00d4bc10();
  uVar3 = FUN_00d4bc60(uVar3,PTR_s_Ability__Alpha__A_02bee458);
  lVar2 = FUN_00d4bca4(uVar3,1);
  plVar4 = (long *)FUN_00d33d18(lVar2 + 0x10);
  local_48 = FUN_00e0efa4;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0ef90(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,4,0);
  return;
}




void FUN_00e0efa4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,0x19,0);
  return;
}




void FUN_00e0efb8(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d29be4(lVar1 + 0x10);
  return;
}




void FUN_00e0efd0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LRocket");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster");
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RRocket");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster_R");
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LRocket");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster_Shutdown");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RRocket");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster_Shutdown_R");
                    /* WARNING: Could not recover jumptable at 0x00e0f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}

