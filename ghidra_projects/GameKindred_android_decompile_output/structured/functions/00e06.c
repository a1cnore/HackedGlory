// functions/00e06 — 13 functions
#include "libGameKindred.h"




void FUN_00e06008(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,0x19,0);
  return;
}




void FUN_00e0601c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,1,0);
  FUN_00d4dabc(auStack_88,0x40000);
  plVar2 = (long *)FUN_00cfaa2c(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03_v2");
  plVar2 = (long *)FUN_00cfac24(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_C_Start");
  lVar3 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_C2_Aura_02bf1b48);
  local_98 = FUN_00e06008;
  local_90 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_1_02bf1a98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_2_02bf1ad8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_3_02bf1ae8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_1_02bf1af0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_2_02bf1b00);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_3_02bf1b08);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  uVar4 = FUN_00cfa834(auStack_a8);
  FUN_00cf4dc4(uVar4,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0,1,1);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e06374(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,1,0);
  FUN_00d4dabc(auStack_88,0x40000);
  plVar2 = (long *)FUN_00cfaa2c(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03_v3");
  plVar2 = (long *)FUN_00cfac24(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_C_Start");
  lVar3 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_C3_Aura_02bf1b50);
  local_98 = FUN_00e06008;
  local_90 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_1_02bf1a98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_2_02bf1ad8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_3_02bf1ae8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_1_02bf1af0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_2_02bf1b00);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_3_02bf1b08);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  uVar4 = FUN_00cfa834(auStack_a8);
  FUN_00cf4dc4(uVar4,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0,1,1);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e066cc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,1,0);
  FUN_00d4dabc(auStack_88,0x40000);
  plVar2 = (long *)FUN_00cfaa2c(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03_v4");
  plVar2 = (long *)FUN_00cfac24(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_C_Start");
  lVar3 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_C4_Aura_02bf1b58);
  local_98 = FUN_00e06008;
  local_90 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_1_02bf1a98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_2_02bf1ad8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_3_02bf1ae8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_1_02bf1af0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_2_02bf1b00);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_3_02bf1b08);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  uVar4 = FUN_00cfa834(auStack_a8);
  FUN_00cf4dc4(uVar4,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0,1,1);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e06a24(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  ppuVar1 = &PTR_s_Sound_Amael_Crit_Attack_01_02bf0028;
  if (param_3 != 2) {
    ppuVar1 = &PTR_s_Sound_Amael_Basic_Attack_1_02bf0010;
  }
  ppuVar2 = &PTR_s_Sound_Amael_Crit_Attack_Hit_01_02bf0050;
  if (param_3 != 2) {
    ppuVar2 = &PTR_s_Sound_Amael_Basic_Attack_Hit_01_02bf0038;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[1]);
  lVar5 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar5 + 0x754));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar6,FUN_00cf76f0);
  FUN_00cf7578(uVar6,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[1]);
  lVar5 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar5 + 0x754));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e06bd8(void)

{
  FUN_00e06a24("Attack","Effect_Amael_Attack",0);
  return;
}




void FUN_00e06bf0(void)

{
  FUN_00e06a24("AltAttack","Effect_Amael_Attack_Alt",0);
  return;
}




void FUN_00e06c08(void)

{
  FUN_00e06a24("CritAttack","Effect_Amael_Attack_Crit",2);
  return;
}




void FUN_00e06c20(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00e06c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e06cf0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d5048c(param_1);
    iVar4 = FUN_00d51964(param_1);
    if (iVar4 != 0) {
      uVar10 = 0;
      do {
        lVar9 = FUN_00d51954(param_1,uVar10);
        puVar3 = PTR_s_Buff_Amael_EmpowerMeter_02bf1bf0;
        if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x2f4) & 1) != 0)) {
          uVar1 = *(undefined4 *)(lVar8 + 0x260);
          uVar11 = thunk_FUN_00d086f0(lVar8,3,1);
          uVar6 = FUN_00ceb350();
          FUN_00cfe864(uVar11,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar6,1,0,0);
          FUN_00ce20fc(auStack_a0);
          break;
        }
        uVar10 = uVar10 + 1;
        uVar5 = FUN_00d51964(param_1);
      } while (uVar10 < uVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e06df8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  uVar3 = FUN_00d9ea34();
  thunk_FUN_00d9ff34(&local_50,PTR_s_Buff_Amael_A_Charging_02bf1bc0);
  uVar4 = FUN_00d6bbac(uVar3,local_50,&local_4c);
  fVar5 = 0.0;
  if ((uVar4 & 1) != 0) {
    fVar5 = (float)FUN_00d6b9f8(uVar3,local_4c);
    fVar6 = (float)FUN_00d59f54(uVar2,0,3,0x19,0);
    thunk_FUN_00d9ff34(local_58,PTR_s_Buff_Amael_Talent_TalentA_02bf2410);
    uVar4 = FUN_00d6bbac(uVar3,local_58[0],&local_4c);
    if ((uVar4 & 1) != 0) {
      fVar7 = (float)FUN_00d5a3d0(uVar2,DAT_0320ed98,0,9);
      fVar6 = fVar6 * fVar7;
    }
    fVar5 = 1.0 - fVar5 / fVar6;
  }
  fVar6 = (float)FUN_00d59f54(uVar2,0,5,0x19,0);
  thunk_FUN_00d9ff34(local_60,PTR_s_Buff_Amael_A_Charged_02bf1bd0);
  uVar4 = FUN_00d6bbac(uVar3,local_60[0],&local_4c);
  if ((uVar4 & 1) == 0) {
    fVar5 = fVar5 * fVar6;
  }
  else {
    fVar5 = (float)FUN_00d59f54(uVar2,0,5,0x19,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}




undefined1  [16] FUN_00e06f68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  uVar3 = FUN_00d9ea34();
  auVar7 = FUN_00d59f54(uVar2,1,5,0x19,0);
  uVar9 = auVar7._8_8_;
  uVar8 = auVar7._0_8_;
  thunk_FUN_00d9ff34(&local_40,PTR_s_Buff_Amael_Talent_TalentB_02bf2420);
  uVar4 = FUN_00d6bbac(uVar3,local_40,auStack_3c);
  if ((uVar4 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(uVar2,DAT_0320eda0,1,9);
    fVar6 = (float)FUN_00d59f54(uVar2,1,5,0x19,0);
    uVar8 = (ulong)(uint)(fVar5 + fVar6);
    uVar9 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar7._8_8_ = uVar9;
    auVar7._0_8_ = uVar8;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

