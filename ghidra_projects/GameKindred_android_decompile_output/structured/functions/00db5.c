// functions/00db5 — 21 functions
#include "libGameKindred.h"




void FUN_00db5124(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00db5138(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,2,0x19,0);
  return;
}




void FUN_00db514c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5cc,1,9);
  return;
}




void FUN_00db5164(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5cc,0,9);
  return;
}




void FUN_00db517c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00db5190(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00db51a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09830(*(undefined4 *)(lVar4 + 0x188));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Celeste_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Celeste_Basic_Attack_2");
  FUN_00cf41bc(uVar3,"Sound_Celeste_Basic_Attack_3");
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x10,"Mouth");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db52dc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09830(*(undefined4 *)(lVar4 + 0x188));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Celeste_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Celeste_Basic_Attack_2");
  FUN_00cf41bc(uVar3,"Sound_Celeste_Basic_Attack_3");
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x10,"Mouth");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db5414(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09830(*(undefined4 *)(lVar3 + 0x188));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Celeste_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Celeste_Basic_Attack_2");
  FUN_00cf41bc(uVar2,"Sound_Celeste_Basic_Attack_3");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_Celeste_Crit_MF",0,"Mouth",0,1,0,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x11,"Mouth");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db558c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  *(undefined4 *)(param_6 + 1) = DAT_03218f90;
  *param_6 = _DAT_03218f88;
  return;
}




void FUN_00db55d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfa6cc(auStack_a8);
  FUN_00cfb05c(auStack_a8);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb1c4(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*CelesteStar*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00db558c);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4d354(auStack_98,0);
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5460(0x40e00000,uVar2,auStack_98,0,0,0,0);
  FUN_00cf9754(auStack_a8);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfacb4(auStack_a8);
  FUN_00cf50b0(0x3f000000);
  lVar4 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db576c(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3 + 1.5;
  return;
}




void FUN_00db579c(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3 + -1.5;
  return;
}




void FUN_00db57cc(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d51820();
  *param_5 = fVar1 + -1.5;
  param_5[1] = param_2;
  param_5[2] = param_3;
  return;
}




void FUN_00db57fc(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d51820();
  *param_5 = fVar1 + 1.5;
  param_5[1] = param_2;
  param_5[2] = param_3;
  return;
}




void FUN_00db582c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02",0,0,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Celeste_B_Cast",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cf9f7c(auStack_58);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  lVar6 = lVar3 + 0xb0;
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Celeste_Talent_CoreLeafClov_02bf1db8;
  plVar5 = (long *)FUN_00cfb1c4(lVar6);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*CelesteCore*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00db576c);
  plVar5 = (long *)FUN_00cfb1c4(lVar6);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*CelesteCore*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00db579c);
  plVar5 = (long *)FUN_00cfb1c4(lVar6);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*CelesteCore*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00db57cc);
  plVar5 = (long *)FUN_00cfb1c4(lVar6);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*CelesteCore*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00db57fc);
  plVar5 = (long *)FUN_00cfb1c4(lVar3 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*CelesteCore*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e60680);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  lVar6 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db5a6c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar9 = 0x811c9dc5;
  FUN_00cfb5b4(auStack_58);
  plVar2 = (long *)FUN_00cf9afc(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_GloballyVisible_02bebad8);
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_48);
  plVar2 = (long *)FUN_00cfac6c(auStack_58);
  (**(code **)(*plVar2 + 0x50))(plVar2,"solarStorm");
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cfa6cc(auStack_58);
  plVar2 = (long *)FUN_00cfaa2c(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00cfab04(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_Ult_Charging");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar3,0);
  plVar2 = (long *)FUN_00cfab04(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_Ult_Cast");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00cfac24(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Celeste_Ability_C_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d09830(*(undefined4 *)(lVar4 + 0x1a4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar3 = FUN_00cfb17c(auStack_58);
  uVar3 = FUN_00cfcad8(uVar3,0x12,"C_Lead");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(auStack_58);
  uVar3 = FUN_00cfcad8(uVar3,0x13,&DAT_01bd4dd4);
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(auStack_58);
  uVar3 = FUN_00cfcad8(uVar3,0x13,&DAT_01bd4dd9);
  FUN_00cfcba8(uVar3,1);
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00db5fb8(lVar4 + 0x10);
  if (PTR_s_Ability__Celeste__C_02bee7b8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    if (*PTR_s_Ability__Celeste__C_02bee7b8 != 0) {
      uVar6 = 0x811c9dc5;
      uVar7 = (uint)(byte)*PTR_s_Ability__Celeste__C_02bee7b8;
      pbVar8 = PTR_s_Ability__Celeste__C_02bee7b8;
      do {
        pbVar8 = pbVar8 + 1;
        uVar6 = (uVar6 ^ uVar7) * 0x1000193;
        uVar7 = (uint)*pbVar8;
      } while (*pbVar8 != 0);
    }
  }
  lVar4 = lVar4 + 0xb0;
  *(uint *)(lVar5 + 8) = uVar6;
  *(undefined4 *)(lVar5 + 0xc) = 2;
  uVar3 = FUN_00cfb17c(lVar4);
  uVar3 = FUN_00cfcad8(uVar3,0x13,&DAT_01bd4dde);
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar4);
  uVar3 = FUN_00cfcad8(uVar3,0x13,&DAT_01bd4de3);
  FUN_00cfcba8(uVar3,1);
  lVar4 = FUN_00cf9f7c(lVar4);
  lVar5 = FUN_00db5fb8(lVar4 + 0x10);
  if (PTR_s_Ability__Celeste__C_02bee7b8 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar6 = (uint)(byte)*PTR_s_Ability__Celeste__C_02bee7b8;
    pbVar8 = PTR_s_Ability__Celeste__C_02bee7b8;
    if (*PTR_s_Ability__Celeste__C_02bee7b8 != 0) {
      do {
        uVar7 = (uint)pbVar8[1];
        uVar9 = (uVar9 ^ uVar6) * 0x1000193;
        uVar6 = uVar7;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
  }
  *(uint *)(lVar5 + 8) = uVar9;
  *(undefined4 *)(lVar5 + 0xc) = 3;
  uVar3 = FUN_00cfb17c(lVar4 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,0x13,&DAT_01bd4de8);
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar4 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,0x13,&DAT_01bd4ded);
  FUN_00cfcba8(uVar3,1);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00db5df4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,0,0,"AttackToIdle");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db5e6c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Celeste_Star_Sm_Dissipate_Enemy",1,0,1,0,
               "Effect_Celeste_Star_Sm_Dissipate");
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db5f3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00db5fb8(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281fb78;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}

