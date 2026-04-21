// functions/00e55 — 25 functions
#include "libGameKindred.h"




void FUN_00e55144(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00e55158(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00e5516c(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e551c8;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e551c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e551dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  (**(code **)(*plVar3 + 0x98))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  local_48 = FUN_00e552d4;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e552d4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00e552e8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d64d7c();
  lVar2 = FUN_00d4891c(0x3f000000,uVar1,1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE_PER_SEC",2);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  return;
}




void FUN_00e55358(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_58 = FUN_00e55618;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x2b,0,&local_58);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,6);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc50(uVar4,4);
  plVar3 = (long *)FUN_00d2a464(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_58 = FUN_00e55624;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_58);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,0);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_C_SlashCounter_02bf1960;
  plVar3 = (long *)FUN_00d2a464(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_58._0_4_ = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_58);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc48(uVar4,4);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_Talent_TalentA_02bee380;
  FUN_00d2cf2c(lVar2 + 0x88);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_TalentA_Marker_02bee3b0);
  local_58._0_4_ = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,6);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc48(uVar4,4);
  FUN_00d2cf2c(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_Perk_MaxStacks_02bf1968);
  local_58._0_4_ = 0x3dcccccd;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  FUN_00d634b4(param_1);
  lVar2 = FUN_00d4a9f0();
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00e546dc(lVar2 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = 1;
  *(undefined4 *)(lVar5 + 8) = 0x42940000;
  *(undefined8 *)(lVar5 + 0x18) = 0x300000002;
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_B_FinalSlash_02bf1970);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40000000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e55618(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e55624(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e55630(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d64080();
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d2a370(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Miho_Perk_Expose_02bf1978;
  lVar3 = lVar3 + 0x88;
  *(undefined4 *)(lVar4 + 0x10) = 3;
  *(undefined **)(lVar4 + 8) = puVar2;
  FUN_00d39534(lVar3);
  plVar5 = (long *)FUN_00d2b818(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x20))(plVar5,"ExposeWeaknessMaxStacks");
  lVar4 = FUN_00d29e8c(lVar3);
  lVar6 = FUN_00d2a370(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Miho_TalentA_Marker_02bee3b0;
  plVar5 = (long *)FUN_00d2887c(lVar4 + 0xa0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Miho_Perk_ExposeCooldown_02bf1980);
  local_58 = FUN_00e55794;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00e4c798(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Miho_Perk_Barrier_02bf1988);
  local_58 = FUN_00e557a0;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Miho_Perk_Expose_02bf1978);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e55794(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00e557a0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0xb,1);
  return;
}




void FUN_00e557ac(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00d66cf4();
  FUN_00e6a584(param_2,(&PTR_s_Effect_Miho_Mark_Lvl1_0281fe68)[iVar1 - 1],param_3);
  return;
}




void FUN_00e557e8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar4);
  uVar4 = FUN_00d47e24(uVar4);
  uVar4 = FUN_00d47dc4(uVar4,"OverHead");
  FUN_00da2050(uVar4,FUN_00e557ac);
  uVar4 = FUN_00da20b8(0);
  FUN_00da20dc(uVar4,1);
  lVar3 = FUN_00d63f30(param_1);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00e12bf0(lVar3 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = 0x20100010;
  FUN_00d2a320(lVar3 + 0xa0);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  lVar3 = FUN_00d64080(param_1);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Miho_Perk_ExposeCooldown_02bf1980;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined **)(lVar5 + 8) = puVar2;
  FUN_00d2a320(lVar3 + 0x88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e55900(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e55b60;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Miho_PerkTrigger");
  lVar4 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar4 + 0x648));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00e13af8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f19999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_00d29e8c(lVar2);
  lVar4 = FUN_00e11be0(lVar2 + 0x10);
  if (PTR_s_Ability__Miho__A_02beff50 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Miho__A_02beff50;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Miho__A_02beff50;
    if (*PTR_s_Ability__Miho__A_02beff50 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar4 + 8) = uVar6;
  plVar3 = (long *)FUN_00e4c798(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Miho_Perk_RefreshAndRestore_02bf1990);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3ecccccd);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_Mark_Lvl4");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,3);
  FUN_00d4bc24();
  lVar2 = FUN_00d4bd10();
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00e55b6c;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e55b60(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,5,1);
  return;
}




void FUN_00e55b6c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,7,1);
  return;
}




void FUN_00e55b78(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Miho__A_02beff50);
  local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2a464(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_58 = FUN_00e55ca0;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_58);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,1);
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Miho__A_02beff50);
  local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e55ca0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,6,1);
  return;
}




void FUN_00e55cac(undefined8 *param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,8,1);
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,9,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_031bc980 <= fVar5) {
    fVar5 = DAT_031bc980;
  }
  fVar6 = DAT_031bc8c0;
  if (DAT_031bc8c0 <= fVar5) {
    fVar6 = fVar5;
  }
  *param_2 = fVar3 + (fVar4 - fVar3) * ((fVar6 + -1.0) / 11.0);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,10,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031bc8f0 <= fVar5) {
    fVar5 = DAT_031bc8f0;
  }
  fVar4 = DAT_031bc830;
  if (DAT_031bc830 <= fVar5) {
    fVar4 = fVar5;
  }
  *param_2 = *param_2 + fVar3 * fVar4;
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,8,1);
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,9,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_031bc980 <= fVar5) {
    fVar5 = DAT_031bc980;
  }
  fVar6 = DAT_031bc8c0;
  if (DAT_031bc8c0 <= fVar5) {
    fVar6 = fVar5;
  }
  *param_3 = fVar3 + (fVar4 - fVar3) * ((fVar6 + -1.0) / 11.0);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,10,1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar5 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031bc8f0 <= fVar5) {
    fVar5 = DAT_031bc8f0;
  }
  fVar4 = DAT_031bc830;
  if (DAT_031bc830 <= fVar5) {
    fVar4 = fVar5;
  }
  *param_3 = *param_3 + fVar3 * fVar4;
  return;
}




void FUN_00e55ecc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e55cac);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e55f18(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  FUN_00d2b688(lVar1);
  FUN_00d29fe4(lVar1);
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x1700);
  return;
}




void FUN_00e55f54(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar1 + 0x10);
  return;
}




void FUN_00e55f88(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d5cf60(param_2);
  uVar2 = FUN_00d9e390();
  FUN_00d55794(param_2,local_68,0);
  fVar3 = (float)FUN_00d6a1f8(*param_1);
  fVar4 = (float)FUN_00d6a25c(*param_1);
  fVar5 = (float)FUN_00d59f98(uVar2,2);
  *param_4 = CONCAT44(local_68._4_4_ + fVar5 * 0.0,local_68._0_4_ + fVar3 * fVar5);
  *(float *)(param_4 + 1) = fVar4 * fVar5 + local_60;
  uVar6 = FUN_00d59f54(uVar2,2,2,0x19,0);
  *param_3 = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

