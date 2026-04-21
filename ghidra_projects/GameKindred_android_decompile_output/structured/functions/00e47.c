// functions/00e47 — 17 functions
#include "libGameKindred.h"




void FUN_00e47054(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d64080(param_1);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x48))();
  lVar3 = FUN_00d657dc(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Lorelai_Shield");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  local_58[0] = 0x3f800000;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,local_58);
  (**(code **)(*plVar4 + 0xc0))(0,0x3f333333,0x3f800000);
  uVar5 = FUN_00d44be0(uVar2,PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258);
  plVar4 = (long *)FUN_00d2dfe4(lVar3 + 0x10);
  if ((uVar5 & 1) == 0) {
    pcVar7 = FUN_00e46f14;
  }
  else {
    pcVar7 = FUN_00e46fb4;
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,4,pcVar7);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2df94(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Lorelai_Ability_C_Loop");
  lVar3 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar3 + 0x450));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  lVar3 = FUN_00d6624c(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Lorelai_Ability_C_End");
  lVar6 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar6 + 0x454));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  FUN_00d9b5d0(uVar2,PTR_s_Ability__Lorelai__B_02bef778);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2945c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Lorelai_Shield_Drop");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  (**(code **)(*plVar4 + 0x90))();
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2cc5c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Lorelai_Ability_B_Start");
  lVar3 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar3 + 0x440));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d45354();
  (**(code **)(*plVar4 + 0x30))(plVar4,"*Lorelai_Splashdown*",0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e47330(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x48))();
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Lorelai_Ability_C_Loop");
  lVar4 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar4 + 0x450));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Shield");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xc0))(0,0x3f333333,0x3f800000);
  plVar3 = (long *)FUN_00d29c34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,1);
  uVar5 = FUN_00d29c84(lVar2);
  FUN_00d46b64(uVar5,0x200);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Lorelai_Ability_C_End");
  lVar4 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar4 + 0x454));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar5 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b5d0(uVar5,PTR_s_Ability__Lorelai__B_02bef778);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar5);
  plVar3 = (long *)FUN_00d2945c();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Shield_Drop");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  (**(code **)(*plVar3 + 0x90))();
  FUN_00d9b5b0(uVar5);
  plVar3 = (long *)FUN_00d45354();
  (**(code **)(*plVar3 + 0x30))(plVar3,"*Lorelai_Splashdown*",0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00e47590(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  return *(byte *)(lVar1 + 0x2f8) >> 3 & 1;
}




byte FUN_00e475b0(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_00d66d28(*param_1);
  if ((*(byte *)(lVar2 + 0x2f8) >> 3 & 1) == 0) {
    lVar2 = FUN_00d66d28(*param_1);
    bVar1 = *(byte *)(lVar2 + 0x2f8) >> 5 & 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}




void FUN_00e475f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d635f4();
  lVar2 = FUN_00d4ac24(uVar1,PTR_s_Ability__Varya__C_02bef7b8);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4762c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_Passive_C_Aspd_02bf12a8);
  return;
}




void FUN_00e47630(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00e476a8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e476a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,7,0x19,0);
  return;
}




void FUN_00e476bc(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_00d6a078(*param_1);
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    *param_2 = lVar2;
    iVar1 = FUN_00d6a0dc(*param_1);
    if (iVar1 == 1) {
      *param_3 = "Channeling";
    }
    else {
      *param_4 = "Bone_CenterMass";
    }
  }
  return;
}




void FUN_00e4772c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_80 [2];
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d6a078(*param_1);
  lVar2 = FUN_00d9e390();
  if (lVar2 == 0) {
    uVar3 = FUN_00d66d28(*param_1);
    FUN_00d55794(uVar3,param_2,0);
  }
  else {
    local_80[0] = 0xd128cdd4;
    FUN_00d58298(lVar2,local_80,auStack_78);
    *param_2 = local_48;
    *(undefined4 *)(param_2 + 1) = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00e477cc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d426b0(*param_1);
  return *(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x48);
}




void FUN_00e477ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d426b0(*param_1);
  FUN_00cfb800(uVar1,param_2 + 0x30,param_2 + 0xe,0);
  return;
}




