// functions/00dc7 — 23 functions
#include "libGameKindred.h"




void FUN_00dc7064(void)

{
  FUN_00dc6f34("RangedAttack");
  return;
}




void FUN_00dc7070(void)

{
  FUN_00dc6f34("AltRangedAttack");
  return;
}




void FUN_00dc707c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Ability01_EmpoweredRangedAttack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Idris_A_EmpoweredAttackAvai_02bf0910);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Idris_A_EmpoweredChakramAva_02bf0918);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09dc4(*(undefined4 *)(lVar4 + 900));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Idris_Ranged_Attack_Empowered",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x7b,"CenterBody");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc71dc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_9c;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  undefined4 uStack_84;
  float local_80 [2];
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_5,&local_68,0);
  fVar8 = (float)FUN_00d51820(param_4);
  fVar8 = fVar8 - local_68;
  param_3 = param_3 - local_60[0];
  fVar10 = fVar8 * fVar8 + 0.0 + param_3 * param_3;
  uVar7 = DAT_03218f68;
  fVar9 = DAT_03218f70;
  if (1e-08 <= fVar10) {
    fVar9 = SQRT(fVar10);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar10);
    }
    uVar7 = CONCAT44(0.0 / fVar9,fVar8 / fVar9);
    fVar9 = param_3 / fVar9;
  }
  fVar8 = (float)FUN_00d50cc8(param_4);
  fVar10 = (float)((ulong)uVar7 >> 0x20);
  local_78 = CONCAT44(fStack_64 + fVar10 * fVar8,local_68 + (float)uVar7 * fVar8);
  local_70 = fVar9 * fVar8 + local_60[0];
  local_98 = 0x412000003e800000;
  local_90 = 0x3e800000;
  uVar5 = FUN_00da2eb4(param_5);
  uVar6 = FUN_00ef00a0(uVar5,&local_78,&local_88,&local_98);
  if ((uVar6 & 1) == 0) {
    uVar5 = FUN_00da2eb4(param_5);
    FUN_00ef01b8(uVar5,&local_68,&local_78,&local_9c,0,0);
    fVar8 = (float)FUN_00d50cc8(param_4);
    local_78 = CONCAT44(fStack_64 + fVar10 * local_9c * fVar8,
                        local_68 + (float)uVar7 * local_9c * fVar8);
    local_70 = fVar9 * local_9c * fVar8 + local_60[0];
    uVar7 = FUN_00da2eb4(param_5);
    uVar6 = FUN_00ef00a0(uVar7,&local_78,&local_88,&local_98);
    bVar4 = (uVar6 & 1) == 0;
    pfVar3 = &local_88;
    if (bVar4) {
      pfVar3 = &local_68;
    }
    pfVar1 = local_80;
    if (bVar4) {
      pfVar1 = local_60;
    }
    local_88 = *pfVar3;
    uStack_84 = *(undefined4 *)((ulong)pfVar3 | 4);
    local_80[0] = *pfVar1;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_88,uStack_84,local_80[0]);
  }
  return;
}




uint FUN_00dc73d4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d6bbac(lVar2,DAT_031b9e34,0);
  return ~uVar1 & 1;
}




void FUN_00dc7428(undefined8 param_1,undefined8 param_2)

{
  FUN_00dc66e0(param_2,0);
  return;
}




void FUN_00dc7434(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c();
  FUN_00dc66e0(uVar1,1);
  return;
}




uint FUN_00dc744c(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d5048c();
  uVar1 = FUN_00dc66e0(uVar2,1);
  return ~uVar1 & 1;
}




void FUN_00dc7470(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa444(auStack_38);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Idris_A_EmpoweredAttackAvai_02bf0910,2);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  uVar2 = FUN_00cf456c(uVar2,PTR_s_Buff_Idris_A_Barrier_02bf0908,FUN_00dc761c,1,0);
  FUN_00cf45c4(uVar2,FUN_00dc73d4);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Idris_A_EmpoweredAttackAvai_02bf0910,FUN_00dc7630,1,0);
  uVar2 = FUN_00cf9ab4(auStack_38);
  uVar2 = FUN_00cf456c(uVar2,PTR_s_Buff_Idris_A_EmpoweredChakramAva_02bf0918,FUN_00dc7630,1,0);
  FUN_00cf45c4(uVar2,FUN_00dc7428);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x3f19999a,uVar2,PTR_s_Buff_Idris_DontCatch_02bf08c8,1,0);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Idris_StaminaPaused_02bf08d8,FUN_00dc7644,1,0);
  FUN_00cf9eec(auStack_38);
  uVar2 = FUN_00cf9634(auStack_38);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Idris__A_Blink_02beee40);
  uVar2 = FUN_00cfc61c(uVar2,FUN_00dc7434);
  FUN_00cfc614(uVar2,FUN_00cfc7e4);
  uVar2 = FUN_00cf9634(auStack_38);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Idris__A_Dash_02beee48);
  uVar2 = FUN_00cfc61c(uVar2,FUN_00dc744c);
  FUN_00cfc614(uVar2,FUN_00cfc7e4);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc761c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00dc7630(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dc7644(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00dc7650(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfab94(auStack_58);
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x390));
  FUN_00cf4164(0x3f800000,uVar4,uVar3,"Sound_Idris_Ability_A_Dash",0,0,0xffffffff,0,1);
  uVar4 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f333333,uVar4,"Effect_Idris_A_Dash",1,0,1,0,0);
  uVar4 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar4,1);
  uVar4 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar4,"Ability01_Dash",0,1,0,"AttackToIdle");
  plVar5 = (long *)FUN_00cfa12c(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_48[0] = 0x3f000000;
  local_40 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_48);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar4 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar4,PTR_s_Buff_Idris_PostAbilityBonuses_02bf0900,FUN_00dc7818,1,0);
  FUN_00cf9eec(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc7818(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0xc,1);
  return;
}




