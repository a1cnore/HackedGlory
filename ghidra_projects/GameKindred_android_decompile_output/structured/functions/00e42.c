// functions/00e42 — 24 functions
#include "libGameKindred.h"




void FUN_00e4201c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  if ((*(byte *)(local_58 + 0xc) >> 4 & 1) != 0) goto LAB_00e42120;
  lVar4 = FUN_00d66d28(local_50);
  uVar5 = FUN_00daa58c(local_58,lVar4);
  if ((uVar5 & 1) != 0) {
    if ((*(byte *)(lVar4 + 0x2f9) >> 1 & 1) != 0) goto LAB_00e42120;
    lVar6 = FUN_00d67c60(local_50);
    puVar2 = PTR_s_pBuffVar_Taka_SmokeBombInvisibil_02bf10b8;
    uVar3 = FUN_00e6a474(PTR_s_pBuffVar_Taka_SmokeBombInvisibil_02bf10b8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar3);
    fVar10 = *pfVar7;
    fVar8 = (float)FUN_009bc24c();
    fVar9 = (float)FUN_00d59f54(lVar4,1,4,0x19,0);
    if (fVar8 - fVar10 <= fVar9) goto LAB_00e42120;
  }
  uVar5 = FUN_00daa578(local_58,lVar4);
  if (((uVar5 & 1) != 0) || (uVar5 = FUN_00d6a814(lVar4,1), (uVar5 & 1) == 0)) {
    FUN_00d436dc(local_50);
  }
