// functions/00e60 — 37 functions
#include "libGameKindred.h"




void FUN_00e60428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d44c78(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_00e60450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00d6a078(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  return;
}




void FUN_00e6047c(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined8 param_4,undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  *param_6 = param_3;
  return;
}




void FUN_00e604a8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  local_58 = FUN_00d51820(param_4);
  uStack_54 = param_2;
  local_50 = param_3;
  FUN_00d9e2c0(uVar2,&local_58,&local_60);
  *param_5 = local_60;
  *param_6 = local_5c;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6053c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x410) + 0x10);
  puVar1 = &DAT_01bc8f90;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0x260);
  }
  *param_4 = *puVar1;
  return;
}




void FUN_00e60564(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8(*param_1);
  *param_2 = uVar1;
  uVar1 = FUN_00d6a25c(*param_1);
  *param_3 = uVar1;
  uVar1 = FUN_00d6a078(*param_1);
  *param_4 = uVar1;
  uVar1 = FUN_00d6a0dc(*param_1);
  *param_5 = uVar1;
  return;
}




void FUN_00e605d0(void)

{
  long lVar1;
  undefined4 *in_x3;
  
  lVar1 = FUN_00d517cc();
  *in_x3 = *(undefined4 *)(lVar1 + 0x260);
  return;
}




bool FUN_00e605f8(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_00d55870(param_2);
  FUN_00d426b0(*param_1);
  cVar2 = FUN_00d55870();
  return cVar1 == cVar2;
}




uint FUN_00e60638(void)

{
  uint uVar1;
  
  uVar1 = FUN_00e605f8();
  return ~uVar1 & 1;
}




bool FUN_00e60654(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x260);
  iVar2 = FUN_00d67b84(*param_1);
  return iVar1 == iVar2;
}




void FUN_00e60680(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00d51820();
  *param_5 = uVar2;
  param_5[1] = param_2;
  param_5[2] = param_3;
  uVar1 = FUN_00d50ef8(param_4);
  FUN_00d557c4(uVar1,param_6,&DAT_03218f68);
  return;
}




float FUN_00e606cc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = FUN_00d9eb64();
  iVar1 = FUN_00d535a4(uVar2,2);
  if (iVar1 == 0) {
    fVar4 = (float)FUN_00d59f54(param_1,2,0,1,1);
  }
  else {
    fVar4 = (float)FUN_00d539d0(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x204) + 1.0) *
          (*(float *)(lVar3 + 0x9c) + *(float *)(lVar3 + 0x150) * (*(float *)(lVar3 + 0x2b8) + 1.0))
  ;
  if (DAT_0320e384 <= fVar5) {
    fVar5 = DAT_0320e384;
  }
  fVar6 = DAT_0320e2c4;
  if (DAT_0320e2c4 <= fVar5) {
    fVar6 = fVar5;
  }
  return fVar4 * (1.0 - fVar6);
}




void FUN_00e6077c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Adagio__B_02bee3e0);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e6085c;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Adagio__B_02bee3e0,&local_48,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e60870;
  local_40 = 3;
  FUN_00d97d24(uVar2,"Adagio_B_RecastDelay",&local_48,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_48 = FUN_00e60884;
  local_40 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Adagio__B_02bee3e0,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6085c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3d8,3,9);
  return;
}




void FUN_00e60870(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3d8,1,9);
  return;
}




int FUN_00e60884(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e3d8,0,9);
  return (int)fVar1;
}




void FUN_00e608ac(void)

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
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_38 = FUN_00e60924;
  local_30 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Adagio__A_02bee3d8,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60924(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3e0,1,9);
  return;
}




void FUN_00e60938(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00e60a00;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Adagio__C_02bee3e8,&local_48,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,PTR_s_Ability__Adagio__C_02bee3e8);
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e60a14;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60a00(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3e8,1,9);
  return;
}




void FUN_00e60a14(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3e8,0,9);
  return;
}




void FUN_00e60a28(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Alpha__C_02bee470);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e60aa8;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Alpha__C_02bee470,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60aa8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3f4,0,9);
  return;
}




void FUN_00e60abc(void)

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
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_38 = FUN_00e60b34;
  local_30 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Alpha__A_02bee458,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60b34(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3fc,2,9);
  return;
}




void FUN_00e60b48(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d66d28(*param_1);
  uVar3 = FUN_00d9ea34();
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
          (*(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
  if (DAT_0320e4d0 <= fVar5) {
    fVar5 = DAT_0320e4d0;
  }
  fVar6 = DAT_0320e410;
  if (DAT_0320e410 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = (float)FUN_00d5a3d0(lVar2,DAT_0320e3fc,0,9);
  uVar1 = FUN_00d6bb44(uVar3,DAT_031b8238);
  *param_2 = fVar5 * fVar6 * (float)uVar1;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e60c1c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d657dc();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_00e60b48);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e60c68(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00e60ce0;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,4,2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60ce0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e408,1,9);
  return;
}




void FUN_00e60cf4(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Ardan__B_02bee550);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e60dc8;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ardan__B_02bee550,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Ardan__B");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e60ddc;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60dc8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e588,2,9);
  return;
}




void FUN_00e60ddc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e588,1,9);
  return;
}




void FUN_00e60df0(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Ardan__A_02bee548);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e60ec4;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ardan__A_02bee548,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Ardan__A");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e60ed8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e60ec4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e590,2,9);
  return;
}




void FUN_00e60ed8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e590,1,9);
  return;
}




float FUN_00e60eec(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_0320e598,2,9);
  return -fVar2;
}




void FUN_00e60f1c(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Ardan__B_02bee550);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Ardan__B_02bee550);
  local_48 = FUN_00e60eec;
  local_40 = 4;
  FUN_00d98704(uVar2,&local_48);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e61020;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ardan__B_02bee550,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Ardan__B");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e61034;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

