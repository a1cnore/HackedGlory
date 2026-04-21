// functions/00e46 — 21 functions
#include "libGameKindred.h"




void FUN_00e46040(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 != 0) {
    plVar2 = (long *)(*param_1 + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00e46094(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 != 0) {
    plVar2 = (long *)(*param_1 + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00e460e8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 != 0) {
    plVar2 = (long *)(*param_1 + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00e4613c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_00e46180(param_1,lVar1 + -8);
    FUN_009a3c80(lVar1 + -8);
    lVar1 = *param_1;
  }
  return;
}




void FUN_00e46180(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00e461dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,0,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40000000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4628c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,1,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40400000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4633c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40000000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e463ec(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Buff_A");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_58 = FUN_00e4658c;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,1,&local_58);
  FUN_00d634b4(param_1);
  lVar2 = FUN_00d4a9f0();
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00e2149c(lVar2);
  FUN_00d9c7b0(uVar4,"__VAR1_INT__");
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Lorelai_Basic_Attack");
  lVar5 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar5 + 0x430));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_DelayedKill_02beb3e0);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3ecccccd);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  FUN_00e2d248(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4658c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,3);
  return;
}




void FUN_00e46598(void)

{
  return;
}




float FUN_00e4659c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d426b0(*param_1);
  fVar3 = (float)FUN_00d59f54(lVar1,0,4,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar4 = (float)FUN_00d59f54(lVar1,0,5,0x19,0);
  fVar3 = fVar3 + fVar5 * fVar4;
  fVar4 = (float)FUN_00d59f54(lVar1,0,6,0x19,0);
  uVar2 = FUN_00d44be0(lVar1,PTR_s_Buff_Lorelai_Talent_TalentB_02bf20e8);
  if ((uVar2 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec04,0,9);
    fVar3 = fVar3 + fVar5;
    fVar5 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec04,0,9);
    fVar4 = fVar4 + fVar5;
  }
  uVar2 = FUN_00d44be0(lVar1,PTR_s_Buff_Lorelai_EmpoweredNoBonus_02bf1260);
  if ((uVar2 & 1) != 0) {
    fVar5 = (float)FUN_00d59f54(lVar1,0,8,0x19,0);
    fVar3 = fVar3 * fVar5;
    fVar5 = (float)FUN_00d59f54(lVar1,0,8,0x19,0);
    fVar4 = fVar4 * fVar5;
  }
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  return fVar4;
}




void FUN_00e466c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Ring_A_2mr");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Lorelai_Ring_A_2mr_Ally");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40000000);
  local_40 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Lorelai_Ability_B_Start");
  lVar4 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar4 + 0x440));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2779c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Spawn");
  (**(code **)(*plVar3 + 0x18))(plVar3,0);
  uVar5 = FUN_00d31490(lVar2);
  FUN_00d9ca38(uVar5,FUN_00e4633c);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00e4659c;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"IMPACT_DAMAGE",0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Lorelai_FishFoodDamagePerSe_02bf1270);
  local_48 = FUN_00e468d4;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e468d4(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e468e0(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Pillar");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x40000000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xc0))(0,0x3f333333,0x3f800000);
  plVar3 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Lorelai_Ability_A_Piranha_Loop");
  lVar2 = FUN_00d09310();
  FUN_00d09fbc(*(undefined4 *)(lVar2 + 0x438));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3e4ccccd,uVar4,1);
  uVar4 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar4,FUN_00e4633c);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE_PER_SEC",0);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,1);
  uVar4 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar4,FUN_00e461dc);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  lVar2 = FUN_00d66d28(param_1);
  (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined4 *)(lVar2 + 0x260));
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_DelayedKill_02beb3e0);
  local_48[0] = 0x3e99999a;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e46b2c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(lVar2,1,3,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
  fVar4 = (float)FUN_00d59f54(lVar2,1,4,0x19,0);
  fVar3 = fVar3 + fVar5 * fVar4;
  fVar4 = (float)FUN_00d59f54(lVar2,1,5,0x19,0);
  if (fVar4 < fVar3) {
    fVar3 = (float)FUN_00d59f54(lVar2,1,5,0x19,0);
  }
  local_50 = 1;
  local_58[0] = fVar3;
  FUN_00d42c70(param_1,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e46c20(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00e46ca0;
  local_30 = 3;
  FUN_00d47690(uVar3,1,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e46ca0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e46cb4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  thunk_FUN_00d086f0(uVar2,0,1);
  FUN_00d67d04(param_1);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d31490(lVar3);
  FUN_00d9ca38(uVar2,FUN_00e4628c);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Lorelai_SplashdownSlow_02bf1278);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00e60638);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Lorelai_SplashdownSpeedBoos_02bf1280);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00e605f8);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  lVar3 = FUN_00d66d28(param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,*(undefined4 *)(lVar3 + 0x260));
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00e60654);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Lorelai_Ring_A_3mr");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58[0] = 0x40400000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,local_58);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_DelayedKill_02beb3e0);
  local_58[0] = 0x3e99999a;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e46f14(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  fVar2 = (float)FUN_00d59f54(lVar1,2,2,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)FUN_00d59f54(lVar1,2,3,0x19,0);
  *param_2 = fVar2 + fVar5 * fVar3;
  uVar4 = FUN_00d59f54(lVar1,2,4,0x19,0);
  *param_3 = uVar4;
  return;
}




void FUN_00e46fb4(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  fVar2 = (float)FUN_00d59f54(lVar1,2,7,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)FUN_00d59f54(lVar1,2,3,0x19,0);
  *param_2 = fVar2 + fVar5 * fVar3;
  uVar4 = FUN_00d59f54(lVar1,2,4,0x19,0);
  *param_3 = uVar4;
  return;
}

