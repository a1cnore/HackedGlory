// functions/00e2f — 14 functions
#include "libGameKindred.h"




void FUN_00e2f210(void)

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
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2f274(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_f8 [16];
  undefined8 local_e8;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [96];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_e8);
  FUN_00d67b84(local_e8);
  uVar5 = FUN_00d9e390();
  lVar6 = FUN_00d66d28(local_e8);
  FUN_00d55794(lVar6,auStack_f8,0);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4ddc4(auStack_b8);
  FUN_00d4dca4(auStack_b8,"Lyra_Portal",0);
  FUN_00d4daf4(auStack_b8,1,1,0,lVar6);
  FUN_00d59f54(uVar5,3,5,0x19,0);
  FUN_00d4db48(auStack_b8,auStack_f8);
  iVar3 = FUN_00d9e840(auStack_b8,auStack_58,4,0);
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar4 = FUN_00d66d34(local_e8);
    FUN_00d009d0(auStack_e0,uVar1,uVar4);
    FUN_00ce20fc(auStack_e0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2f38c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d67b04(0x3e4ccccd,param_1);
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2f274;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e2f41c(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e2f480;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2f480(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,8,0x19,0);
  return;
}




void FUN_00e2f494(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_Arrive");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))();
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00e13b48(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_Arrive");
  FUN_00e30f38(lVar1 + 0x10);
  return;
}




void FUN_00e2f51c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar3 = FUN_00d9e390();
  lVar4 = FUN_00d65010(param_1);
  uVar5 = FUN_00d29c84(lVar4 + 0x10);
  FUN_00d46b64(uVar5,0x20);
  plVar6 = (long *)FUN_00d29c34(lVar4 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,0xb);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 0x28);
  FUN_00d3e534();
  uVar5 = FUN_00e30f88();
  FUN_00d42654(auStack_50,uVar5);
  FUN_00d59f54(uVar3,2,3,0x19,0);
  uVar3 = FUN_00e5d3ac(uVar5);
  uVar2 = FUN_00d6a078(param_1);
  FUN_00e5d3b4(uVar3,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00e2f60c(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00ceab48();
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    FUN_00d67b78(param_1);
    FUN_00d5cf60();
    uVar4 = FUN_00d9e390();
    iVar2 = FUN_00d5c238(uVar4,3);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




uint FUN_00e2f658(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  do {
    if (lVar2 == 0) {
      uVar1 = 0;
LAB_00e2f6a8:
      return uVar1 & 1;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02c7bf48) {
      uVar1 = FUN_00d6bbac(lVar2,DAT_031ba734,0);
      uVar1 = uVar1 ^ 1;
      goto LAB_00e2f6a8;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_00e2f6b0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [96];
  undefined1 auStack_c8 [96];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar5 = FUN_00d9e390();
  FUN_00d67b04(0x3dcccccd,param_1);
  uVar11 = FUN_00d59f54(lVar5,2,4,0x19,0);
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar5 + 0x260),PTR_s_Buff_Lyra_Talent_MobileBulwark_02bee030)
  ;
  if ((uVar6 & 1) != 0) {
    fVar10 = (float)FUN_00d5a3d0(lVar5,DAT_031ac1a4,0,9);
    uVar11 = (ulong)(uint)((float)uVar11 + fVar10);
  }
  FUN_00d67d04(uVar11,param_1);
  lVar7 = FUN_00d63f30(param_1);
  plVar8 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Lyra_Ability_B_Start");
  lVar7 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar7 + 0x2fc));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  uVar9 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_128,uVar9);
  uVar6 = FUN_00d44be0(lVar5,PTR_s_Buff_Lyra_Talent_GythianWard_02bee050);
  if ((uVar6 & 1) != 0) {
    FUN_00d4d9e8(auStack_c8);
    FUN_00d4dabc(auStack_c8,0x40000);
    FUN_00d4daf4(auStack_c8,1,0,1,0);
    fVar10 = (float)FUN_00d59f54(lVar5,2,3,0x19,0);
    FUN_00d4db48(fVar10 + 0.75,auStack_c8,&DAT_03218f30);
    FUN_00d3e534();
    uVar9 = FUN_00d3940c();
    FUN_00d42654(auStack_128,uVar9);
    FUN_00d3fad8(uVar9,auStack_c8,0,1);
    FUN_00d3e534();
    uVar9 = FUN_00d2cb84();
    FUN_00d42654(auStack_128,uVar9);
    puVar3 = PTR_s_Buff_Lyra_Talent_WardBarrier_02bee060;
    uVar12 = FUN_00d5a3d0(lVar5,DAT_031ac1b4,0,9);
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    lVar7 = FUN_00d66d28(param_1);
    FUN_00d3e888(uVar12,0,0,uVar9,puVar3,1,uVar1,*(undefined4 *)(lVar7 + 0x260),0);
    FUN_00d3e534();
    uVar9 = FUN_00d2a6c0();
    FUN_00d42654(auStack_128,uVar9);
  }
  lVar7 = FUN_00d65010(param_1);
  uVar6 = FUN_00d44be0(lVar5,PTR_s_Buff_Lyra_Talent_MobileBulwark_02bee030);
  lVar7 = lVar7 + 0x10;
  if ((uVar6 & 1) == 0) {
    plVar8 = (long *)FUN_00d2945c(lVar7);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
    plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Lyra_B_E");
    (**(code **)(*plVar8 + 0x50))(plVar8,"Effect_Lyra_B_A");
  }
  else {
    plVar8 = (long *)FUN_00e2153c(lVar7);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,FUN_00e60428);
    (**(code **)(*plVar8 + 0x18))(plVar8,"CenterBody");
    plVar8 = (long *)FUN_00d2945c(lVar7);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
    plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Lyra_B_E");
    plVar8 = (long *)(**(code **)(*plVar8 + 0x50))(plVar8,"Effect_Lyra_B_A");
    (**(code **)(*plVar8 + 0x78))(plVar8,1);
  }
  plVar8 = (long *)FUN_00e31058(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))();
  FUN_00d59f54(lVar5,2,3,0x19,0);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
  (**(code **)(*plVar8 + 0x30))(plVar8,1);
  plVar8 = (long *)FUN_00d2df94(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,"Sound_Lyra_Ability_B_Loop");
  lVar7 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar7 + 0x2fc));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_140,lVar7 + 0x28);
  FUN_00d4d9e8(auStack_c8);
  FUN_00d4dabc(auStack_c8,0x40000);
  FUN_00d4daf4(auStack_c8,0,1,0,0);
  fVar10 = (float)FUN_00d59f54(lVar5,2,3,0x19,0);
  FUN_00d4db48(fVar10 + 0.75,auStack_c8,&DAT_03218f30);
  fVar10 = (float)FUN_00d59f54(lVar5,2,3,0x19,0);
  FUN_00d4db94(fVar10 + -0.75,auStack_c8);
  FUN_00d3e534();
  uVar9 = FUN_00d3940c();
  FUN_00d42654(auStack_140,uVar9);
  FUN_00d3fad8(uVar9,auStack_c8,0,1);
  FUN_00d3e534();
  uVar9 = FUN_00d2cb84();
  FUN_00d42654(auStack_140,uVar9);
  puVar3 = PTR_s_Buff_Lyra_ImmuneToWall_02bf0c08;
  uVar12 = FUN_00d59f54(lVar5,2,7,0x19,0);
  uVar9 = FUN_00d3e888(uVar12,0,0,uVar9,puVar3,1,*(undefined4 *)(lVar5 + 0x260),0,0);
  FUN_00d3e8ec(uVar9,FUN_00e2f658);
  FUN_00d3e534();
  uVar9 = FUN_00d2cb84();
  FUN_00d42654(auStack_140,uVar9);
  puVar3 = PTR_s_Buff_Lyra_WallSlow_02bf0c10;
  fVar10 = (float)FUN_00d67b0c(param_1);
  FUN_00d3e888(fVar10 + 0.1,0,0,uVar9,puVar3,1,*(undefined4 *)(lVar5 + 0x260),0,0);
  FUN_00d3e534();
  uVar9 = FUN_00d2a6c0();
  FUN_00d42654(auStack_140,uVar9);
  FUN_00d4d9e8(auStack_128);
  FUN_00d4dabc(auStack_128,0x40000);
  FUN_00d4daf4(auStack_128,0,1,0,0);
  fVar10 = (float)FUN_00d59f54(lVar5,2,3,0x19,0);
  FUN_00d4db48(fVar10 + 0.75,auStack_128,&DAT_03218f30);
  FUN_00d3e534();
  uVar9 = FUN_00d3940c();
  FUN_00d42654(auStack_140,uVar9);
  FUN_00d3fad8(uVar9,auStack_128,0,1);
  iVar4 = FUN_00d5c238(lVar5,3);
  if (iVar4 != 0) {
    FUN_00d3e534();
    uVar9 = FUN_00d2cb84();
    FUN_00d42654(auStack_140,uVar9);
    puVar3 = PTR_s_Buff_Lyra_PortalRecentlyUsed_02bf0bd8;
    fVar10 = (float)FUN_00d67b0c(param_1);
    uVar9 = FUN_00d3e888(fVar10 + 0.1,0,0,uVar9,puVar3,1,0xffffffff,0,0);
    FUN_00d3e8ec(uVar9,FUN_00e2f60c);
  }
  FUN_00d3e534();
  uVar9 = FUN_00d2a6c0();
  FUN_00d42654(auStack_140,uVar9);
  lVar5 = FUN_00d64980(param_1);
  plVar8 = (long *)FUN_00d2cc5c(lVar5 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Lyra_Ability_B_End");
  lVar7 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar7 + 0x2fc));
  plVar8 = (long *)(**(code **)(*plVar8 + 0x28))(plVar8);
  (**(code **)(*plVar8 + 0x38))();
  FUN_00d394e4(lVar5 + 0x10);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2fd88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e2fe3c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  lVar2 = FUN_00d66d28(param_1);
  if ((*(byte *)(lVar2 + 0x2f4) & 1) != 0) {
    lVar2 = FUN_00d63f30(param_1);
    plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Lyra_Ability_B_Impact");
    lVar2 = FUN_00d09310();
    FUN_00d09c20(*(undefined4 *)(lVar2 + 0x2fc));
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2fe3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00e2fe50(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00e2fe9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"Damage",2);
  return;
}