void FUN_00e4781c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Varya_Chain_Lightning_First_Hit_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Chain_Lightning_First_Hit_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Chain_Lightning_First_Hit_3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Chain_Lightning_First_Hit_4");
  lVar4 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar4 + 0x45c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4796c(undefined8 param_1)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_AA_Beam");
  local_38[0] = 0x3ecccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xa8))(plVar3,FUN_00e4772c);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e47a3c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_AA_Beam");
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xa8))(plVar3,FUN_00e4772c);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d63f30(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Varya_Chain_Lightning_Second_Hit_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Chain_Lightning_Second_Hit_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Chain_Lightning_Second_Hit_3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Chain_Lightning_Second_Hit_4");
  lVar4 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar4 + 0x45c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x20))(plVar3,"CHAIN_LIGHTNING_DAMAGE_PRIMARY");
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x20))(plVar3,"CHAIN_LIGHTNING_WEAPON_PRIMARY");
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e47c2c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_AA_Beam");
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xa0))(plVar3,FUN_00e476bc);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d63f30(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x20))(plVar3,"CHAIN_LIGHTNING_DAMAGE_SECONDARY");
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e47d7c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_00d63ddc();
  uVar2 = FUN_00d2d01c(lVar1 + 0x10);
  uVar2 = FUN_00d9b5c0(uVar2,FUN_00e47590);
  FUN_00d9b5b0();
  plVar3 = (long *)FUN_00e17ea8();
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Varya__A_02bef7b0);
  FUN_00d9b5b0(uVar2);
  plVar3 = (long *)FUN_00e17ea8();
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Varya__A_Default_02bef7c0);
  FUN_00d9b5b0(uVar2);
  plVar3 = (long *)FUN_00e17ea8();
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00e47e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Varya__A_Quick_02bef7c8);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00e47e38(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  float fVar16;
  undefined1 auStack_790 [16];
  undefined1 auStack_780 [40];
  undefined1 auStack_758 [96];
  long local_6f8 [200];
  long local_b8 [10];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    FUN_00d67b84(*param_1);
    lVar9 = FUN_00d9e390();
    lVar12 = *(long *)(lVar9 + 0x18);
    while ((lVar12 != 0 && (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar12 = *(long *)(lVar12 + 0x20);
    }
    fVar16 = (float)thunk_FUN_00d086f0(lVar9,0,1);
    uVar13 = (uint)fVar16;
    iVar5 = FUN_00d535a4(lVar12,8);
    if (iVar5 != 0) {
      fVar16 = (float)FUN_00d59f54(lVar9,8,6,0x19,0);
      uVar13 = (uint)(fVar16 + (float)uVar13);
    }
    memset(local_b8 + 1,0,0x48);
    local_b8[0] = FUN_00d66d28(*param_1);
    if (1 < uVar13) {
      uVar8 = 1;
      uVar14 = 1;
LAB_00e47f38:
      lVar12 = local_b8[uVar14 - 1];
      if (lVar12 != 0) {
        if ((*(uint *)(lVar12 + 0x2f4) & 0x101004) != 0) goto LAB_00e480dc;
        FUN_00d55794(lVar12,auStack_790,0);
        FUN_00d4d9e8(auStack_758);
        FUN_00d4dabc(auStack_758,0x40000);
        FUN_00d4db40(auStack_758,lVar9);
        FUN_00d4daf4(auStack_758,0,1,0,0);
        FUN_00d4dc24(auStack_758,1);
        fVar16 = (float)thunk_FUN_00d086f0(lVar9,1,3);
        FUN_00d4db48(fVar16 + 0.75,auStack_758,auStack_790);
        FUN_00d4eb08(auStack_780,auStack_790,200,0);
        uVar6 = FUN_00d9e840(auStack_758,local_6f8,200,auStack_780);
        if (uVar6 != 0) {
          uVar10 = 0;
          do {
            uVar11 = 0;
            while ((local_b8[uVar11] == 0 ||
                   (*(int *)(local_6f8[uVar10] + 0x260) != *(int *)(local_b8[uVar11] + 0x260)))) {
              uVar11 = uVar11 + 1;
              if (uVar13 <= uVar11) {
                uVar14 = uVar14 + 1;
                local_b8[uVar8] = local_6f8[uVar10 & 0xffffffff];
                uVar8 = uVar8 + 1;
                if (uVar8 < uVar13) goto LAB_00e47f38;
                goto LAB_00e4805c;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar6);
        }
      }
LAB_00e4805c:
      if (1 < uVar14) {
        uVar1 = *(undefined4 *)(lVar9 + 0x260);
        plVar15 = local_b8;
        lVar12 = (ulong)uVar14 - 1;
        do {
          puVar4 = PTR_s_Buff_Varya_A_Beam_02bf12d8;
          plVar15 = (long *)((long)plVar15 + 8);
          uVar2 = *(undefined4 *)(*plVar15 + 0x260);
          uVar7 = FUN_00ceb350();
          FUN_00cfe864(0x3ecccccd,0,0,local_6f8,uVar1,uVar2,puVar4,uVar7,1,
                       *(undefined4 *)(plVar15[-1] + 0x260),0);
          FUN_00ce20fc(local_6f8);
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
  }
LAB_00e480dc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

