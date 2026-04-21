// functions/00d3a — 14 functions
#include "libGameKindred.h"




void FUN_00d3a098(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Buttjet");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Joule_Mechlights");
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Fork");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Joule_MechFork");
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Buttjet");
                    /* WARNING: Could not recover jumptable at 0x00d3a140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Joule_HeadBuff");
  return;
}




void FUN_00d3a144(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d3a390(lVar1 + 0x10);
  FUN_00d48198(uVar2,FUN_00d483cc);
  return;
}




void FUN_00d3a168(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4403c(param_1,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_LFootMech");
  uVar3 = FUN_00da2040(uVar3,"Effect_Joule_MechJets");
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_RFootMech");
  uVar3 = FUN_00da2040(uVar3,"Effect_Joule_MechJets");
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_Buttjet");
  uVar3 = FUN_00da2040(uVar3,"Effect_Joule_Buttjet");
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Joule_RecallDust");
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00d3a2b8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d3f580(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d3a390(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a19fc();
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




void FUN_00d3a3e0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auStack_ec [4];
  undefined8 local_e8;
  undefined1 auStack_e0 [88];
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar9 = FUN_00ceab48();
  if ((uVar9 & 1) == 0) goto LAB_00d3a8d4;
  FUN_00d69224(param_1,&local_e8);
  lVar10 = FUN_00d66d28(local_e8);
  uVar5 = *(ushort *)(lVar10 + 0x88) & 0x1f;
  if ((uVar5 != 0x1f) && (*(short *)(lVar10 + (ulong)uVar5 * 0x38 + 0x90) == 4)) goto LAB_00d3a8d4;
  lVar14 = *(long *)(lVar10 + 0x18);
  lVar15 = lVar14;
  if (lVar14 == 0) {
    lVar15 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_0312ec00) break;
      lVar15 = *(long *)(lVar15 + 0x20);
    } while (lVar15 != 0);
    do {
      if (*(int *)(*(long *)(lVar14 + 8) + 0xa4) == DAT_02c7bf48) break;
      lVar14 = *(long *)(lVar14 + 0x20);
    } while (lVar14 != 0);
  }
  fVar17 = (float)FUN_009bc24c();
  lVar11 = FUN_00d67c60(local_e8);
  uVar4 = FUN_00e6a474("lastTime");
  uVar4 = FUN_0091ed5c("lastTime",uVar4,0x12345678);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x100) + 0x10))(lVar11 + 0x100,uVar4);
  fVar20 = *pfVar12;
  fVar18 = (float)thunk_FUN_00d086f0(lVar10,0,1);
  uVar5 = FUN_00d6bbac(lVar14,DAT_0315cefc,auStack_ec);
  uVar6 = FUN_00d6bbac(lVar14,DAT_0315cf00,0);
  uVar4 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_00d6b630(lVar14,DAT_0315cf00,0xffffffff);
  }
  uVar16 = *(ushort *)(lVar10 + 0x88) & 0x1f;
  if (((uVar16 == 0x1f) || (*(short *)(lVar10 + (ulong)uVar16 * 0x38 + 0x90) != 2)) &&
     (uVar9 = FUN_00d7d300(lVar15), (uVar9 & 1) != 0)) {
    uVar16 = uVar5 ^ 1;
  }
  else {
    lVar11 = FUN_00d67c60(local_e8);
    uVar7 = FUN_00e6a474("lastTime");
    uVar7 = FUN_0091ed5c("lastTime",uVar7,0x12345678);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x100) + 0x10))(lVar11 + 0x100,uVar7);
    uVar16 = 0;
    *pfVar12 = fVar17;
    if ((uVar5 & 1) != 0) {
      uVar7 = FUN_00d6b630(lVar14,DAT_0315cefc,0xffffffff);
      FUN_00d009d0(auStack_e0,*(undefined4 *)(lVar10 + 0x260),uVar7);
      FUN_00ce20fc(auStack_e0);
      uVar16 = 0;
    }
  }
  if ((fVar18 <= fVar17 - fVar20) || (ABS((fVar17 - fVar20) - fVar18) < 0.1)) {
    uVar7 = FUN_00e6a474("timeLastSentReceivedDamage");
    uVar7 = FUN_0091ed5c("timeLastSentReceivedDamage",uVar7,0x12345678);
    pfVar12 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar7);
    fVar20 = *pfVar12;
    uVar9 = FUN_00d7d300(lVar15);
    puVar2 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_02beb9e8;
    if ((uVar9 & 1) != 0) {
      uVar13 = *(ushort *)(lVar10 + 0x88) & 0x1f;
      if (uVar13 == 0x1f) {
        bVar3 = true;
      }
      else {
        uVar13 = (uint)*(ushort *)(lVar10 + (ulong)uVar13 * 0x38 + 0x90);
        if (uVar13 - 3 < 2) goto LAB_00d3a7a4;
        bVar3 = uVar13 != 2;
      }
      if ((fVar18 < fVar17 - fVar20) && (bVar3)) {
        if ((uVar6 & 1) == 0) {
          uVar7 = *(undefined4 *)(lVar10 + 0x260);
          uVar8 = FUN_00ceb350();
          FUN_00cfe864(0xbf800000,0,0,auStack_e0,uVar7,uVar7,puVar2,uVar8,1,0,0);
        }
        else {
          FUN_00d04628(0xbf800000,auStack_e0,*(undefined4 *)(lVar10 + 0x260),uVar4);
        }
        FUN_00ce20fc(auStack_e0);
        uVar16 = 0;
        if ((uVar5 & 1) != 0) {
          uVar7 = FUN_00d6b630(lVar14,DAT_0315cefc,0xffffffff);
          FUN_00d009d0(auStack_e0,*(undefined4 *)(lVar10 + 0x260),uVar7);
          FUN_00ce20fc(auStack_e0);
          uVar16 = 0;
        }
      }
    }
  }
LAB_00d3a7a4:
  uVar9 = FUN_00d7d300(lVar15);
  if ((((uVar9 & 1) == 0) && (((uVar6 ^ 1) & 1) == 0)) &&
     (uVar9 = FUN_00d6c2bc(lVar14,uVar4,1), (uVar9 & 1) != 0)) {
    uVar7 = *(undefined4 *)(lVar10 + 0x260);
    thunk_FUN_00d086f0(lVar10,3,1);
    FUN_00d04628(auStack_e0,uVar7,uVar4);
    FUN_00ce20fc(auStack_e0);
    fVar18 = (float)thunk_FUN_00d086f0(lVar10,0,1);
    lVar10 = FUN_00d67c60(local_e8);
    uVar4 = FUN_00e6a474("lastTime");
    uVar4 = FUN_0091ed5c("lastTime",uVar4,0x12345678);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x100) + 0x10))(lVar10 + 0x100,uVar4);
    *pfVar12 = fVar17 + fVar18;
  }
  else if (((uVar16 & 1) != 0) &&
          (((uVar6 & 1) == 0 || (uVar9 = FUN_00d6c2bc(lVar14,uVar4,1), (uVar9 & 1) == 0)))) {
    puVar2 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_02beb9f0;
    uVar4 = *(undefined4 *)(lVar10 + 0x260);
    uVar19 = thunk_FUN_00d086f0(lVar10,0,1);
    uVar7 = FUN_00ceb350();
    FUN_00cfe864(uVar19,0,0,auStack_e0,uVar4,uVar4,puVar2,uVar7,1,0,0);
    FUN_00ce20fc(auStack_e0);
  }
LAB_00d3a8d4:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3a910(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00d69294(param_1,&local_a8,&local_b0);
  lVar7 = FUN_00d66d28(local_a8);
  uVar8 = FUN_00daa578(local_b0,lVar7);
  puVar5 = PTR_s_Buff_Krul_HeroicPerk_ShadowsEmpo_02beb9f8;
  if ((uVar8 & 1) != 0) {
    lVar9 = *(long *)(local_b0 + 0x20);
    if ((lVar9 != 0) &&
       (((uVar1 = *(ushort *)(lVar9 + 0x88) & 0x1f, uVar1 == 0x1f ||
         (1 < *(ushort *)(lVar9 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
        ((*(byte *)(local_b0 + 0xc) >> 2 & 1) != 0)))) {
      uVar2 = *(undefined4 *)(lVar9 + 0x260);
      uVar3 = *(undefined4 *)(lVar7 + 0x260);
      uVar10 = thunk_FUN_00d086f0(lVar7,3,1);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(uVar10,0,0,auStack_a0,uVar3,uVar2,puVar5,uVar6,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3aa34(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_80;
  long local_78;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69294(param_1,&local_80,&local_78);
    lVar4 = FUN_00d66d28(local_80);
    uVar3 = FUN_00daa578(local_78,lVar4);
    if (((uVar3 & 1) != 0) && ((*(byte *)(local_78 + 0xc) >> 2 & 1) != 0)) {
      uVar7 = FUN_009bc24c();
      uVar2 = FUN_00e6a474("timeLastSentReceivedDamage");
      uVar2 = FUN_0091ed5c("timeLastSentReceivedDamage",uVar2,0x12345678);
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
      *puVar5 = uVar7;
      lVar6 = *(long *)(lVar4 + 0x18);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar6 = *(long *)(lVar6 + 0x20);
      }
      uVar3 = FUN_00d6bbac(lVar6,DAT_0315cefc,0);
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined4 *)(lVar4 + 0x260);
        uVar7 = FUN_00d6b630(lVar6,DAT_0315cefc,0xffffffff);
        FUN_00d009d0(auStack_70,uVar2,uVar7);
        FUN_00ce20fc(auStack_70);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3ab84(undefined8 param_1)

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
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3a3e0;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("lastTime");
  uVar3 = FUN_0091ed5c("lastTime",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3aa34;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("timeLastSentReceivedDamage");
  uVar3 = FUN_0091ed5c("timeLastSentReceivedDamage",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d3bc68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00d3ad20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,0);
  return;
}




void FUN_00d3ad24(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d67dcc(param_1,FUN_00d69f90);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3bc68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00d3ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  return;
}




void FUN_00d3ad74(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d66d04(param_1,8,1);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3a910;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  uVar6 = FUN_00d29f44(lVar5);
  local_48 = FUN_00d3af40;
  local_40 = 3;
  FUN_00d47690(uVar6,1,&local_48);
  plVar7 = (long *)FUN_00d2ccfc(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Effect_ShadowsEmpowerMe_GoFast");
  plVar7 = (long *)FUN_00d2945c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_Sword");
  (**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Hero009_SwordAura_Out");
  plVar7 = (long *)FUN_00d3bcb8(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"u_ghost");
  (**(code **)(*plVar7 + 0x38))(0x3f800000);
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"IdleBrush","IdleBrushShadow");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Sprint","FastMoveShadowsEmpowerMe");
  plVar7 = (long *)FUN_00d3bc68(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  (**(code **)(*plVar7 + 0x58))(plVar7,2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3af40(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00d3af4c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_48[0] = thunk_FUN_00d086f0(uVar2,2,1);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3afc4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (param_1[0x85] != 0) {
    uVar2 = FUN_00d426b0(*param_1);
    fVar3 = (float)FUN_00d59f54(uVar2,1,6,9,1);
    uVar1 = FUN_00d66cf4(*param_1);
    *(float *)(param_1[0x85] + 0x38) = *(float *)(param_1[0x85] + 0x38) + fVar3 * (float)uVar1;
  }
  return;
}