LAB_00e42120:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42150(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  code *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00d66d28();
  uVar3 = FUN_00d44be0(uVar6,PTR_s_Buff_Taka_Talent_ProtectiveDecoy_02bf20b0);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    uVar14 = FUN_009bc24c();
    lVar8 = FUN_00d67c60(param_1);
    lVar9 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_pBuffVar_Taka_SmokeBombInvisibil_02bf10b8;
    uVar4 = FUN_00e6a474(PTR_s_pBuffVar_Taka_SmokeBombInvisibil_02bf10b8);
    uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar9 + 0x100) + 8))(lVar9 + 0x100,uVar4);
    puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar4);
    *puVar10 = uVar14;
    lVar8 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
    uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
    uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar4;
    uVar5 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar5 * 8 + 0x40) = FUN_00e4201c;
    *(uint *)(lVar8 + 0xf8) = uVar5 + 1;
  }
  lVar8 = FUN_00d63f30(param_1);
  plVar11 = (long *)FUN_00d2945c(lVar8 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x98))(plVar11,4);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x60))();
  plVar11 = (long *)(**(code **)(*plVar11 + 0x48))(plVar11,"Effect_Taka_SmokeBomb");
  (**(code **)(*plVar11 + 0x80))(plVar11,0);
  plVar11 = (long *)FUN_00d2cc5c(lVar8 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Taka_Abilty_2_Start");
  lVar8 = FUN_00d09310();
  FUN_00d09734(*(undefined4 *)(lVar8 + 0x144));
  (**(code **)(*plVar11 + 0x28))(plVar11);
  lVar8 = FUN_00d65010(param_1);
  lVar8 = lVar8 + 0x10;
  plVar11 = (long *)FUN_00d2945c(lVar8);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x60))();
  (**(code **)(*plVar11 + 0x48))(plVar11,"Effect_Taka_SmokeBomb_Trail");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"Idle","IdleBox");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"Move","MoveBox");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"MoveStart","MoveBox_Start");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"MoveStop","MoveBox_Stop");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"Sprint","MoveBox");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"IdleCombat","IdleBox");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"MoveCombat","MoveBox");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"MoveStartCombat","MoveBox_Start");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"MoveStopCombat","MoveBox_Stop");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"MoveSheath","MoveBox");
  plVar11 = (long *)FUN_00d2df44(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,"IdleSheath","IdleBox");
  uVar12 = FUN_00d29f44(lVar8);
  local_88 = FUN_00e42690;
  local_80 = 3;
  FUN_00d47690(uVar12,1,&local_88);
  FUN_00d2b638(lVar8);
  plVar11 = (long *)FUN_00d29c34(lVar8);
  (**(code **)(*plVar11 + 0x30))(plVar11,0xf);
  uVar12 = FUN_00d63734(param_1);
  lVar8 = FUN_00d4b5ac(uVar12,PTR_s_Ability__Taka__B_02bef5e8);
  FUN_00d2a320(lVar8 + 0x10);
  lVar8 = FUN_00d64980(param_1);
  lVar8 = lVar8 + 0x10;
  plVar11 = (long *)FUN_00d2945c(lVar8);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x60))();
  plVar11 = (long *)(**(code **)(*plVar11 + 0x48))(plVar11,"Effect_Taka_SmokeBomb_Reveal");
  (**(code **)(*plVar11 + 0x78))(plVar11,1);
  plVar11 = (long *)FUN_00d2cc5c(lVar8);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Taka_Abilty_2_End");
  lVar9 = FUN_00d09310();
  FUN_00d09734(*(undefined4 *)(lVar9 + 0x144));
  (**(code **)(*plVar11 + 0x28))(plVar11);
  plVar11 = (long *)FUN_00e17ea8(lVar8);
  puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x30))();
  (**(code **)*puVar13)(puVar13,PTR_s_Ability__Taka__B_02bef5e8);
  uVar5 = FUN_00ceab48();
  if ((uVar3 & uVar5 & 1) != 0) {
    fVar15 = (float)FUN_00d5a3d0(uVar6,DAT_0320ebe8,2,9);
    fVar16 = (float)FUN_00d5a3d0(uVar6,DAT_0320ebe8,3,9);
    uVar6 = FUN_00d64d7c(param_1);
    lVar8 = FUN_00d4891c(0x3f000000,uVar6,1);
    FUN_00d39534(lVar8 + 0x10);
    plVar11 = (long *)FUN_00d39584(lVar8 + 0x10);
    local_88 = (code *)CONCAT44(local_88._4_4_,fVar15 * 0.5 * fVar16);
    local_80 = 1;
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42690(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e426a4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar7 = FUN_00d66d28(local_98);
  iVar4 = FUN_00d66cf4(local_98);
  iVar5 = FUN_00d66cfc(local_98);
  puVar3 = PTR_s_Buff_Taka_HeroicPerk_ShowMaxKiSt_02bf1098;
  if (iVar4 == iVar5) {
    uVar1 = *(undefined4 *)(lVar7 + 0x260);
    uVar6 = FUN_00ceb350();
    FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar6,1,0,0);
  }
  else {
    uVar8 = FUN_00d9ea34(lVar7);
    local_9c = 0xffffffff;
    uVar9 = FUN_00d6bbac(uVar8,DAT_031bb2ac,&local_9c);
    if ((uVar9 & 1) == 0) goto LAB_00e42784;
    FUN_00d009d0(auStack_90,*(undefined4 *)(lVar7 + 0x260),local_9c);
  }
  FUN_00ce20fc(auStack_90);
LAB_00e42784:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e427ac(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = FUN_00d66d28(*param_1);
  uVar1 = FUN_00d66cf4(*param_1);
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,3,1);
  return 1.0 - fVar3 * (float)uVar1;
}




