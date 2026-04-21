// functions/00e5a — 17 functions
#include "libGameKindred.h"




void FUN_00e5a250(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C3_Aura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0x3f800000,0);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40c00000);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_v3");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Viola_C3_Song");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6d0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,1);
  uVar4 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar4,FUN_00e59b70);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Song_3_Control_02bf1b68);
  local_48 = FUN_00e06008;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d63f30(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C1_Aura_02bf1b38);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C2_Aura_02bf1b48);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C4_Aura_02bf1b58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Viola_C_End");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5a568(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C4_Aura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0x3f800000);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40c00000);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_v4");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Viola_C4_Song");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6d4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,1);
  uVar4 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar4,FUN_00e59b70);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Song_4_Control_02bf1b70);
  local_48 = FUN_00e5a880;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d63f30(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C1_Aura_02bf1b38);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C2_Aura_02bf1b48);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C3_Aura_02bf1b50);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Viola_C_End");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5a880(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00e5a894(undefined8 *param_1,float *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  if (lVar1 == 0) {
    fVar9 = 0.0;
    fVar6 = 0.0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 0x40);
    fVar9 = *(float *)(lVar5 + 0x38);
    fVar6 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
            (fVar9 + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
    if (DAT_031bcce0 <= fVar6) {
      fVar6 = DAT_031bcce0;
    }
    fVar8 = DAT_031bcc20;
    if (DAT_031bcc20 <= fVar6) {
      fVar8 = fVar6;
    }
    fVar7 = (float)FUN_00d59f54(lVar1,0,5,0x19,0);
    fVar6 = (float)FUN_00d59f54(lVar1,0,2,0x19,0);
    fVar6 = fVar6 + fVar7 * (fVar8 - fVar9);
    uVar2 = FUN_00d67b84(*param_1);
    uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Viola_Talent_TalentC_02bf23f0);
    uVar2 = FUN_00d67b84(*param_1);
    uVar4 = FUN_00d44008(uVar2,PTR_s_Buff_Viola_Talent_TalentA_02bf23c0);
    if ((uVar3 & 1) != 0) {
      fVar9 = (float)FUN_00d5a3d0(lVar1,DAT_0320ed80,0,9);
      fVar6 = fVar6 * fVar9;
    }
    if ((uVar4 & 1) == 0) {
      fVar9 = (float)FUN_00d59f54(lVar1,0,3,0x19,0);
    }
    else {
      fVar9 = (float)FUN_00d5a3d0(lVar1,DAT_0320ed70,0,9);
      fVar6 = fVar6 * fVar9;
      fVar9 = (float)FUN_00d59f54(lVar1,0,3,0x19,0);
      fVar8 = (float)FUN_00d5a3d0(lVar1,DAT_0320ed70,1,9);
      fVar9 = fVar9 + fVar8;
    }
  }
  *param_2 = fVar6;
  *param_3 = fVar9 * fVar6;
  return;
}




void FUN_00e5aa58(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_A_Impact");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Viola_A_Impact");
  lVar1 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar1 + 0x6b8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d657dc(param_1);
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e5a894);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e5ab2c(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e5ab88;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ab88(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e5ab9c(void)

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
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Cleanse_SPD_02bf1b88);
  local_48 = FUN_00e5ac68;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_SpeedBoost_02bf1b90);
  local_48 = FUN_00e5ac7c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ac68(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e5ac7c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00e5ac90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_ATK_CDR_02bf1b98);
  local_38 = FUN_00e5ad14;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ad14(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,8,0x19,0);
  return;
}




void FUN_00e5ad28(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C_DoT_02bf1ba0);
  local_48[0] = 0x40a00000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_MortalWound_02beb418);
  local_48[0] = 0x40a00000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5adec(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Drowsy_02bf1ba8);
  local_48 = FUN_00e5af28;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C_Slow_02bf1bb0);
  local_48 = FUN_00e5af3c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C4_Cooldown");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5af28(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,0xb,0x19,0);
  return;
}




void FUN_00e5af3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,10,0x19,0);
  return;
}




void FUN_00e5af50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d29c34(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,3);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C4_Drowsy");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0x3f800000);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e4ccccd);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Sleep_02bf1bb8);
  local_48 = FUN_00e5b0a0;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

