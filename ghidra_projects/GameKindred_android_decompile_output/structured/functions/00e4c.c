// functions/00e4c — 21 functions
#include "libGameKindred.h"




void FUN_00e4c054(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d426b0();
  FUN_00d59f54(uVar5,3,7,9,1);
  FUN_00d67d04(param_1);
  lVar6 = FUN_00d63f30(param_1);
  plVar7 = (long *)FUN_00d2887c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Ylva_C_Trap_Arming_02bf1448);
  local_58 = FUN_00e4c274;
  local_50 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_58);
  plVar7 = (long *)FUN_00e0fb2c(lVar6 + 0x10);
  local_58 = FUN_00e4c260;
  local_50 = 3;
  (**(code **)(*plVar7 + 0x38))(plVar7,0,&local_58);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e4bfc8;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  uVar5 = FUN_00d64d7c(param_1);
  lVar6 = FUN_00d4891c(0x3f800000,uVar5,0);
  plVar7 = (long *)FUN_00d2a464(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  local_58._0_4_ = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar7 + 0x10))(plVar7,0,&local_58);
  lVar6 = FUN_00d64980(param_1);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_00d2a160(lVar6);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Ylva_C_Trap_Arming_02bf1448);
  plVar7 = (long *)FUN_00d2a160(lVar6);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Ylva_C_Trap_Armed_02bf1450);
  plVar7 = (long *)FUN_00d2887c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Ylva_C_Trap_Disarmed_02bf1458);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40a00000);
  local_50 = 1;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4c260(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,7,9,1);
  return;
}




void FUN_00e4c274(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,2,9,1);
  return;
}




void FUN_00e4c288(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d6624c();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ylva_C_Trap_Armed_02bf1450);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_C_Trap_Arming");
                    /* WARNING: Could not recover jumptable at 0x00e4c2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e4c300(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d426b0(*param_1);
  uVar3 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,0,1,0,uVar2);
  FUN_00d59f54(uVar2,3,9,9,1);
  FUN_00d4db48(param_2,auStack_48);
  *(undefined4 *)(param_2 + 0x40) = 0x3f266666;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x2000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4c3d4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,9,9,1);
  return;
}




void FUN_00e4c3e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  FUN_00d2b638(lVar2);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ylva_C_Trap_Armed");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero000_Ring");
  local_48 = FUN_00e4c3d4;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Ylva_C_Arming");
  lVar2 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar2 + 0x598));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,0);
  uVar4 = FUN_00da63b8(lVar2 + 0x10);
  uVar4 = FUN_00d9c89c(uVar4,FUN_00e4c300);
  FUN_00d9bc78(uVar4,1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00e19450(lVar2 + 0x10);
  lVar2 = lVar2 + 0x88;
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  FUN_00d2a320(lVar2);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Untargetable_02beb408);
  plVar3 = (long *)FUN_00d46828(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ylva__C_Trap_Explode_02bef8e8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4c5c4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_00d44f88(lVar1);
  FUN_00d2b688(lVar1);
  FUN_00d29fe4(lVar1);
  FUN_00d2def4(lVar1);
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x1500);
  lVar1 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar1 + 0x10);
  return;
}




void FUN_00e4c634(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",3);
                    /* WARNING: Could not recover jumptable at 0x00e4c68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))();
  return;
}




void FUN_00e4c690(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d42ce8(param_1,0x23,"Effect_Ylva_C_Trap_Root",0);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00e4c798(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Ylva_C_Trap_CaughtSomeoneRe_02bf1470);
  local_38[0] = 0x40400000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  plVar3 = (long *)FUN_00e4a500(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Ylva_C_Root");
  lVar2 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar2 + 0x5a0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4c76c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2882c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4c794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"ability3");
  return;
}




void FUN_00e4c798(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d67c();
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




void FUN_00e4c7e8(void)

{
  return;
}




void FUN_00e4c7ec(undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = FUN_00d426b0();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"OverHead");
  lVar5 = FUN_00d66d28(param_1);
  pcVar1 = "Effect_Magnus_Perk_ArcaneMarkPFX";
  if ((*(uint *)(lVar5 + 0x2f4) & 0x20000110) != 0) {
    pcVar1 = "Effect_Magnus_Perk_ArcaneMarkPFX_SM";
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,pcVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar6 = FUN_00d44be0(uVar2,PTR_s_Buff_Magnus_Talent_TalentA_02bf21d0);
  if ((uVar6 & 1) != 0) {
    plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
    (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  }
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  return;
}




void FUN_00e4c8e4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_Perk_MarkProcPFX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Magnus_Perk_Impact");
  lVar1 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar1 + 0x550));
                    /* WARNING: Could not recover jumptable at 0x00e4c97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




float FUN_00e4c980(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00d66d28(*param_1);
  fVar2 = *(float *)(*(long *)(lVar1 + 0x38) + 100);
  return (*(float *)(*(long *)(lVar1 + 0x38) + 0x68) * (fVar2 + *(float *)(lVar1 + 0x2e8))) / fVar2
         + 6.0;
}




void FUN_00e4c9b8(void)

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
  lVar2 = FUN_00d64080();
  uVar3 = FUN_00d2d01c(lVar2 + 0x10);
  uVar3 = FUN_00d9b610(uVar3,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2b778();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_48 = FUN_00e4c980;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2b7c8();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x8b);
  (**(code **)(*plVar4 + 0x18))(plVar4,"CenterBody");
  uVar3 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b610(uVar3,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  uVar3 = FUN_00d9b744();
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2945c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_A_MissileSplitPFX");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2cc5c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_A_Split");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x55c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00d9b5b8(uVar3);
  plVar4 = (long *)FUN_00d2945c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_A_Impact");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00d9b5b8(uVar3);
  plVar4 = (long *)FUN_00d2cc5c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_A_Impact");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x55c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4cbd8(undefined8 param_1)

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
  lVar2 = FUN_00d64080();
  uVar3 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b610(uVar3,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2887c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00e4cd84;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar2 = FUN_00d64080(param_1);
  uVar3 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b610(uVar3,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  uVar3 = FUN_00d9b744();
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2945c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_B_Hit_Mark");
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2cc5c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_B_Stun");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x564));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00d9b5b8(uVar3);
  plVar4 = (long *)FUN_00d2945c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_B_Hit");
  FUN_00d9b5b8(uVar3);
  plVar4 = (long *)FUN_00d2cc5c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_B_Impact");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x564));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4cd84(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00e4cd98(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Magnus_C_Impact");
  local_38[0] = 0x3ecccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Magnus_Ability_C_Impact");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x568));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4ce84(void)

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
  lVar2 = FUN_00d64314();
  uVar3 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b5d0(uVar3,PTR_s_Ability__Magnus__A_02bef918);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2945c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_A_MissileSplitPFX");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2cc5c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_A_Split");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x558));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2b778();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_48 = FUN_00e4c980;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  FUN_00d9b5b0(uVar3);
  plVar4 = (long *)FUN_00d2b7c8();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x8d);
  (**(code **)(*plVar4 + 0x18))(plVar4,"CenterBody");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

