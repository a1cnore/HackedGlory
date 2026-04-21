// functions/00da8 — 44 functions
#include "libGameKindred.h"




void FUN_00da805c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00da8088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00da7fc0);
  return;
}




void FUN_00da808c(void)

{
  return;
}




void FUN_00da8090(void)

{
  return;
}




void FUN_00da8094(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Churnwalker__B_02beec40);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00da8114;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Churnwalker__B_02beec40,&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8114(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac900,4,9);
  return;
}




void FUN_00da8128(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Churnwalker__A_02beec38);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Churnwalker__A_02beec38);
  local_38 = FUN_00da81a8;
  local_30 = 3;
  FUN_00d98704(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da81a8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac908,0,9);
  return;
}




void FUN_00da81bc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Ylva__B");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da82b8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d46828(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Ylva__Talent_ShatteredF_02bef8f0);
  uVar2 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar2,PTR_s_Ability__Ylva__B_02bef8d0);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da82cc;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ylva__B_02bef8d0,&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da82b8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac910,1,9);
  return;
}




void FUN_00da82cc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac910,0,9);
  return;
}




void FUN_00da82e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Ylva__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da8420;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  uVar2 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar2,PTR_s_Ability__Ylva__C_02bef8d8);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_58 = FUN_00da8434;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ylva__C_02bef8d8,&local_58,1);
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_58 = FUN_00da8448;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Ylva__C_02bef8d8,&local_58);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Ylva__C_02bef8d8);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Ylva__C_02bef8d8);
  local_58 = FUN_00da8470;
  local_50 = 3;
  FUN_00d98704(uVar2,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8420(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac918,3,9);
  return;
}




void FUN_00da8434(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac918,2,9);
  return;
}




int FUN_00da8448(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_031ac918,0,9);
  return (int)fVar1;
}




void FUN_00da8470(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac918,4,9);
  return;
}




void FUN_00da8484(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Ylva__A");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da855c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar2,PTR_s_Ability__Ylva__A_02bef8c0);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da8570;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ylva__A_02bef8c0,&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da855c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac920,2,9);
  return;
}




void FUN_00da8570(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac920,1,9);
  return;
}




void FUN_00da8584(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kinetic__B_02bef950);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da8658;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Kinetic__B_02bef950,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Kinetic_A_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da866c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8658(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac928,1,9);
  return;
}




void FUN_00da866c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac928,0,9);
  return;
}




void FUN_00da8680(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kinetic__A_02bef948);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Kinetic__A_02bef948);
  local_48 = FUN_00da8754;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Kinetic_A_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da8768;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8754(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac930,1,9);
  return;
}




void FUN_00da8768(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac930,0,9);
  return;
}




void FUN_00da877c(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00da8848;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Kinetic_Perk_WeaponDamage");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00da885c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8848(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac938,0,9);
  return;
}




void FUN_00da885c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac938,1,9);
  return;
}




void FUN_00da8870(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00da8970;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,4,2,&local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00da8984;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Miho_Perk_Damage");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00da8998;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8970(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac940,1,9);
  return;
}




void FUN_00da8984(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac940,2,9);
  return;
}




void FUN_00da8998(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac940,0,9);
  return;
}




void FUN_00da89ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Miho_C_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da8a80;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Miho__C_02beff70);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da8a94;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Miho__C_02beff70,&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8a80(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac948,0,9);
  return;
}




void FUN_00da8a94(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac948,2,9);
  return;
}




void FUN_00da8aa8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Miho_A_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00da8b74;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  uVar2 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar2,PTR_s_Ability__Miho__A_02beff50);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_38 = (code *)CONCAT44(local_38._4_4_,2);
  local_30 = 1;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Miho__A_02beff50,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8b74(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac950,0,9);
  return;
}




void FUN_00da8b88(void)

{
  return;
}




void FUN_00da8b8c(void)

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
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d39584(lVar2 + 0x10);
  local_38 = FUN_00da8c14;
  local_30 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
  (**(code **)(*plVar3 + 0x18))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8c14(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac948,1,9);
  return;
}




byte * FUN_00da8c28(int param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = FUN_00e6a1b8();
  pbVar2 = &DAT_01e277f2;
  if ((param_1 != -1) && ((uVar1 & 1) != 0)) {
    uVar1 = FUN_00ced200(param_1);
    if ((uVar1 & 1) == 0) {
      pbVar2 = &DAT_01e277f2;
    }
    else {
      pbVar2 = (byte *)FUN_00cece44(param_1);
      if ((*pbVar2 & 1) == 0) {
        pbVar2 = pbVar2 + 1;
      }
      else {
        pbVar2 = *(byte **)(pbVar2 + 0x10);
      }
    }
  }
  return pbVar2;
}




