// functions/00e2a — 18 functions
#include "libGameKindred.h"




void FUN_00e2a094(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00e2a0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"TrapDamage",1);
  return;
}




void FUN_00e2a0e4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_708 [4];
  float local_6f8 [4];
  long local_6e8;
  undefined8 local_6e0;
  undefined1 auStack_6d8 [40];
  long local_6b0 [200];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d69294(param_1,&local_6e0,&local_6e8);
  uVar4 = FUN_00d67b78(local_6e0);
  uVar5 = FUN_00daa578(local_6e8,uVar4);
  if (((((uVar5 & 1) != 0) && (*(long *)(local_6e8 + 0x20) != 0)) &&
      ((*(byte *)(*(long *)(local_6e8 + 0x20) + 0x2f4) & 1) != 0)) &&
     ((1.0 <= *(float *)(local_6e8 + 0x54) && ((*(byte *)(local_6e8 + 0xc) >> 4 & 1) == 0)))) {
    FUN_00d4d634(auStack_6d8);
    FUN_00d4d66c(auStack_6d8,uVar4);
    FUN_00d4d678(auStack_6d8,"Kestrel_Trap");
    FUN_00d4d364(auStack_6d8,0);
    uVar2 = FUN_00d9e840(auStack_6d8,local_6b0,200,0);
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        lVar8 = local_6b0[uVar5];
        if (lVar8 != 0) {
          lVar6 = *(long *)(lVar8 + 0x18);
          while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          uVar7 = FUN_00d6bbac(lVar6,DAT_031ba1c8,0);
          if ((uVar7 & 1) != 0) {
            FUN_00d55794(lVar8,local_6f8,0);
            FUN_00d55794(*(undefined8 *)(local_6e8 + 0x20),local_708,0);
            fVar9 = (float)FUN_00d59f54(uVar4,1,9,0x19,0);
            fVar10 = (float)local_6f8._4_8_ - (float)local_708._4_8_;
            fVar11 = SUB84(local_6f8._4_8_,4) - SUB84(local_708._4_8_,4);
            if ((local_6f8[0] - local_708[0]) * (local_6f8[0] - local_708[0]) + fVar10 * fVar10 +
                fVar11 * fVar11 <= fVar9 * fVar9) {
              lVar6 = *(long *)(lVar8 + 0x18);
              while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
                lVar6 = *(long *)(lVar6 + 0x20);
              }
              uVar3 = FUN_00d5401c(lVar6,PTR_s_Ability__Kestrel__Trap_Detonate_02beefa0);
              FUN_008ff6f4(lVar8,uVar3,local_6f8);
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2a300(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2a0e4;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar5 + 0x10);
  return;
}




bool FUN_00e2a394(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d67b5c(*param_1);
  fVar3 = (float)FUN_00d59f54(uVar1,1,4,0x19,0);
  return fVar3 < fVar2;
}




void FUN_00e2a3f4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,8,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Kestrel_Ability_B_In");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  lVar4 = FUN_00d09310();
  FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x268));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_Stealthing");
  (**(code **)(*plVar3 + 0x80))(plVar3,0);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Kestrel_Ability_B_Out");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(0x3f800000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  lVar4 = FUN_00d09310();
  FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x268));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_Stealth_out");
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_00d2b638(lVar2);
  uVar5 = FUN_00d29f44(lVar2);
  local_58 = FUN_00e2a968;
  local_50 = 3;
  FUN_00d47690(uVar5,1,&local_58);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Head");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Head");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Body1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Body");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Body2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Body");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LegTopL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LegTopR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LegBotL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LegBotR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_ArmTopL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_ArmTopR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_ArmBotL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_ArmBotR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar3 + 0xb8))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_Stealthed");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Kestrel_Ability_B_Loop");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  lVar4 = FUN_00d09310();
  FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x268));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d29c34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf);
  FUN_00d2b688(lVar2);
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,6);
  uVar5 = FUN_00d4bc24();
  lVar2 = FUN_00d4bc58(uVar5,0x10);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar4 = FUN_00d29edc(lVar2 + 0x10);
  *(code **)(lVar4 + 8) = FUN_00e2a394;
  FUN_00d2a320(lVar2 + 0x88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2a968(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,5,0);
  return;
}




void FUN_00e2a97c(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d6a1f8(*param_1);
  uVar2 = FUN_00d6a25c(*param_1);
  *param_2 = uVar1;
  param_2[1] = 0x3f99999a;
  param_2[2] = uVar2;
  return;
}




void FUN_00e2a9cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_C_Shot");
  local_38[0] = 0x3e99999a;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb8))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xa8))(plVar3,FUN_00e2a97c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2aaa0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_C_Impact");
  lVar3 = FUN_00d09310();
  (**(code **)(*plVar2 + 0x28))(*(undefined4 *)(lVar3 + 0x270),plVar2);
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar3 = FUN_00e2aba0(lVar1 + 0x10);
  *(char **)(lVar3 + 0x20) = "__VAR1_INT__";
  *(undefined4 *)(lVar3 + 8) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_C_Kill");
  lVar3 = FUN_00d09310();
  (**(code **)(*plVar2 + 0x28))(*(undefined4 *)(lVar3 + 0x270),plVar2);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_C_Impact");
                    /* WARNING: Could not recover jumptable at 0x00e2ab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  return;
}




undefined8 * FUN_00e2aba0(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_0281fd20;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00e2ac10(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00d99804(param_2,*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_00d98098(param_1 + 8,param_2,0);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    bVar1 = iVar3 <= iVar2;
    break;
  case 2:
    bVar1 = iVar3 == iVar2;
    break;
  case 3:
    bVar1 = iVar3 != iVar2;
    break;
  case 4:
    bVar1 = iVar2 < iVar3;
    break;
  case 5:
    bVar1 = iVar2 <= iVar3;
    break;
  default:
    bVar1 = iVar3 < iVar2;
  }
  return bVar1;
}




void FUN_00e2acc4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  long local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_b0,&local_a8);
  lVar5 = FUN_00d66d28(local_b0);
  uVar6 = FUN_00daa578(local_a8,lVar5);
  puVar3 = PTR_s_Buff_Koshka_HeroicPerk_BloodRush_02bf0a68;
  if (((((uVar6 & 1) != 0) && ((*(byte *)(local_a8 + 0xc) >> 3 & 1) != 0)) &&
      (*(int *)(local_a8 + 8) != 3)) &&
     ((*(byte *)(*(long *)(local_a8 + 0x20) + 0x2f6) >> 4 & 1) == 0)) {
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar7 = thunk_FUN_00d086f0(lVar5,1,1);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(uVar7,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2adc0(void)

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
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2acc4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e2ae30(undefined8 param_1)

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
  local_48 = FUN_00e2aed0;
  local_40 = 3;
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




void FUN_00e2aed0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e2aedc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d2dea4(lVar2);
  local_48[0] = 0xbe99999a;
  local_40 = 1;
  FUN_00d97d7c(uVar3,&DAT_01bd11d4,local_48,0);
  plVar4 = (long *)FUN_00d2ccac(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Koshka__TwirlEmpoweredA_02beefe0);
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Koshka_Perk_MoveFx");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2afb8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d6592c();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e2b074);
                    /* WARNING: Could not recover jumptable at 0x00e2aff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_00e2aff4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_00d65010();
  lVar3 = 0;
  do {
    plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x78))
                               (plVar2,*(undefined8 *)((long)&PTR_s_Bone_LeftThumb_0281fd38 + lVar3)
                               );
    plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Koshka_Pounce_Trail");
    (**(code **)(*plVar2 + 0x78))(plVar2,1);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x50);
  return;
}

