// functions/00e03 — 7 functions
#include "libGameKindred.h"




void FUN_00e03238(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00cf9ea4(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_c8);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cf9afc(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_C_SlashCounter_02bf1960);
  local_a8[0] = 0x40000000;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_a8);
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_B_FinalSlash_02bf1970;
  plVar4 = (long *)FUN_00cfaa2c(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Final");
  plVar4 = (long *)FUN_00cfaa2c(lVar2 + 200);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_a8[0] = 0x3f800000;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_a8);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_B_Slash_Secondary");
  plVar4 = (long *)FUN_00cfac24(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Miho_AbilityB_Slash1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash4");
  lVar2 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar2 + 0x650));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00d4d9e8(local_a8);
  FUN_00d4dabc(local_a8,0x40000);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dcdc(local_a8,1);
  local_68 = 0x3f266666;
  uVar3 = FUN_00cfaf3c(auStack_c8);
  uVar3 = FUN_00cf5ac8(0x3f4ccccd,uVar3,FUN_00e02df0,FUN_00e02e18);
  FUN_00cf5ae0(uVar3,local_a8);
  plVar4 = (long *)FUN_00cf9b44(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Miho_B_ApplyDamage_02bf19c8);
  local_b8[0] = 0x3dcccccd;
  local_b0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_b8);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_C_SlashCounter_02bf1960;
  plVar4 = (long *)FUN_00cfa75c(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Miho__B_Slash_02beff60,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e035b4(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_C_SlashCounter_02bf1960);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e03624(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [16];
  undefined4 local_88 [2];
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  lVar2 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_98);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_98);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  plVar4 = (long *)FUN_00cfac24(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Miho_AbilityC");
  lVar2 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar2 + 0x658));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfac6c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))();
  uVar3 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_C_Slash");
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  uVar3 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_88[0] = 0x3fd9999a;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_88);
  plVar4 = (long *)FUN_00cfb1c4(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Miho_B_Wave*",1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_01be0af8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Miho_B_Wave*",1);
  uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_01be0afd);
  plVar4 = (long *)FUN_00cfb1c4(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Miho_B_Wave*",1);
  uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_01be0b02);
  plVar4 = (long *)FUN_00cfb1c4(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Miho_B_Wave*",1);
  uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_01be0b07);
  plVar4 = (long *)FUN_00cfb1c4(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Miho_C_CenterWave*",1);
  uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_01be0b20);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar3);
  local_88[0] = 0x3f666666;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_88);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar5);
  local_88[0] = 0x3f666666;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_88);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar6);
  local_88[0] = 0x3f666666;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_88);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar7);
  local_88[0] = 0x3f666666;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_88);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar8);
  local_88[0] = 0x3f666666;
  local_80 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_88);
  uVar9 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar9,0);
  plVar4 = (long *)FUN_00cfab04(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_C_Slash");
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  uVar9 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3e19999a);
  FUN_00cf7578(uVar9,0);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_Wave_02bf19b8,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_Wave_02bf19b8,uVar5);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_Wave_02bf19b8,uVar6);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_Wave_02bf19b8,uVar7);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_Wave_02bf19b8,uVar8);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  uVar9 = FUN_00cfb17c(auStack_98);
  uVar9 = FUN_00cfcad8(uVar9,0xd3,&DAT_01be0afd);
  FUN_00cfcba8(uVar9,1);
  uVar9 = FUN_00cfb17c(auStack_98);
  uVar9 = FUN_00cfcad8(uVar9,0xd3,&DAT_01be0b02);
  FUN_00cfcba8(uVar9,1);
  uVar9 = FUN_00cfb17c(auStack_98);
  uVar9 = FUN_00cfcad8(uVar9,0xd3,&DAT_01be0af8);
  FUN_00cfcba8(uVar9,1);
  uVar9 = FUN_00cfb17c(auStack_98);
  uVar9 = FUN_00cfcad8(uVar9,0xd3,&DAT_01be0b07);
  FUN_00cfcba8(uVar9,1);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar3);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar5);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar6);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar7);
  plVar4 = (long *)FUN_00cf9b8c(auStack_98);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_KillSelf_02bf19a0,uVar8);
  lVar2 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e03d08(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float local_730 [4];
  float local_720 [4];
  undefined4 local_710 [2];
  undefined1 auStack_708 [112];
  undefined8 local_698 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    lVar5 = FUN_00d51778(param_1);
    if (lVar5 != 0) {
      thunk_FUN_00d9ff34(local_710,PTR_s_Buff_Ishtar_Minion_PFX_02bf1a00);
      FUN_00d4e934(auStack_708,local_710[0]);
      FUN_00d4e998(auStack_708,0);
      FUN_00d4db40(auStack_708,uVar4);
      FUN_00d4daf4(auStack_708,1,0,0,0);
      FUN_00d4ddc4(auStack_708);
      FUN_00d4dca4(auStack_708,"Ishtar_Minion",0);
      uVar2 = FUN_00d9e840(auStack_708,local_698,200,0);
      if (uVar2 != 0) {
        uVar3 = (ulong)uVar2;
        puVar7 = local_698;
        do {
          uVar6 = *puVar7;
          uVar4 = FUN_00d51778(param_1);
          FUN_00d55794(uVar6,local_730,0);
          FUN_00d55794(uVar4,local_720,0);
          fVar8 = (float)local_730._4_8_ - (float)local_720._4_8_;
          fVar9 = SUB84(local_730._4_8_,4) - SUB84(local_720._4_8_,4);
          fVar9 = (local_730[0] - local_720[0]) * (local_730[0] - local_720[0]) + fVar8 * fVar8 +
                  fVar9 * fVar9;
          fVar8 = SQRT(fVar9);
          if (NAN(fVar8)) {
            fVar8 = sqrtf(fVar9);
          }
          if (fVar8 <= 9.0) {
            FUN_008ff6ec(*puVar7,0,uVar4);
          }
          uVar3 = uVar3 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar3 != 0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e03eb0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb05c(auStack_38);
  FUN_00cf99dc(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Attack");
  plVar2 = (long *)FUN_00cfac24(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Default_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_03");
  lVar3 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar3 + 0x67c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar4 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar4,0xce,"CenterBody");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e03fa8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 + (float)iVar1 * 4.656613e-10 + 1.0;
}




void FUN_00e03fd8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_WarningPFX_02bf1a20);
  local_48._0_4_ = 0x3f333333;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3ecccccd);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xcd);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00e03fa8;
  local_40 = 2;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x98))(plVar4,&local_48,0);
  local_58[0] = 0x42480000;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