void FUN_00e42808(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d65bcc();
  lVar2 = FUN_00d48788();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Taka_HeroicPerk_ShowMaxKiSt_02bf1098);
  lVar2 = FUN_00d6592c(param_1);
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00d2dea4(lVar2);
  local_58 = FUN_00e427ac;
  local_50 = 4;
  FUN_00d97d24(uVar4,PTR_s_Ability__Taka__A_02bef5e0,&local_58,1);
  uVar4 = FUN_00d2dea4(lVar2);
  local_58 = FUN_00e427ac;
  local_50 = 4;
  FUN_00d97d24(uVar4,PTR_s_Ability__Taka__B_02bef5e8,&local_58,1);
  uVar4 = FUN_00d2dea4(lVar2);
  local_58 = FUN_00e427ac;
  local_50 = 4;
  FUN_00d97d24(uVar4,"Taka_Ultimate",&local_58,1);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4291c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d4403c(param_1,0);
  lVar1 = FUN_00d63f30(param_1);
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Taka_SmokeBombInvisibility_02bf10c0);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Recall_Smoke");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_00d6624c(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Recall_Smoke_Landing");
                    /* WARNING: Could not recover jumptable at 0x00e429dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e429e0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099fe60();
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




void FUN_00e42a30(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69294(param_1,&local_30,&local_38);
    lVar3 = FUN_00d66d28(local_30);
    if (((*(int *)(local_38 + 0x18) == *(int *)(lVar3 + 0x260)) && (*(long *)(local_38 + 0x28) != 0)
        ) && ((*(byte *)(*(long *)(local_38 + 0x28) + 0x2f4) >> 4 & 1) != 0)) {
      *(undefined4 *)(local_38 + 0x54) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42abc(void)

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
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e42a30;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e42b2c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Tut_Compass_Arrow");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42ba8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Tut_Compass_Arrow_2");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42c24(void)

{
  return;
}




void FUN_00e42c28(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x11e);
  return;
}




void FUN_00e42c48(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  FUN_00d29be4(lVar1 + 0x10);
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x84);
  return;
}




void FUN_00e42c7c(undefined8 param_1)

{
  FUN_00d42ce8(param_1,1,0,0);
  return;
}




void FUN_00e42c8c(undefined8 param_1)

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
  lVar3 = FUN_00d4891c(0x3f800000,uVar2,0);
  plVar4 = (long *)FUN_00d2b6d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4,7);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48[0] = 0x447a0000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,3,0,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42d50(undefined8 param_1)

{
  FUN_00d42ce8(param_1,4,0,0);
  return;
}




void FUN_00e42d60(undefined8 param_1)

{
  FUN_00d42ce8(param_1,8,0,0);
  return;
}




undefined4 FUN_00e42d70(void)

{
  int iVar1;
  
  iVar1 = FUN_00ceacf4();
  if (iVar1 < 0x2d) {
    if ((iVar1 != 3) && (iVar1 != 4)) {
      return 0x3f800000;
    }
  }
  else {
    if (iVar1 == 0x2d) {
      return 0x3f333333;
    }
    if (iVar1 != 0x2e) {
      return 0x3f800000;
    }
  }
  return 0x3f666666;
}




undefined4 FUN_00e42dd4(void)

{
  int iVar1;
  
  iVar1 = FUN_00ceacf4();
  if (iVar1 < 0x2d) {
    if ((iVar1 != 3) && (iVar1 != 4)) {
      return 0x3f800000;
    }
  }
  else {
    if (iVar1 == 0x2d) {
      return 0x3fa66666;
    }
    if (iVar1 != 0x2e) {
      return 0x3f800000;
    }
  }
  return 0x3f8ccccd;
}




undefined4 FUN_00e42e38(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3dcccccd;
  iVar1 = FUN_00ceacf4();
  if ((1 < iVar1 - 3U) && (iVar1 != 0x2e)) {
    if (iVar1 == 0x2d) {
      uVar2 = 0x3e99999a;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00e42e8c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,5);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e42d70;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,5);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bca4(uVar2,1);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e42dd4;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48 = FUN_00e42e38;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,4,2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e42f90(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_38,&local_30);
  lVar4 = local_30;
  uVar2 = FUN_00d66d28(local_38);
  uVar3 = FUN_00daa58c(lVar4,uVar2);
  lVar4 = local_30;
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_00d66d28(local_38);
    uVar3 = FUN_00daa578(lVar4,uVar2);
    if ((uVar3 & 1) != 0) {
      *(float *)(local_30 + 0x54) = *(float *)(local_30 + 0x54) + *(float *)(local_30 + 0x54);
    }
  }
  else {
    lVar4 = FUN_00d66d28(local_38);
    lVar4 = *(long *)(lVar4 + 0x40);
    fVar5 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
            (*(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0)
            );
    if (DAT_031bb420 <= fVar5) {
      fVar5 = DAT_031bb420;
    }
    fVar6 = DAT_031bb360;
    if (DAT_031bb360 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(lVar4 + 0x308) / fVar6 + -0.1;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = *(float *)(local_30 + 0x54) * fVar5;
    *(float *)(local_30 + 0x54) = fVar5;
    if ((*(long *)(local_30 + 0x28) != 0) &&
       ((*(byte *)(*(long *)(local_30 + 0x28) + 0x2f5) >> 5 & 1) != 0)) {
      fVar5 = fVar5 * 0.5;
      *(float *)(local_30 + 0x54) = fVar5;
    }
    if (*(float *)(lVar4 + 0x308) <= fVar5) {
      *(float *)(local_30 + 0x54) = *(float *)(lVar4 + 0x308) + -1.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

