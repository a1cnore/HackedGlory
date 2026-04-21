// functions/00d30 — 11 functions
#include "libGameKindred.h"




void FUN_00d30024(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [40];
  undefined1 auStack_120 [88];
  undefined1 auStack_c8 [112];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_150,&local_158);
  lVar6 = FUN_00d66d28(local_150);
  uVar7 = FUN_00daa578(local_158,lVar6);
  if (((uVar7 & 1) != 0) && ((*(byte *)(local_158 + 0xc) >> 2 & 1) != 0)) {
    uVar8 = FUN_00d6eb50();
    uVar8 = FUN_00d6eb5c(uVar8,PTR_s__Item_AlternatingCurrent__02beb010);
    fVar11 = (float)FUN_00d08524(uVar8,0,1);
    fVar12 = (float)FUN_00d08524(uVar8,1,1);
    uVar1 = *(undefined4 *)(local_158 + 0x10);
    uVar5 = *(undefined4 *)(local_158 + 0x18);
    lVar10 = *(long *)(*(long *)(local_158 + 0x28) + 0x40);
    fVar13 = (*(float *)(lVar10 + 0x1b4) + 1.0) *
             (*(float *)(lVar10 + 0x4c) +
             *(float *)(lVar10 + 0x100) * (*(float *)(lVar10 + 0x268) + 1.0));
    if (DAT_0315ce44 <= fVar13) {
      fVar13 = DAT_0315ce44;
    }
    fVar14 = DAT_0315cd80._4_4_;
    if (DAT_0315cd80._4_4_ <= fVar13) {
      fVar14 = fVar13;
    }
    uVar8 = FUN_00daa52c(local_158,1);
    puVar9 = (undefined8 *)FUN_00d67b14(local_150);
    FUN_00daa148(fVar11 + fVar12 * fVar14,auStack_c8,uVar1,uVar5,1,1,uVar8,*puVar9,0,1);
    FUN_00910c08(auStack_c8);
    puVar3 = PTR_s_Buff_Item_ShowAltCurrentHitEffec_02beb6a0;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar5 = *(undefined4 *)(local_158 + 0x18);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(0x3f000000,0,0,auStack_120,uVar1,uVar5,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_120);
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar5 = FUN_00d66d34(local_150);
    FUN_00d009d0(auStack_148,uVar1,uVar5);
    FUN_00ce20fc(auStack_148);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d30224(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d30024;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x30);
  FUN_00d3e534();
  uVar6 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar6);
  uVar6 = FUN_00d47dec(uVar6,"Bone_LeftHand");
  FUN_00da2040(uVar6,"Effect_StormGuard");
  FUN_00d3e534();
  uVar6 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar6);
  uVar6 = FUN_00d47dec(uVar6,"Bone_RightHand");
  FUN_00da2040(uVar6,"Effect_StormGuard");
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 8);
  FUN_00d3e534();
  uVar6 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3036c(undefined8 param_1)

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
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c64(uVar2,"Bone_CenterMass");
  uVar2 = FUN_00da2040(uVar2,"Effect_AC_Proc");
  FUN_00da2070(uVar2,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c64(uVar2,"Bone_CenterMass");
  uVar2 = FUN_00da2040(uVar2,"Effect_AC_Proc");
  FUN_00da2070(uVar2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d30454(undefined8 param_1)

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
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c64(uVar2,"Bone_CenterMass");
  uVar2 = FUN_00da2040(uVar2,"Effect_AfterShock_Proc");
  FUN_00da2070(uVar2,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c64(uVar2,"Bone_CenterMass");
  uVar2 = FUN_00da2040(uVar2,"Effect_AfterShock_Proc");
  FUN_00da2070(uVar2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d3053c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,PTR_s__Item_HealingFlask__02beb0b0);
  fVar2 = (float)FUN_00d091cc(param_2,uVar1,2,3);
  fVar3 = (float)FUN_00d08524(uVar1,0,1);
  fVar4 = (float)FUN_00d67b0c(*param_1);
  return (fVar2 * fVar4) / fVar3;
}




void FUN_00d305c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *local_80;
  undefined4 local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_HealingFlask__02beb0b0);
  fVar7 = (float)FUN_00d08524(uVar2,0,1);
  uVar3 = FUN_00d66d28(param_1);
  FUN_00d67b04(0x3e99999a,param_1);
  uVar4 = FUN_00d64d7c(param_1);
  lVar5 = FUN_00d4891c(0x3e99999a,uVar4,0);
  FUN_00d39534(lVar5 + 0x10);
  plVar6 = (long *)FUN_00d39584(lVar5 + 0x10);
  local_80 = FUN_00d3053c;
  local_78 = 5;
  (**(code **)(*plVar6 + 0x30))(plVar6,&local_80);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,lVar5 + 0x30);
  uVar4 = FUN_00d091cc(uVar3,uVar2,1,3);
  FUN_00d3e534();
  uVar3 = FUN_00d2b564();
  FUN_00d42654(&local_80,uVar3);
  FUN_00d40908(uVar4,uVar3,4);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_CenterMass");
  FUN_00da2040(uVar3,"Effect_HealingFlask");
  FUN_00da20b8(0);
  lVar5 = FUN_00d66d28(param_1);
  lVar5 = *(long *)(lVar5 + 0x40);
  fVar8 = (*(float *)(lVar5 + 0x1a8) + 1.0) *
          (*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0xf4) * (*(float *)(lVar5 + 0x25c) + 1.0));
  if (DAT_0315ce38 <= fVar8) {
    fVar8 = DAT_0315ce38;
  }
  fVar9 = DAT_0315cd78;
  if (DAT_0315cd78 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar8 = (float)FUN_00d08524(uVar2,3,1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,lVar5 + 0x28);
  FUN_00d3e534();
  lVar5 = FUN_00d29818();
  FUN_00d42654(&local_80,lVar5);
  *(float *)(lVar5 + 0x10) = (fVar8 * fVar9 * 0.3) / fVar7;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d307f4(undefined8 param_1)

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
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"OverHead");
  FUN_00da2040(uVar3,"Effect_MinionCandy_buff");
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_MinionCandy__02beb0c8);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d08524(uVar3,5,1);
  FUN_00d40e24(uVar4,7,1);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d08524(uVar3,6,1);
  FUN_00d40e24(uVar4,8,1);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d08524(uVar3,3,1);
  FUN_00d40e24(uVar4,4,2);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d08524(uVar3,4,1);
  FUN_00d40e24(uVar4,0x1c,2);
  FUN_00d3e534();
  uVar4 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d08524(uVar3,8,1);
  FUN_00d472ec(uVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d309ec(undefined8 param_1)

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
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2cb84();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d3e888(0xbf800000,0,0,uVar2,PTR_s_Buff_Item_BreakingPoint_02beb6c8,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x18);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d46fc0(uVar2,PTR_s_Buff_Item_BreakingPoint_02beb6c8);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d30b1c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_a0,&local_a8);
  lVar6 = FUN_00d66d28(local_a0);
  uVar7 = FUN_00daa578(local_a8,lVar6);
  if (((((uVar7 & 1) != 0) && (*(int *)(local_a8 + 8) == 0)) && (*(long *)(local_a8 + 0x20) != 0))
     && ((*(byte *)(*(long *)(local_a8 + 0x20) + 0x2f4) & 1) != 0)) {
    uVar12 = FUN_009bc24c();
    lVar8 = FUN_00d67c60(local_a0);
    puVar2 = PTR_s_breakingPointTimeOfLastAttack_02beb6d8;
    uVar3 = FUN_00e6a474(PTR_s_breakingPointTimeOfLastAttack_02beb6d8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar3);
    *puVar9 = uVar12;
    FUN_00d66e98(local_a0);
    fVar15 = *(float *)(local_a8 + 0x54);
    lVar8 = FUN_00d67c60(local_a0);
    puVar2 = PTR_s_breakingPointRemainingDamage_02beb6d0;
    uVar3 = FUN_00e6a474(PTR_s_breakingPointRemainingDamage_02beb6d0);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar3);
    fVar15 = fVar15 + *pfVar10;
    uVar11 = FUN_00d6eb50();
    uVar11 = FUN_00d6eb5c(uVar11,PTR_s__Item_BreakingPoint__02beb038);
    fVar13 = (float)FUN_00d08524(uVar11,2,1);
    uVar3 = 6;
    if (*(char *)(*(long *)(lVar6 + 0x38) + 0x60) != '\0') {
      uVar3 = 3;
    }
    fVar14 = (float)FUN_00d08524(uVar11,uVar3,1);
    iVar4 = FUN_00d66cf4(local_a0);
    fVar13 = (float)(int)(fVar13 + fVar14 * (float)iVar4);
    iVar4 = 0;
    if (fVar13 < fVar15) {
      do {
        fVar15 = fVar15 - fVar13;
        fVar13 = (float)(int)(fVar14 + fVar13);
        iVar4 = iVar4 + 1;
      } while (fVar13 < fVar15);
    }
    lVar8 = FUN_00d67c60(local_a0);
    puVar2 = PTR_s_breakingPointRemainingDamage_02beb6d0;
    uVar3 = FUN_00e6a474(PTR_s_breakingPointRemainingDamage_02beb6d0);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar3);
    *pfVar10 = fVar15;
    if (iVar4 != 0) {
      uVar3 = *(undefined4 *)(lVar6 + 0x260);
      uVar12 = FUN_00d66d34(local_a0);
      iVar5 = FUN_00d66cf4(local_a0);
      FUN_00d048bc(auStack_98,uVar3,uVar12,iVar5 + iVar4,1);
      FUN_00ce20fc(auStack_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d30d9c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_90;
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d69224(param_1,&local_90);
    lVar8 = FUN_00d66d28(local_90);
    fVar13 = (float)FUN_009bc24c();
    puVar2 = PTR_s_breakingPointTimeOfLastAttack_02beb6d8;
    uVar3 = FUN_00e6a474(PTR_s_breakingPointTimeOfLastAttack_02beb6d8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    pfVar9 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    fVar15 = *pfVar9;
    uVar10 = FUN_00d6eb50();
    uVar10 = FUN_00d6eb5c(uVar10,PTR_s__Item_BreakingPoint__02beb038);
    fVar14 = (float)FUN_00d08524(uVar10,4,1);
    if (fVar15 + fVar14 < fVar13) {
      lVar11 = FUN_00d67c60(local_90);
      puVar2 = PTR_s_breakingPointRemainingDamage_02beb6d0;
      uVar3 = FUN_00e6a474(PTR_s_breakingPointRemainingDamage_02beb6d0);
      uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
      puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x100) + 0x10))(lVar11 + 0x100,uVar3);
      *puVar12 = 0;
      iVar4 = FUN_00d66cf4(local_90);
      if (iVar4 != 0) {
        uVar5 = FUN_00d66cf4(local_90);
        fVar13 = (float)FUN_00d08524(uVar10,5,1);
        uVar3 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = FUN_00d66d34(local_90);
        FUN_00d048bc(auStack_88,uVar3,uVar6,
                     (int)((float)uVar5 - fVar13) &
                     ((int)((float)uVar5 - fVar13) >> 0x1f ^ 0xffffffffU),1);
        FUN_00ce20fc(auStack_88);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d30f38(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d30b1c;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d30d9c;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_breakingPointTimeOfLastAttack_02beb6d8;
  uVar4 = FUN_00e6a474(PTR_s_breakingPointTimeOfLastAttack_02beb6d8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_breakingPointRemainingDamage_02beb6d0;
  uVar4 = FUN_00e6a474(PTR_s_breakingPointRemainingDamage_02beb6d0);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_breakingPointRemainingDamage_02beb6d0;
  uVar4 = FUN_00e6a474(PTR_s_breakingPointRemainingDamage_02beb6d0);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  *puVar6 = 0;
  FUN_00d67794(param_1,0);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x30);
  uVar7 = FUN_00d6eb50();
  uVar7 = FUN_00d6eb5c(uVar7,PTR_s__Item_BreakingPoint__02beb038);
  FUN_00d3e534();
  uVar8 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar8);
  FUN_00d08524(uVar7,1,1);
  FUN_00d40e24(uVar8,4,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