void FUN_00da8ca0(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e6a1b8();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00da8c28(param_1);
    FUN_00e6a1cc(0,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x39,uVar2,0,"Begin Session");
    return;
  }
  return;
}




void FUN_00da8cf8(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e6a1b8();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00da8c28(param_1);
    FUN_00e6a1cc(1,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x47,uVar2,0,"End Session");
    return;
  }
  return;
}




void FUN_00da8d50(long param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00e6a1b8();
  if ((uVar5 & 1) != 0) {
    lVar10 = *(long *)(param_1 + 0x18);
    while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar10 = *(long *)(lVar10 + 0x20);
    }
    if (((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0) &&
       (uVar5 = FUN_00d54528(lVar10,param_2), (uVar5 & 1) == 0)) {
      FUN_00d55794(param_1,&local_68,0);
      if (param_3 == 0) {
        pcVar7 = "None";
      }
      else {
        uVar6 = FUN_00d6eb50();
        uVar4 = FUN_00d5baac(param_3);
        pcVar7 = (char *)FUN_00d6eb3c(uVar6,uVar4);
      }
      local_78 = CONCAT44(fStack_64,local_68);
      local_70 = local_60;
      if (param_4 == (undefined8 *)0x0) {
        if (param_3 != 0) {
          FUN_00d55794(param_3,&local_78,0);
        }
      }
      else {
        local_70 = *(float *)(param_4 + 1);
        local_78 = *param_4;
      }
      uVar6 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
      bVar3 = FUN_00d55870(param_1);
      pcVar1 = "Left";
      if (1 < bVar3) {
        pcVar1 = "Right";
      }
      uVar8 = FUN_00d6eb50();
      uVar4 = FUN_00d5baac(param_1);
      uVar8 = FUN_00d6eb3c(uVar8,uVar4);
      uVar9 = FUN_00d53920(lVar10,param_2);
      FUN_00e6a1cc((double)local_68,(double)fStack_64,(double)local_60,(double)(float)local_78,
                   (double)local_78._4_4_,(double)local_70,3,
                   "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                   ,0x76,uVar6,"UseAbility",
                   "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                   ,pcVar1,uVar8,uVar9,pcVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da8f38(long param_1,undefined4 param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00e6a1b8();
  if ((uVar5 & 1) == 0) goto LAB_00da9118;
  FUN_00d5bc5c(param_1);
  lVar6 = FUN_00d9e390();
  if ((lVar6 == 0) ||
     (((*(ushort *)(param_1 + 0x2f4) & 0x1005) == 0 &&
      ((*(uint *)(lVar6 + 0x2f4) & 0x20100001) == 0)))) goto LAB_00da9118;
  FUN_00d55794(param_1,&local_78,0);
  if ((*(byte *)(param_1 + 0x2f4) & 1) != 0) {
    FUN_00d5bc6c(param_1);
    lVar7 = FUN_00d9e390();
    if (lVar7 != 0) {
      lVar6 = lVar7;
    }
  }
  uVar8 = FUN_00d6eb50();
  uVar4 = FUN_00d5baac(lVar6);
  uVar8 = FUN_00d6eb3c(uVar8,uVar4);
  bVar3 = FUN_00d55870(lVar6);
  pcVar1 = "Left";
  if (1 < bVar3) {
    pcVar1 = "Right";
  }
  bVar3 = FUN_00d55870(param_1);
  if (bVar3 < 3) {
    pcVar12 = (&PTR_s_Neutral_0281fb50)[(char)bVar3];
  }
  else {
    pcVar12 = "Unknown";
  }
  if ((*(byte *)(lVar6 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0) {
      pcVar11 = "Executed";
      lVar7 = param_1;
      goto LAB_00da908c;
    }
    pcVar11 = "NPCkillNPC";
    pcVar9 = "NPC";
  }
  else {
    pcVar11 = "KillActor";
    lVar7 = lVar6;
LAB_00da908c:
    pcVar9 = (char *)FUN_00da8c28(*(undefined4 *)(lVar7 + 0x260));
  }
  uVar10 = FUN_00d6eb50();
  uVar4 = FUN_00d5baac(param_1);
  uVar10 = FUN_00d6eb3c(uVar10,uVar4);
  FUN_00e6a1cc((double)local_78,(double)fStack_74,(double)local_70,3,
               "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
               ,0xba,pcVar9,pcVar11,
               "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
               ,pcVar1,uVar8,uVar10,pcVar12,param_2,*(uint *)(lVar6 + 0x2f4) >> 1 & 1,
               *(uint *)(param_1 + 0x2f4) >> 1 & 1);
LAB_00da9118:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