void FUN_00e2fea0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_33c;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [16];
  undefined8 local_320;
  undefined1 auStack_318 [88];
  undefined1 auStack_2c0 [112];
  undefined1 auStack_250 [96];
  undefined1 auStack_1f0 [96];
  long local_190 [16];
  long local_110 [16];
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_320);
  lVar8 = FUN_00d66d28(local_320);
  FUN_00d5cf60();
  lVar9 = FUN_00d9e390();
  FUN_00d55794(lVar8,auStack_330,0);
  FUN_00d4d9e8(auStack_1f0);
  FUN_00d4dabc(auStack_1f0,1);
  FUN_00d4daf4(auStack_1f0,1,0,1,lVar9);
  FUN_00d59f54(lVar9,0,4,0x19,0);
  FUN_00d4db48(auStack_1f0,auStack_330);
  uVar5 = FUN_00d9e840(auStack_1f0,local_110,0x10,0);
  uVar12 = (ulong)uVar5;
  fVar15 = (float)FUN_00d59f54(lVar9,0,9,0x19,0);
  fVar18 = *(float *)(*(long *)(lVar9 + 0x40) + 0xec);
  fVar16 = (float)FUN_00d59f54(lVar9,0,10,0x19,0);
  if ((int)uVar5 < 1) {
    local_33c = 0;
  }
  else {
    local_33c = 0;
    plVar14 = local_110;
    do {
      lVar11 = *(long *)(*plVar14 + 0x40);
      fVar17 = (*(float *)(lVar11 + 0x1a0) + 1.0) *
               (*(float *)(lVar11 + 0x38) +
               *(float *)(lVar11 + 0xec) * (*(float *)(lVar11 + 0x254) + 1.0));
      if (DAT_031ba820 <= fVar17) {
        fVar17 = DAT_031ba820;
      }
      fVar3 = DAT_031ba760;
      if (DAT_031ba760 <= fVar17) {
        fVar3 = fVar17;
      }
      if (*(float *)(lVar11 + 0x308) < fVar3) {
        uVar1 = *(undefined4 *)(lVar9 + 0x260);
        uVar7 = *(undefined4 *)(*plVar14 + 0x260);
        fVar17 = (float)FUN_00d67b0c(local_320);
        uVar6 = FUN_00d66d34(local_320);
        FUN_00daa4a4((fVar15 + fVar18 * fVar16) * fVar17,auStack_2c0,uVar1,uVar7,uVar6,0xffffffff,
                     0xee,*(undefined4 *)(lVar8 + 0x260));
        FUN_00910c0c(auStack_2c0);
        puVar4 = PTR_s_Buff_Lyra_SpiritFlame_Heal_02bf0c18;
        uVar1 = *(undefined4 *)(lVar9 + 0x260);
        uVar7 = *(undefined4 *)(*plVar14 + 0x260);
        fVar17 = (float)FUN_00d67b0c(local_320);
        uVar6 = FUN_00ceb350();
        FUN_00cfe864(fVar17 + 0.1,0,0,local_190,uVar1,uVar7,puVar4,uVar6,1,
                     *(undefined4 *)(lVar8 + 0x260),0);
        FUN_00ce20fc(local_190);
        local_33c = local_33c + 1;
      }
      uVar12 = uVar12 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar12 != 0);
  }
  FUN_00d4d9e8(auStack_250);
  FUN_00d4dabc(auStack_250,1);
  FUN_00d4daf4(auStack_250,0,1,0,lVar9);
  FUN_00d59f54(lVar9,0,4,0x19,0);
  FUN_00d4db48(auStack_250,auStack_330);
  uVar5 = FUN_00d9e840(auStack_250,local_190,0x10,0);
  uVar12 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    plVar14 = local_190;
    do {
      FUN_00d9e1e0(lVar8,*plVar14,auStack_338);
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(*plVar14 + 0x260);
      puVar10 = (undefined8 *)FUN_00d67b14(local_320);
      uVar13 = *puVar10;
      fVar15 = (float)FUN_00d59f54(lVar9,0,8,0x19,0);
      fVar16 = (float)FUN_00d67b0c(local_320);
      FUN_00daa148(fVar15 * fVar16,auStack_2c0,uVar1,uVar7,1,2,auStack_338,uVar13,0,1);
      FUN_00910c08(auStack_2c0);
      puVar4 = PTR_s_Buff_Lyra_SpiritFlame_Harm_02bf0c20;
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(*plVar14 + 0x260);
      fVar15 = (float)FUN_00d67b0c(local_320);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(fVar15 + 0.1,0,0,auStack_318,uVar1,uVar7,puVar4,uVar6,1,
                   *(undefined4 *)(lVar8 + 0x260),0);
      FUN_00ce20fc(auStack_318);
      uVar12 = uVar12 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar12 != 0);
  }
  fVar15 = (float)FUN_00d59f54(lVar9,0,7,0x19,0);
  fVar15 = fVar15 * (float)(int)(uVar5 + local_33c);
  fVar16 = (float)FUN_00d59f54(lVar9,0,6,0x19,0);
  lVar11 = *(long *)(lVar8 + 0x40);
  if (fVar15 <= fVar16) {
    fVar15 = fVar16;
  }
  fVar16 = (*(float *)(lVar11 + 0x1a0) + 1.0) *
           (*(float *)(lVar11 + 0x38) +
           *(float *)(lVar11 + 0xec) * (*(float *)(lVar11 + 0x254) + 1.0));
  if (DAT_031ba820 <= fVar16) {
    fVar16 = DAT_031ba820;
  }
  fVar18 = DAT_031ba760;
  if (DAT_031ba760 <= fVar16) {
    fVar18 = fVar16;
  }
  fVar16 = (float)FUN_00d67b0c(local_320);
  fVar17 = (float)FUN_00d59f54(lVar9,0,5,0x19,0);
  fVar15 = fVar15 * ((fVar16 * fVar18) / fVar17);
  if (*(float *)(*(long *)(lVar8 + 0x40) + 0x308) < fVar15) {
    uVar1 = *(undefined4 *)(lVar8 + 0x260);
    uVar7 = FUN_00d66d34(local_320);
    FUN_00d009d0(auStack_2c0,uVar1,uVar7);
    FUN_00ce20fc(auStack_2c0);
  }
  FUN_00d043c0(-fVar15,auStack_2c0,*(undefined4 *)(lVar8 + 0x260),0,0);
  FUN_00ce20fc(auStack_2c0);
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