void FUN_00dc7824(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Idris_Ability_A_Blink");
  lVar2 = FUN_00d09310();
  FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x390));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar4,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,"MoveStop");
  plVar3 = (long *)FUN_00cfab04(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Idris_A_FlashAtOrigin");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  (**(code **)(*plVar3 + 0x100))(plVar3,FUN_00dc6b80);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar4,FUN_00dc7a0c);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfb44c(auStack_48);
  (**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Idris_PostAbilityBonuses_02bf0900);
  local_38 = FUN_00dc7818;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  plVar3 = (long *)FUN_00cfab04(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Idris_A_FlashAtDestination");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc7a0c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dc7a20(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfc8,2,9);
  return;
}




void FUN_00dc7a38(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d5a3d0(uVar1,DAT_031abfc8,2,9);
  *param_2 = uVar2;
  return;
}




void FUN_00dc7a74(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_031abfc8,2,9);
  *param_2 = -fVar2;
  return;
}




void FUN_00dc7ab4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability02_ThrowChakram",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x394));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Idris_Ability_B",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar3,PTR_s_Buff_Idris_StaminaPaused_02bf08d8,FUN_00dc7644,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar3,0);
  lVar5 = FUN_00cf9f7c(auStack_48);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  lVar2 = lVar5 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Idris_Talent_ChaChaChakram_02bedf90;
  uVar3 = FUN_00cfb17c(lVar2);
  uVar3 = FUN_00cfcad8(uVar3,0x7d,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00dc7a38);
  uVar3 = FUN_00cfb17c(lVar2);
  uVar3 = FUN_00cfcad8(uVar3,0x7d,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00dc7a74);
  uVar3 = FUN_00cfb17c(lVar2);
  uVar3 = FUN_00cfcad8(uVar3,0x7d,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar5 + 200);
  uVar3 = FUN_00cfcad8(uVar3,0x7d,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar3,PTR_s_Buff_Idris_PostAbilityBonuses_02bf0900,FUN_00dc7818,1,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cfacb4(auStack_48);
  FUN_00cf50b0(0x3e99999a);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc7d0c(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d5048c(param_1);
    uVar8 = FUN_00d51778(param_1);
    fVar13 = (float)FUN_00d59f54(lVar7,4,4,0x19,0);
    cVar2 = FUN_00d55870(lVar7);
    cVar3 = FUN_00d55870(uVar8);
    if (cVar2 == cVar3) {
      fVar14 = (float)FUN_00d59f54(lVar7,4,6,0x19,0);
      uVar12 = *(undefined4 *)(lVar7 + 0x260);
      lVar9 = FUN_00d51778(param_1);
      uVar5 = *(undefined4 *)(lVar9 + 0x260);
      ppuVar10 = &PTR_s_Buff_Idris_C_AttachedAlly_02bf0948;
    }
    else {
      fVar14 = (float)FUN_00d59f54(lVar7,4,5,0x19,0);
      uVar12 = *(undefined4 *)(lVar7 + 0x260);
      lVar9 = FUN_00d51778(param_1);
      uVar5 = *(undefined4 *)(lVar9 + 0x260);
      ppuVar10 = &PTR_s_Buff_Idris_C_AttachedEnemy_02bf0940;
    }
    puVar11 = *ppuVar10;
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(0xbf800000,0,0,auStack_b0,uVar12,uVar5,puVar11,uVar4,1,0,0);
    FUN_00ce20fc(auStack_b0);
    puVar11 = PTR_s_Buff_Idris_C_AttachmentHandler_02bf0928;
    uVar12 = *(undefined4 *)(lVar7 + 0x260);
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(fVar13 + fVar14,0,0,auStack_b0,uVar12,uVar12,puVar11,uVar5,1,0,0);
    FUN_00ce20fc(auStack_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc7ec0(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,4,0x19,0);
  return;
}




void FUN_00dc7ed4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfa2dc(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x3f4ccccd,uVar3,PTR_s_Buff_Idris_DontCatch_02bf08c8,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar3,"Effect_Idris_C_FlashAtOrigin",0,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x39c));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Idris_Ability_C_Attach",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability03_Start",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00dc817c);
  FUN_00cf7578(uVar3,0);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00cf9ab4(auStack_48);
    FUN_00cf44e8(0x3e99999a,uVar3,PTR_s_Buff_BlockDebuffs_02beb3c8,1,0);
    uVar3 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3dcccccd);
    FUN_00cf7578(uVar3,0);
  }
  uVar3 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar3,FUN_00dc7d0c);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x7e,"CenterBody");
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0xbf800000,uVar3,PTR_s_Buff_Idris_C_Attached_02bf0930,1,0);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar3,PTR_s_Buff_Idris_StaminaPaused_02bf08d8,FUN_00dc7644,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00dc7ec0);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0xbf800000,uVar3,PTR_s_Buff_Idris_C_AttachedLeapModal_02bf0938,1,0);
  FUN_00cf9eec(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

