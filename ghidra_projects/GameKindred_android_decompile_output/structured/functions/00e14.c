// functions/00e14 — 14 functions
#include "libGameKindred.h"




void FUN_00e14008(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e13e44;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d65010(param_1);
  plVar6 = (long *)FUN_00d2945c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"CenterBody");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_BlackClaw_Heal_Buff");
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar5 + 0x10);
  uVar7 = FUN_00d64d7c(param_1);
  lVar5 = FUN_00d4891c(0x3f000000,uVar7,0);
  lVar5 = lVar5 + 0x10;
  FUN_00d39534(lVar5);
  plVar6 = (long *)FUN_00d39584(lVar5);
  local_48 = FUN_00e13f20;
  local_40 = 4;
  (**(code **)(*plVar6 + 0x30))(plVar6,&local_48);
  plVar6 = (long *)FUN_00d2a464(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_48 = FUN_00e13f90;
  local_40 = 4;
  (**(code **)(*plVar6 + 0x10))(plVar6,2,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e14188(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bce8(uVar2,0x1000);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kraken5v5_Blackclaw_Defensi_02bf03a0);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38[0] = 0x3e800000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1423c(undefined8 param_1)

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
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3e99999a;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3e19999a;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_48);
  lVar3 = FUN_00d65010(param_1);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  FUN_00d47690(uVar2,1,local_48);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Blackclaw_Lane_Aura");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_48[0] = 0x3fe66666;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,local_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3ecccccd,0x3f000000,0x3f19999a);
  (**(code **)(*plVar4 + 0xd8))(0x3e4ccccd);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e143c4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_78;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00d69294(param_1,&local_70,&local_78);
  lVar3 = FUN_00d67b78(local_70);
  uVar4 = FUN_00daa578(local_78,lVar3);
  if (((uVar4 & 1) != 0) && ((*(byte *)(local_78 + 0xc) >> 2 & 1) != 0)) {
    uVar1 = *(undefined4 *)(lVar3 + 0x260);
    thunk_FUN_00d086f0(lVar3,2,1);
    FUN_00d043c0(auStack_68,uVar1,3,0);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e14474(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d66d28();
  FUN_00d67b04(0x3dcccccd,param_1);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e143c4;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d39980();
  FUN_00d42654(auStack_60,uVar7);
  thunk_FUN_00d086f0(uVar5,0,1);
  FUN_00d40cd4(uVar7,0x2b,0,1,0);
  FUN_00d3e534();
  uVar7 = FUN_00e0fb7c();
  FUN_00d42654(auStack_60,uVar7);
  thunk_FUN_00d086f0(uVar5,0,1);
  FUN_00d411dc(uVar7,3,1);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x28);
  FUN_00d3e534();
  uVar7 = FUN_00e0fb7c();
  FUN_00d42654(auStack_60,uVar7);
  fVar8 = (float)thunk_FUN_00d086f0(uVar5,1,1);
  fVar9 = (float)FUN_00d67b0c(param_1);
  FUN_00d411dc(fVar8 * fVar9,uVar7,3,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1462c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blackfeather_A_Impact");
                    /* WARNING: Could not recover jumptable at 0x00e14684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e14688(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_00d66d28();
  uVar3 = FUN_00d9ffd8();
  ppuVar1 = &PTR_s_Effect_Blackfeather_Stack_Min1_0281fc68;
  if ((uVar3 & 1) == 0) {
    ppuVar1 = &PTR_s_Effect_Blackfeather_HeartThrob_1_0281fc78;
  }
  iVar2 = FUN_00d66cf4(param_1);
  FUN_00e6a584(param_2,ppuVar1[iVar2 - 1],param_3);
  return;
}




void FUN_00e146ec(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [112];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69294(param_1,&local_d0,&local_d8);
    lVar6 = FUN_00d66d28(local_d0);
    FUN_00d67b84(local_d0);
    lVar7 = FUN_00d9e390();
    uVar5 = FUN_00daa58c(local_d8,lVar6);
    if ((((uVar5 & 1) != 0) && (uVar5 = FUN_00daa578(local_d8,lVar7), (uVar5 & 1) != 0)) &&
       ((*(byte *)(local_d8 + 0xc) & 0xc) != 0)) {
      fVar11 = (float)thunk_FUN_00d086f0(lVar7,4,1);
      fVar12 = (float)thunk_FUN_00d086f0(lVar7,5,1);
      lVar10 = *(long *)(lVar7 + 0x40);
      fVar14 = (*(float *)(lVar10 + 0x240) + 1.0) *
               (*(float *)(lVar10 + 0xd8) +
               *(float *)(lVar10 + 0x18c) * (*(float *)(lVar10 + 0x2f4) + 1.0));
      if (DAT_031b8dd0 <= fVar14) {
        fVar14 = DAT_031b8dd0;
      }
      fVar15 = DAT_031b8d10;
      if (DAT_031b8d10 <= fVar14) {
        fVar15 = fVar14;
      }
      fVar13 = (float)thunk_FUN_00d086f0(lVar7,6,1);
      lVar10 = *(long *)(lVar7 + 0x40);
      fVar14 = (*(float *)(lVar10 + 0x1b4) + 1.0) *
               (*(float *)(lVar10 + 0x4c) +
               *(float *)(lVar10 + 0x100) * (*(float *)(lVar10 + 0x268) + 1.0));
      if (DAT_031b8d44 <= fVar14) {
        fVar14 = DAT_031b8d44;
      }
      fVar16 = DAT_031b8c80._4_4_;
      if (DAT_031b8c80._4_4_ <= fVar14) {
        fVar16 = fVar14;
      }
      uVar4 = FUN_00d66cf4(local_d0);
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar2 = *(undefined4 *)(lVar6 + 0x260);
      uVar8 = FUN_00daa52c(local_d8,1);
      puVar9 = (undefined8 *)FUN_00d67b14(local_d0);
      FUN_00daa148((fVar11 + (fVar12 - fVar11) * ((fVar15 + -1.0) / 11.0) + fVar13 * fVar16) *
                   (float)uVar4,auStack_c8,uVar1,uVar2,1,3,uVar8,*puVar9,0,1);
      FUN_00910c08(auStack_c8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e14910(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_40);
  FUN_00d66d28(local_40);
  uVar5 = FUN_00d9ffd8();
  if ((uVar5 & 1) == 0) {
    uVar2 = FUN_00d66cfc(local_40);
  }
  else {
    uVar2 = 2;
  }
  iVar3 = FUN_00d66cf4(local_40);
  iVar4 = FUN_00d67b24(local_40);
  if (uVar2 <= (uint)(iVar4 + iVar3)) {
    iVar3 = FUN_00d66cf4(local_40);
    FUN_00d67794(local_40,uVar2 - iVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e149c0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e146ec;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onApplyName_02bed4f8;
  uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e14910;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeReApplyName_02bed500;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e14910;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d66d28(param_1);
  uVar5 = FUN_00d9ffd8();
  pcVar8 = "OverHead";
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_00d66d28(param_1);
    pcVar8 = "CenterBody";
    if ((*(byte *)(lVar6 + 0x2f5) & 0x10) != 0) {
      pcVar8 = "OverHead";
    }
  }
  FUN_00d3e534();
  uVar7 = FUN_00d294ac();
  FUN_00d42654(auStack_60,uVar7);
  uVar7 = FUN_00d47e24(uVar7);
  uVar7 = FUN_00d47dc4(uVar7,pcVar8);
  FUN_00da2050(uVar7,FUN_00e14688);
  uVar7 = FUN_00da20b8(0);
  FUN_00da20dc(uVar7,1);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d29a68();
  FUN_00d42654(auStack_60,uVar7);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e14bdc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_60,lVar2 + 0x30);
  FUN_00d67b84(param_1);
  lVar2 = FUN_00d9e390();
  fVar5 = (float)FUN_00d59f54(lVar2,1,7,0x19,0);
  fVar6 = (float)FUN_00d59f54(lVar2,1,8,0x19,0);
  fVar5 = fVar5 + fVar6 * *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
  uVar3 = FUN_00d44be0(lVar2,PTR_s_Buff_Blackfeather_Talent_PointGu_02bf1d30);
  if ((uVar3 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(lVar2,DAT_0320e5a0,0,9);
    fVar5 = fVar5 * fVar6;
    FUN_00d5a3d0(lVar2,DAT_0320e5a0,1,9);
    FUN_00d67d04(param_1);
  }
  FUN_00d3e534();
  uVar4 = FUN_00d2b564();
  FUN_00d42654(auStack_60,uVar4);
  FUN_00d40908(fVar5,uVar4,4);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar2 + 8);
  FUN_00d3e534();
  uVar4 = FUN_00d29a68();
  FUN_00d42654(auStack_60,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e14d34(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d67c60(param_1);
    lVar5 = FUN_00d67c60(param_1);
    uVar2 = FUN_00e6a474("marked_actor");
    uVar2 = FUN_0091ed5c("marked_actor",uVar2,0x12345678);
    uVar2 = (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar2);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar2);
    *puVar6 = 0xffffffff;
    uVar7 = FUN_00d64464(param_1);
    FUN_00d4bbf8(uVar7,4);
    uVar7 = FUN_00d4bc10();
    lVar4 = FUN_00d4bc60(uVar7,PTR_s_Ability__Blackfeather__A_02bee738);
    uVar7 = FUN_00d314f8(lVar4 + 0x10);
    lVar4 = FUN_00d98a14(uVar7,"marked_actor");
    *(undefined4 *)(lVar4 + 0x18) = 3;
    *(code **)(lVar4 + 0x30) = FUN_00d98c78;
    uVar7 = FUN_00d63b38(param_1);
    lVar4 = FUN_00d4b818(uVar7,"marked_actor");
    plVar8 = (long *)FUN_00d2887c(lVar4 + 0x10);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))
                               (plVar8,PTR_s_Buff_Blackfeather_LungeReset_02bf03d8);
    local_68[0] = 0x3f800000;
    local_60 = 1;
    (**(code **)(*plVar8 + 0x18))(plVar8,local_68);
    FUN_00d2a320(lVar4 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e14eb4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Blackfeather__A_02bee738);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48);
  lVar2 = FUN_00d65010(param_1);
  uVar4 = FUN_00d2dea4(lVar2 + 0x10);
  local_48[0] = 0;
  local_40 = 1;
  FUN_00d97d24(uVar4,PTR_s_Ability__Blackfeather__A_02bee738,local_48,2);
  uVar4 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar4,PTR_s_Ability__Blackfeather__A_02bee738);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e14f80(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blackfeather_HitByDash");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Blackfthr_Ability_C_Impact_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Blackfthr_Ability_C_Impact_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Blackfthr_Ability_C_Impact_3");
  lVar4 = FUN_00d09310();
  FUN_00d09a28(*(undefined4 *)(lVar4 + 0x24c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blackfeather_HeartThrob_02bf03c0)
  ;
  local_48 = FUN_00db2e40;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

