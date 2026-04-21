// functions/00e11 — 13 functions
#include "libGameKindred.h"




void FUN_00e1128c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ardan_Ability_C_Impact");
  lVar1 = FUN_00d09310();
  FUN_00d097dc(*(undefined4 *)(lVar1 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00e112dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e112e0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ardan_Arena_Stunpact");
                    /* WARNING: Could not recover jumptable at 0x00e1132c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e11330(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_00d67b84(*param_1);
  lVar3 = FUN_00d9e390();
  if (lVar3 == 0) {
    fVar7 = 0.0;
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x40);
    fVar10 = *(float *)(lVar6 + 0x38);
    fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
            (fVar10 + *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
    if (DAT_031b8680 <= fVar7) {
      fVar7 = DAT_031b8680;
    }
    fVar8 = DAT_031b85c0;
    if (DAT_031b85c0 <= fVar7) {
      fVar8 = fVar7;
    }
    fVar9 = (float)FUN_00d59f54(lVar3,0,9,0x19,0);
    fVar7 = (float)FUN_00d59f54(lVar3,0,3,0x19,0);
    fVar7 = fVar7 + fVar9 * (fVar8 - fVar10);
    uVar4 = FUN_00d67b84(*param_1);
    uVar5 = FUN_00d44008(uVar4,PTR_s_Buff_Ardan_Talent_Vanguardian_02bf1d10);
    lVar6 = FUN_00d66d28(*param_1);
    iVar1 = *(int *)(lVar6 + 0x260);
    iVar2 = FUN_00d67b84(*param_1);
    if (((uVar5 & 1) == 0) && (iVar1 == iVar2)) {
      fVar10 = (float)FUN_00d59f54(lVar3,0,4,0x19,0);
      fVar7 = fVar7 * fVar10;
    }
    if ((uVar5 & 1) != 0) {
      fVar10 = (float)FUN_00d5a3d0(lVar3,DAT_0320e590,0,9);
      fVar7 = fVar7 * fVar10;
    }
  }
  *param_2 = fVar7;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e1149c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [88];
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_d8,&local_e0);
  FUN_00d67b84(local_d8);
  lVar8 = FUN_00d9e390();
  if ((((lVar8 != 0) && (iVar3 = FUN_00d5c238(lVar8,1), iVar3 != 0)) &&
      (iVar3 = *(int *)(local_e0 + 0x18), lVar9 = FUN_00d66d28(local_d8),
      iVar3 == *(int *)(lVar9 + 0x260))) && ((*(byte *)(local_e0 + 0xc) >> 4 & 1) == 0)) {
    uVar13 = 0x811c9dc5;
    fVar14 = (float)FUN_00d59f54(lVar8,1,0,0x19,0);
    fVar15 = (float)FUN_00d59f54(lVar8,0,6,0x19,0);
    lVar8 = FUN_00d66d28(local_d8);
    iVar3 = *(int *)(lVar8 + 0x260);
    iVar4 = FUN_00d67b84(local_d8);
    fVar16 = fVar15 * 0.0;
    if (iVar3 != iVar4) {
      fVar16 = fVar15;
    }
    uVar5 = FUN_00d67b84(local_d8);
    uVar11 = (uint)(byte)*PTR_s_Ability__Ardan__B_02bee550;
    pbVar10 = PTR_s_Ability__Ardan__B_02bee550;
    if (*PTR_s_Ability__Ardan__B_02bee550 != 0) {
      do {
        uVar12 = (uint)pbVar10[1];
        uVar13 = (uVar13 ^ uVar11) * 0x1000193;
        uVar11 = uVar12;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
    }
    FUN_00d04e08(fVar14 * fVar16,auStack_78,uVar5,uVar13,0);
    FUN_00ce20fc(auStack_78);
    uVar5 = FUN_00d67b84(local_d8);
    uVar6 = FUN_00d67b84(local_d8);
    puVar2 = PTR_s_Buff_Ardan_HeroicPerk_ShowEffect_02bf02a0;
    uVar7 = FUN_00ceb350();
    FUN_00cfe864(0x3f800000,0,0,auStack_d0,uVar5,uVar6,puVar2,uVar7,1,0,0);
    FUN_00ce20fc(auStack_d0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e11664(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_80;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_80);
  lVar5 = FUN_00d66d28(local_80);
  FUN_00d67b84(local_80);
  lVar6 = FUN_00d9e390();
  iVar2 = FUN_00d67b84(local_80);
  if ((((lVar6 != 0) && (iVar2 != *(int *)(lVar5 + 0x260))) &&
      (uVar3 = FUN_00d5c238(lVar6,0), 4 < uVar3)) && (iVar2 = FUN_00d5c238(lVar6,1), iVar2 != 0)) {
    uVar3 = 0x811c9dc5;
    fVar10 = (float)FUN_00d59f54(lVar6,1,0,0x19,0);
    fVar11 = (float)FUN_00d59f54(lVar6,0,10,0x19,0);
    uVar4 = FUN_00d67b84(local_80);
    uVar8 = (uint)(byte)*PTR_s_Ability__Ardan__B_02bee550;
    pbVar7 = PTR_s_Ability__Ardan__B_02bee550;
    if (*PTR_s_Ability__Ardan__B_02bee550 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar3 = (uVar3 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
    FUN_00d04e08(-(fVar10 * fVar11),auStack_78,uVar4,uVar3,0);
    FUN_00ce20fc(auStack_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e117b8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onPostCalculateAttackName_02bed5f0;
    uVar3 = FUN_00e6a474(PTR_s_onPostCalculateAttackName_02bed5f0);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1149c;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onApplyName_02bed4f8;
    uVar3 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e11664;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Ardan_A_Shield_Enemy");
  (**(code **)(*plVar6 + 0x50))(plVar6,"Effect_Ardan_A_Shield");
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"OverHead");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Ardan_A_Shield_Top_Enemy");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Effect_Ardan_A_Shield_Top");
  (**(code **)(*plVar6 + 0x90))();
  plVar6 = (long *)FUN_00d2df94(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Sound_Ardan_Ability_A");
  lVar5 = FUN_00d09310();
  FUN_00d097dc(*(undefined4 *)(lVar5 + 0x170));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_00d657dc(param_1);
  plVar6 = (long *)FUN_00d2dfe4(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,4,FUN_00e11330);
  lVar5 = FUN_00d63f30(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Ardan_A_Shield_Engage");
  (**(code **)(*plVar6 + 0x90))();
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"OverHead");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Ardan_A_Shield_Top_Engage");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  (**(code **)(*plVar6 + 0x90))();
  plVar6 = (long *)FUN_00d2cc5c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Ardan_Ability_A_Impact");
  lVar5 = FUN_00d09310();
  FUN_00d097dc(*(undefined4 *)(lVar5 + 0x16c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar5 + 0x10);
  return;
}




void FUN_00e11a6c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d67b84();
  uVar4 = FUN_00d9e390();
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x30);
  lVar5 = FUN_00d66d28(param_1);
  iVar1 = *(int *)(lVar5 + 0x260);
  iVar3 = FUN_00d67b84(param_1);
  uVar6 = 0xb;
  if (iVar1 == iVar3) {
    uVar6 = 0xc;
  }
  uVar7 = FUN_00d59f54(uVar4,0,uVar6,0x19,0);
  FUN_00d3e534();
  uVar4 = FUN_00d29584();
  FUN_00d42654(auStack_60,uVar4);
  FUN_00d472ec(uVar7,uVar4,1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 8);
  FUN_00d3e534();
  uVar4 = FUN_00d29a68();
  FUN_00d42654(auStack_60,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e11b68(undefined8 param_1)

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
  local_38[0] = FUN_00d59f54(uVar2,0,7,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e11be0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281f4d8;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 * FUN_00e11c3c(long param_1)

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
    FUN_00d41bb0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




undefined8 * FUN_00e11d14(long param_1)

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
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d3ec00(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




float FUN_00e11de8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = FUN_00d66d28(*param_1);
  fVar5 = (float)thunk_FUN_00d086f0(lVar1,2,1);
  lVar4 = *(long *)(lVar1 + 0x40);
  fVar8 = (*(float *)(lVar4 + 0x1b4) + 1.0) *
          (*(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x100) * (*(float *)(lVar4 + 0x268) + 1.0))
  ;
  if (DAT_031b8844 <= fVar8) {
    fVar8 = DAT_031b8844;
  }
  fVar9 = DAT_031b8780._4_4_;
  if (DAT_031b8780._4_4_ <= fVar8) {
    fVar9 = fVar8;
  }
  fVar6 = (float)thunk_FUN_00d086f0(lVar1,0,1);
  fVar7 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  lVar4 = *(long *)(lVar1 + 0x40);
  fVar8 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_031b88d0 <= fVar8) {
    fVar8 = DAT_031b88d0;
  }
  fVar10 = DAT_031b8810;
  if (DAT_031b8810 <= fVar8) {
    fVar10 = fVar8;
  }
  fVar8 = fVar5 * fVar9 + fVar6 + (fVar7 - fVar6) * ((fVar10 + -1.0) / 11.0);
  uVar2 = FUN_00d66d28(*param_1);
  uVar3 = FUN_00d44be0(uVar2,PTR_s_Buff_Baptiste_Talent_TheReaper_02bee290);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(lVar1,DAT_031ac750,1,9);
    fVar8 = fVar8 * fVar5;
  }
  return fVar8;
}




void FUN_00e11f50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x80,1);
  lVar2 = FUN_00d65a7c(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Baptiste_PerkSoulStacks_02bf02e0)
  ;
  local_48._0_4_ = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d63b38(param_1);
  lVar2 = FUN_00d4b770();
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Baptiste_PerkSoulStacks_02bf02e0)
  ;
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d64080(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d39584(lVar2 + 0x10);
  local_48 = FUN_00e11de8;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  lVar2 = FUN_00d65bcc(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Baptiste_PerkEmpowered_02bf02e8);
  local_48 = FUN_00e120d8;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

