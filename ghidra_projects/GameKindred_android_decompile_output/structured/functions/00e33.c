// functions/00e33 — 17 functions
#include "libGameKindred.h"




void FUN_00e33030(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&local_a8,&local_b0);
  lVar6 = FUN_00d66d28(local_a8);
  uVar7 = FUN_00daa578(local_b0,lVar6);
  puVar4 = PTR_s_Buff_Petal_Yummy_02bf0d30;
  if (((uVar7 & 1) != 0) && ((*(byte *)(local_b0 + 0xc) >> 2 & 1) != 0)) {
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar2 = *(undefined4 *)(*(long *)(local_b0 + 0x20) + 0x260);
    uVar8 = FUN_00d66d28(local_a8);
    uVar8 = thunk_FUN_00d086f0(uVar8,8,1);
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(uVar8,0,0,auStack_a0,uVar1,uVar2,puVar4,uVar5,1,0,0);
    FUN_00ce20fc(auStack_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33120(void)

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
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e33030;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e33190(void)

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




void FUN_00e331f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00e347b8();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d59f54(uVar2,1,6,0x19,0);
  FUN_00d40f38(uVar4,param_1,5,2,0);
  FUN_00d3e534();
  uVar4 = FUN_00e347b8();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d59f54(uVar2,1,7,0x19,0);
  FUN_00d40f38(uVar4,param_1,4,2,0);
  FUN_00d3e534();
  uVar4 = FUN_00e347b8();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d59f54(uVar2,1,5,0x19,0);
  FUN_00d40f38(uVar4,param_1,0x10,1,0);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33344(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d66d28();
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_031baaf0 <= fVar5) {
    fVar5 = DAT_031baaf0;
  }
  fVar6 = DAT_031baa30;
  if (DAT_031baa30 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar7 = (fVar6 + -1.0) / 11.0;
  fVar5 = (float)thunk_FUN_00d086f0(lVar2,6,1);
  fVar6 = (float)thunk_FUN_00d086f0(lVar2,7,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar3);
  FUN_00d40e24(fVar6 * fVar7 + fVar5 * (1.0 - fVar7),uVar3,0xf,1);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_60,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e334c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00e2d174();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f364(uVar3,PTR_s_Ability__PetalMinion__DefaultAtt_02bef2d8);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"ThornstormFuse");
  FUN_00da2040(uVar3,"Effect_PetalMinion_Ult");
  FUN_00d3e534();
  uVar4 = FUN_00e11d14();
  FUN_00d42654(auStack_50,uVar4);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09590(*(undefined4 *)(lVar2 + 0xd8));
  FUN_00d3ecf4(0x3f800000,uVar3,uVar4,"Sound_Petal_ability_3_fuse_1",0,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00e3488c();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d3a2b8();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f5c4(uVar3,PTR_s_Ability__PetalMinion__Explode_02bef2e8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33614(void)

{
  return;
}




void FUN_00e33618(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_770 [2];
  float local_768;
  float fStack_764;
  float local_760;
  float local_758;
  float fStack_754;
  float local_750;
  undefined8 local_748;
  undefined4 local_740 [12];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [40];
  long local_6c0 [200];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d69224(param_1,&local_748);
    lVar8 = FUN_00d66d28(local_748);
    uVar4 = *(ushort *)(lVar8 + 0x88) & 0x1f;
    if ((uVar4 == 0x1f) || (1 < *(ushort *)(lVar8 + (ulong)uVar4 * 0x38 + 0x90) - 3)) {
      FUN_00d4d634(auStack_6e8);
      FUN_00d4d66c(auStack_6e8,lVar8);
      FUN_00d4d678(auStack_6e8,"PetalSeed");
      FUN_00d55794(lVar8,&local_768,0);
      FUN_00d4eb08(auStack_710,&local_768,200,0);
      uVar4 = FUN_00d9e840(auStack_6e8,local_6c0,200,auStack_710);
      uVar5 = FUN_00da0118(lVar8);
      if ((uVar4 != 0) && (uVar5 < 3)) {
        uVar7 = 0;
        do {
          lVar10 = local_6c0[uVar7];
          FUN_00d55794(lVar10,&local_758,0);
          uVar1 = *(ushort *)(lVar10 + 0x88) & 0x1f;
          if (((uVar1 == 0x1f) || (1 < *(ushort *)(lVar10 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
             (fVar12 = local_758 - local_768, fVar14 = fStack_754 - fStack_764,
             fVar15 = local_750 - local_760, fVar13 = (float)thunk_FUN_00d086f0(lVar8,9,1),
             fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15 <= fVar13 * fVar13)) {
            lVar11 = *(long *)(lVar10 + 0x18);
            while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c7bf48))) {
              lVar11 = *(long *)(lVar11 + 0x20);
            }
            thunk_FUN_00d9ff34(local_740,PTR_s_Buff_PetalSeed_Perk_MinionSpawnD_02bf0d60);
            FUN_00d9ff84(local_770,local_740[0]);
            uVar9 = FUN_00d6bbac(lVar11,local_770[0],0);
            if ((uVar9 & 1) == 0) {
              FUN_008ff6ec(lVar10,0,lVar10);
              break;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      uVar4 = FUN_00d66cf4(local_748);
      if (uVar5 != uVar4) {
        uVar2 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = FUN_00d66d34(local_748);
        FUN_00d048bc(local_740,uVar2,uVar6,uVar5,1);
        FUN_00ce20fc(local_740);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33894(undefined8 param_1,float *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00d66cf4();
  *param_2 = (float)uVar1;
  return;
}




void FUN_00e338bc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00d67b04(0x3dcccccd);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e33618;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d3bc68(lVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e3395c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))();
  return;
}




void FUN_00e33960(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_60;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_60);
    lVar3 = FUN_00d66d28(local_60);
    FUN_00d043c0(*(undefined4 *)(*(long *)(lVar3 + 0x40) + 0x38),auStack_58,
                 *(undefined4 *)(lVar3 + 0x260),0,1);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e339e4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_170;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d69224(param_1,&local_170);
    lVar5 = FUN_00d66d28(local_170);
    lVar6 = *(long *)(lVar5 + 0x40);
    fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
            (*(float *)(lVar6 + 0x38) + *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0)
            );
    if (DAT_031baa50 <= fVar7) {
      fVar7 = DAT_031baa50;
    }
    fVar3 = DAT_031ba990;
    if (DAT_031ba990 <= fVar7) {
      fVar3 = fVar7;
    }
    if (fVar3 != 0.0) {
      fVar9 = *(float *)(lVar6 + 0x308);
      fVar7 = (float)FUN_00d092ac(lVar5,0,2,9,1);
      fVar8 = (float)FUN_00d092ac(lVar5,0,3,9,1);
      FUN_00d041e4((int)fVar7,auStack_90,*(undefined4 *)(lVar5 + 0x260),0,0,1,0xffffffff);
      FUN_00ce20fc(auStack_90);
      FUN_00d043c0((fVar9 / fVar3) * (float)(int)fVar7,auStack_c0,*(undefined4 *)(lVar5 + 0x260),0,1
                  );
      FUN_00ce20fc(auStack_c0);
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      FUN_00d092ac(lVar5,0,4,9,1);
      FUN_00d041e4(auStack_f8,uVar1,4,0,1,0xffffffff);
      FUN_00ce20fc(auStack_f8);
      FUN_00d041e4((int)fVar8,auStack_130,*(undefined4 *)(lVar5 + 0x260),7,0,1,0xffffffff);
      FUN_00ce20fc(auStack_130);
      FUN_00d041e4((int)fVar8,auStack_168,*(undefined4 *)(lVar5 + 0x260),8,0,1,0xffffffff);
      FUN_00ce20fc(auStack_168);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33be4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onApplyName_02bed4f8;
  uVar3 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e339e4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e339e4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onActorLevelUpName_02bed550;
  uVar3 = FUN_00e6a474(PTR_s_onActorLevelUpName_02bed550);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e339e4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onLeaveCombatName_02bed5a8;
  uVar3 = FUN_00e6a474(PTR_s_onLeaveCombatName_02bed5a8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e33960;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x40a00000,param_1);
  return;
}




void FUN_00e33d6c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d472ec(0x40333333,uVar3,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33e1c(void)

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




void FUN_00e33e80(undefined8 param_1)

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
  local_38[0] = FUN_00d092ac(uVar2,2,4,9,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e33ef8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_60 [4];
  float local_50 [4];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_40);
    FUN_00d66d28(local_40);
    FUN_00d5cf60();
    uVar3 = FUN_00d9e390();
    uVar4 = FUN_00d66d28(local_40);
    FUN_00d55794(uVar3,local_60,0);
    FUN_00d55794(uVar4,local_50,0);
    fVar5 = (float)local_50._4_8_ - (float)local_60._4_8_;
    fVar6 = SUB84(local_50._4_8_,4) - SUB84(local_60._4_8_,4);
    fVar5 = (local_50[0] - local_60[0]) * (local_50[0] - local_60[0]) + fVar5 * fVar5 +
            fVar6 * fVar6;
    fVar6 = SQRT(fVar5);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar5);
    }
    fVar5 = (float)FUN_00d092ac(uVar4,0,0x11,9,1);
    if (fVar5 < fVar6) {
      FUN_00d436dc(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

