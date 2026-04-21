// functions/00e27 — 15 functions
#include "libGameKindred.h"




void FUN_00e27180(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  uVar2 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e26f60);
  plVar3 = (long *)FUN_00d44df8(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e271d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Idris__C_LeapOff_02beee58,2,1);
  return;
}




void FUN_00e271d8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d4403c(param_1,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_Withdraw");
                    /* WARNING: Could not recover jumptable at 0x00e27234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e27238(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  lVar2 = FUN_00d66d28(local_30);
  if ((*(int *)(local_38 + 0x18) == *(int *)(lVar2 + 0x260)) && (*(long *)(local_38 + 0x28) != 0)) {
    if (*(int *)(local_38 + 8) != 2) {
      lVar3 = *(long *)(*(long *)(local_38 + 0x28) + 0x40);
      fVar4 = (float)NEON_fminnm(*(float *)(lVar3 + 0x324) - *(float *)(lVar3 + 800),0x466a6000);
      fVar5 = *(float *)(*(long *)(lVar2 + 0x38) + 0x114) * 11.0;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      *(float *)(local_38 + 0x34) =
           *(float *)(local_38 + 0x34) + (fVar5 + fVar5) * (fVar4 / 15000.0) + 0.0;
    }
  }
  else if ((*(int *)(local_38 + 0x10) == *(int *)(lVar2 + 0x260)) &&
          (*(long *)(local_38 + 0x20) != 0)) {
    lVar3 = *(long *)(*(long *)(local_38 + 0x28) + 0x40);
    fVar4 = *(float *)(*(long *)(lVar2 + 0x38) + 0x104) * 11.0;
    fVar5 = (float)NEON_fminnm(*(float *)(lVar3 + 0x324) - *(float *)(lVar3 + 800),0x466a6000);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(local_38 + 0x30) =
         *(float *)(local_38 + 0x30) + (fVar4 + fVar4) * (fVar5 / 15000.0) + 0.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e27370(void)

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
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e27238;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e273e0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_58);
    lVar3 = FUN_00d66d28(local_58);
    fVar6 = (float)FUN_009bc24c();
    uVar4 = (uint)((fVar6 + 120.0) / 120.0);
    if (((*(uint *)(lVar3 + 0x2f4) & 0x300) != 0) && ((*(uint *)(lVar3 + 0x2f4) >> 2 & 1) == 0)) {
      fVar6 = (float)NEON_fminnm((float)uVar4,0x40e00000);
      uVar4 = (uint)fVar6;
    }
    lVar5 = *(long *)(lVar3 + 0x40);
    fVar6 = (*(float *)(lVar5 + 0x240) + 1.0) *
            (*(float *)(lVar5 + 0xd8) +
            *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
    if (DAT_031ba190 <= fVar6) {
      fVar6 = DAT_031ba190;
    }
    fVar7 = DAT_031ba0d0;
    if (DAT_031ba0d0 <= fVar6) {
      fVar7 = fVar6;
    }
    if ((int)((float)uVar4 - fVar7) != 0) {
      FUN_00d03ef8(auStack_50,*(undefined4 *)(lVar3 + 0x260));
      FUN_00ce20fc(auStack_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e274f4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  FUN_00d67b04(0x41a00000);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e273e0;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e27574(undefined8 param_1,long param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_2 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x240) + 1.0) *
          (*(float *)(lVar3 + 0xd8) + *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0))
  ;
  if (DAT_031ba190 <= fVar4) {
    fVar4 = DAT_031ba190;
  }
  fVar5 = DAT_031ba0d0;
  if (DAT_031ba0d0 <= fVar4) {
    fVar5 = fVar4;
  }
  *param_3 = (((fVar5 + -1.0) / 11.0) * 150.0 + 250.0) / 12.0;
  iVar1 = FUN_00da2c48();
  if (iVar1 == 2) {
    lVar3 = *(long *)(param_2 + 0x40);
    fVar4 = (*(float *)(lVar3 + 0x240) + 1.0) *
            (*(float *)(lVar3 + 0xd8) +
            *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0));
    if (DAT_031ba190 <= fVar4) {
      fVar4 = DAT_031ba190;
    }
    fVar5 = DAT_031ba0d0;
    if (DAT_031ba0d0 <= fVar4) {
      fVar5 = fVar4;
    }
    *param_3 = (((fVar5 + -1.0) / 11.0) * 300.0 + 100.0) / 15.0;
  }
  FUN_00ceace8();
  uVar2 = FUN_00ceb054();
  if ((uVar2 & 1) != 0) {
    *param_3 = *param_3 * 1.8;
  }
  return;
}




void FUN_00e276cc(undefined8 param_1,long param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_2 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x240) + 1.0) *
          (*(float *)(lVar3 + 0xd8) + *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0))
  ;
  if (DAT_031ba190 <= fVar4) {
    fVar4 = DAT_031ba190;
  }
  fVar5 = DAT_031ba0d0;
  if (DAT_031ba0d0 <= fVar4) {
    fVar5 = fVar4;
  }
  *param_3 = (((fVar5 + -1.0) / 11.0) * 90.0 + 90.0) / 12.0;
  iVar1 = FUN_00da2c48();
  if (iVar1 == 2) {
    lVar3 = *(long *)(param_2 + 0x40);
    fVar4 = (*(float *)(lVar3 + 0x240) + 1.0) *
            (*(float *)(lVar3 + 0xd8) +
            *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0));
    if (DAT_031ba190 <= fVar4) {
      fVar4 = DAT_031ba190;
    }
    fVar5 = DAT_031ba0d0;
    if (DAT_031ba0d0 <= fVar4) {
      fVar5 = fVar4;
    }
    *param_3 = (((fVar5 + -1.0) / 11.0) * 225.0 + 75.0) / 15.0;
  }
  FUN_00ceace8();
  uVar2 = FUN_00ceb054();
  if ((uVar2 & 1) != 0) {
    *param_3 = *param_3 * 1.8;
  }
  return;
}




void FUN_00e2781c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bcf0(uVar2,0x1001);
  FUN_00d2a320(lVar3 + 0x10);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47d9c(uVar2);
  FUN_00da2040(uVar2,"Effect_JungleHeal_buff");
  FUN_00da20b8(0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x28);
  FUN_00d3e534();
  uVar2 = FUN_00d29738();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d402f8(uVar2,FUN_00e27574);
  FUN_00d3e534();
  uVar2 = FUN_00d29818();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d402f8(uVar2,FUN_00e276cc);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2795c(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_00d66d28(*param_1);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_031ba190 <= fVar5) {
    fVar5 = DAT_031ba190;
  }
  fVar4 = DAT_031ba0d0;
  if (DAT_031ba0d0 <= fVar5) {
    fVar4 = fVar5;
  }
  *param_2 = ((fVar4 + -1.0) / 11.0) * 160.0 + 80.0;
  iVar1 = FUN_00da2c48();
  if (iVar1 == 2) {
    lVar2 = FUN_00d66d28(*param_1);
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar5 = (*(float *)(lVar2 + 0x240) + 1.0) *
            (*(float *)(lVar2 + 0xd8) +
            *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0));
    if (DAT_031ba190 <= fVar5) {
      fVar5 = DAT_031ba190;
    }
    fVar4 = DAT_031ba0d0;
    if (DAT_031ba0d0 <= fVar5) {
      fVar4 = fVar5;
    }
    *param_2 = ((fVar4 + -1.0) / 11.0) * 425.0 + 75.0;
  }
  FUN_00ceace8();
  uVar3 = FUN_00ceb054();
  if ((uVar3 & 1) != 0) {
    *param_2 = *param_2 * 1.8;
  }
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e27ac8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  lVar2 = FUN_00d657dc(param_1);
  plVar4 = (long *)FUN_00d2dfe4(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,4,FUN_00e2795c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e27b58(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d42ce8(param_1,0x23,"Effect_JungleMinionTreeEnt_Immobilize",0);
  lVar1 = FUN_00d63f30(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/Treant/tree_ent_root_field_impact.mp3");
                    /* WARNING: Could not recover jumptable at 0x00e27bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(0x3e99999a);
  return;
}




void FUN_00e27bbc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  FUN_00d67b78();
  FUN_00d5cf60();
  lVar1 = FUN_00d9e390();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031ba100 <= fVar2) {
    fVar2 = DAT_031ba100;
  }
  fVar3 = DAT_031ba040;
  if (DAT_031ba040 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3;
  return;
}




void FUN_00e27c3c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d66d28();
  uVar5 = FUN_00d6eb50();
  uVar5 = FUN_00d6eb5c(uVar5,PTR_s__JungleMinion_TreeEnt__02beb290);
  FUN_00d084cc(uVar5,3,4);
  FUN_00d67d04(param_1);
  lVar6 = FUN_00d63f30(param_1);
  plVar7 = (long *)FUN_00d2cc5c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))
                             (plVar7,"build://Sounds/Treant/tree_ent_root_field_start.mp3");
  (**(code **)(*plVar7 + 0x28))(0x3f800000);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar6 + 0x30);
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(auStack_a8,uVar8);
  uVar8 = FUN_00d47d9c(uVar8);
  FUN_00da2040(uVar8,"Effect_JungleMinionTreeEnt_Root_AOE");
  uVar8 = FUN_00da20b8(0);
  FUN_00da20dc(uVar8,1);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_c0,lVar6 + 0x20);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4db40(auStack_a8,uVar4);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d084cc(uVar5,3,3);
  FUN_00d4db48(auStack_a8,&DAT_03218f30);
  FUN_00d4dabc(auStack_a8,1);
  FUN_00d3e534();
  uVar4 = FUN_00d3940c();
  FUN_00d42654(auStack_c0,uVar4);
  FUN_00d3fad8(uVar4,auStack_a8,0,0);
  FUN_00d3e534();
  uVar4 = FUN_00e29370();
  FUN_00d42654(auStack_c0,uVar4);
  FUN_00d403e0(uVar4,FUN_00e27bbc,3,2,0);
  FUN_00d3e534();
  uVar4 = FUN_00d2cb84();
  FUN_00d42654(auStack_c0,uVar4);
  puVar2 = PTR_s_Buff_JungleMinion_TreeEnt_Immobi_02bf0978;
  uVar5 = FUN_00d084cc(uVar5,3,5);
  FUN_00d66d28(param_1);
  uVar3 = FUN_00d5cf60();
  FUN_00d3e888(uVar5,0,0,uVar4,puVar2,1,uVar3,0,0);
  FUN_00d3e534();
  uVar4 = FUN_00d2a6c0();
  FUN_00d42654(auStack_c0,uVar4);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar6 + 0x18);
  FUN_00d3e534();
  uVar4 = FUN_00d29cd4();
  FUN_00d42654(auStack_a8,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e27ec0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 local_76c;
  long local_768;
  undefined8 local_760;
  undefined1 auStack_758 [40];
  undefined1 auStack_730 [40];
  undefined1 auStack_708 [112];
  long local_698 [201];
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_760);
  FUN_00d4e934(auStack_708,DAT_031b9ff0);
  FUN_00d4dabc(auStack_708,0x40000);
  uVar4 = FUN_00d66d28(local_760);
  FUN_00d4daf4(auStack_708,0,1,0,uVar4);
  lVar5 = FUN_00d66d28(local_760);
  FUN_00d4e980(auStack_708,*(undefined4 *)(lVar5 + 0x260));
  uVar2 = FUN_00d9e840(auStack_708,local_698,200,0);
  if (uVar2 != 0) {
    uVar7 = (ulong)uVar2;
    plVar8 = local_698;
    do {
      uVar4 = FUN_00d9ea08(*plVar8);
      uVar3 = FUN_00d6b630(uVar4,DAT_031b9ff0,0xffffffff);
      FUN_00d009d0(auStack_730,*(undefined4 *)(*plVar8 + 0x260),uVar3);
      FUN_00ce20fc(auStack_730);
      uVar7 = uVar7 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar7 != 0);
  }
  FUN_00d4d634(auStack_730);
  uVar4 = FUN_00d66d28(local_760);
  FUN_00d4d66c(auStack_730,uVar4);
  FUN_00d4d678(auStack_730,PTR_s_JungleMinion_TreeEnt_RootField_02beb298);
  local_768 = 0;
  FUN_00d9e840(auStack_730,&local_768,1,0);
  if (local_768 != 0) {
    uVar4 = FUN_00d9ea08();
    local_76c = 0xffffffff;
    uVar7 = FUN_00d6bbac(uVar4,DAT_031b9ff4,&local_76c);
    if ((uVar7 & 1) != 0) {
      FUN_00d009d0(auStack_758,*(undefined4 *)(local_768 + 0x260),local_76c);
      FUN_00ce20fc(auStack_758);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

