// functions/00d45 — 26 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d45000(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *(undefined4 *)(param_2 + 1) = DAT_03218f90;
  *param_2 = _DAT_03218f88;
  *param_3 = 0;
  *param_5 = 0x40490fdb;
  *param_4 = 0x3fc00000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d45038(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *(undefined4 *)(param_2 + 1) = DAT_03218f90;
  *param_2 = _DAT_03218f88;
  *param_3 = 0;
  *param_5 = 0x4096cbe4;
  *param_4 = 0x3fc00000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d45080(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *(undefined4 *)(param_2 + 1) = DAT_03218f90;
  *param_2 = _DAT_03218f88;
  *param_3 = 0;
  *param_5 = 0x3fc90fdb;
  *param_4 = 0x3fc00000;
  return;
}




void FUN_00d450c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_02bebb80);
  local_58._0_4_ = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f800000,uVar4,0);
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b294();
  FUN_00d9b71c(0);
  FUN_00d9b5b0(uVar4);
  uVar5 = FUN_00d45304();
  FUN_00d9ba14(uVar5,"poop\n");
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d45354();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"*HeroPLUSmokeCloud*",1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d2a464();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_58 = (code *)CONCAT44(local_58._4_4_,0x420c0000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_58);
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d2945c();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_SmokeCloudSput");
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d2887c();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_EngineStacks_02bebb88);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,0);
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b610(uVar4,PTR_s_Buff_HeroPLU_EngineRecovery_02bebb90);
  FUN_00d9b5b8();
  uVar4 = FUN_00d2d01c();
  FUN_00d9b610(uVar4,PTR_s_Buff_HeroPLU_EngineOverheat_02bebb98);
  FUN_00d9b5b8();
  plVar3 = (long *)FUN_00d2a464();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_58 = FUN_00d453a4;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_58);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x42c80000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x2b,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d45304(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1cc0();
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




void FUN_00d45354(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1750();
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




void FUN_00d453a4(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00d453b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_00d44fd8);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_00d45000);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_00d45038);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_00d45080);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  uVar3 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3cf5c28f,uVar3,0);
  uVar3 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar3,FUN_00caa3f8);
  return;
}




void FUN_00d45558(void)

{
  return;
}




float FUN_00d4555c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float __x;
  float fVar4;
  
  uVar2 = FUN_00d66d28(*param_1);
  iVar1 = FUN_00d66cf4(*param_1);
  fVar3 = (float)FUN_00d59f54(uVar2,0,3,0x19,0);
  __x = (float)FUN_00d59f54(uVar2,0,4,0x19,0);
  fVar4 = powf(__x,(float)(iVar1 + 1));
  return ((fVar3 * (1.0 - fVar4)) / (1.0 - __x)) / (float)(iVar1 + 1);
}




void FUN_00d45600(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar1 = PTR_s_EngineRevLastDuration_02bebba8;
  lVar4 = *param_1;
  uVar2 = FUN_00e6a474(PTR_s_EngineRevLastDuration_02bebba8);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x18))(lVar4 + 0x168,uVar2);
  uVar2 = *puVar3;
  FUN_00d67d3c(uVar2,lVar4);
  FUN_00d67d04(uVar2,lVar4);
  return;
}




void FUN_00d45680(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d4555c();
  *param_2 = uVar1;
  return;
}




void FUN_00d456a4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = FUN_00d66cf4(uVar2);
  if (1 < uVar1) {
    FUN_00d45600(param_1);
    FUN_00d671f8(uVar2,1);
    return;
  }
  return;
}




float FUN_00d456f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float __x;
  float fVar3;
  
  iVar1 = FUN_00d66cf4(*param_1);
  fVar2 = (float)FUN_00d59f54(param_2,0,5,0x19,0);
  __x = (float)FUN_00d59f54(param_2,0,6,0x19,0);
  fVar3 = powf(__x,(float)iVar1);
  return (fVar2 * (1.0 - fVar3)) / (1.0 - __x);
}




void FUN_00d45774(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  puVar2 = PTR_s_EngineRevLastDuration_02bebba8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6a474(PTR_s_EngineRevLastDuration_02bebba8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar3);
  uVar3 = FUN_00e6a474(puVar2);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar3);
  *puVar4 = 0;
  lVar5 = FUN_00d64080(param_1);
  lVar5 = lVar5 + 0x10;
  uVar6 = FUN_00d314f8(lVar5);
  lVar7 = FUN_00d98a14(uVar6,PTR_s_EngineRevLastDuration_02bebba8);
  *(undefined4 *)(lVar7 + 0x18) = 1;
  *(code **)(lVar7 + 0x30) = FUN_00d45680;
  *(undefined1 *)(lVar7 + 0x1c) = 1;
  uVar6 = FUN_00d39a54(lVar5);
  FUN_00d3e604(uVar6,FUN_00d45600);
  uVar6 = FUN_00d2d01c(lVar5);
  uVar8 = FUN_00d66d28(param_1);
  fVar10 = (float)FUN_00d59f54(uVar8,0,2,0x19,0);
  FUN_00d9b6cc(100.0 - fVar10,uVar6,3,1);
  FUN_00d9b5b8();
  uVar6 = FUN_00d2d01c();
  uVar6 = FUN_00d9b650(uVar6,PTR_s_Ability__HeroPLU__C_02bef740);
  FUN_00d9b5b0();
  uVar8 = FUN_00d2d01c();
  FUN_00d9b668(uVar8,PTR_s_Ability__HeroPLU__A_02bef720);
  FUN_00d9b5b0();
  plVar9 = (long *)FUN_00d2a160();
  (**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_HeroPLU_A_Empowered_02bebbb0);
  FUN_00d9b5b0(uVar6);
  plVar9 = (long *)FUN_00d2887c();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_HeroPLU_EngineOverheat_02bebb98);
  local_58 = FUN_00d45a58;
  local_50 = 3;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_58);
  FUN_00d9b5b8(uVar6);
  plVar9 = (long *)FUN_00d2cc5c();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_HeroPLU_Overheat_NoUlt");
  (**(code **)(*plVar9 + 0x28))(0x3f800000);
  FUN_00d9b5b8(uVar6);
  plVar9 = (long *)FUN_00d2a160();
  (**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_02bebb80);
  FUN_00d9b5b8(uVar6);
  plVar9 = (long *)FUN_00d2887c();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_HeroPLU_EngineRecovery_02bebb90);
  local_58 = FUN_00d45a64;
  local_50 = 3;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_58);
  lVar5 = FUN_00d6592c(param_1);
  uVar6 = FUN_00d29f44(lVar5 + 0x10);
  local_58 = FUN_00d456f0;
  local_50 = 5;
  FUN_00d47690(uVar6,1,&local_58);
  FUN_00d476f4();
  lVar5 = FUN_00d6624c(param_1);
  uVar6 = FUN_00d39a54(lVar5 + 0x10);
  FUN_00d3e604(uVar6,FUN_00d456a4);
  lVar5 = FUN_00d65010(param_1);
  plVar9 = (long *)FUN_00d2887c(lVar5 + 0x10);
  (**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_HeroPLU_A_Empowered_02bebbb0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d45a58(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00d45a64(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00d45a70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bc48(uVar2,4);
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  FUN_00d9b294();
  FUN_00d9b71c(0x3e99999a);
  FUN_00d9b5b0(uVar2);
  plVar4 = (long *)FUN_00d2b728();
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d45b28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d45b94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar1,param_2,0);
  return;
}




void FUN_00d45bc0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d66d28(*param_1);
  *param_2 = uVar3;
  lVar4 = FUN_00d66d28(*param_1);
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  thunk_FUN_00d9ff34(local_40,PTR_s_Buff_HeroPLU_EngineStacks_02bebb88);
  uVar2 = FUN_00d6b630(lVar4,local_40[0],0xffffffff);
  *param_3 = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d45c7c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d42ce8(param_1,0x10,"Effect_ItemSilence","OverHead");
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d467d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_58._0_4_ = 0x42c80000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00d45bc0);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_HeroPLU_Overheat");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_OVERHEATING");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar4 = FUN_00d2d01c(lVar2);
  FUN_00d9b668(uVar4,PTR_s_Ability__HeroPLU__A_02bef720);
  FUN_00d9b5b0();
  plVar3 = (long *)FUN_00d2ccac();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__HeroPLU__OverheatEmpowe_02bef718);
  uVar4 = FUN_00d2d01c(lVar2);
  FUN_00d9b668(uVar4,PTR_s_Ability__HeroPLU__B_02bef728);
  FUN_00d9b744();
  FUN_00d9b5b0();
  uVar4 = FUN_00d45f10();
  FUN_00d9886c(uVar4,PTR_s_Ability__HeroPLU__B_02bef728,PTR_s_Ability__HeroPLU__TossEngine_02bef748)
  ;
  uVar4 = FUN_00d45f10(lVar2);
  FUN_00d9886c(uVar4,PTR_s_Ability__HeroPLU__C_02bef740,PTR_s_Ability__HeroPLU__Kaboom_02bef738);
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_HeroPLU_EngineStacks_02bebb88);
  local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_EngineRecovery_02bebb90);
  local_58 = FUN_00d45a64;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_02bebb80);
  lVar2 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d46828(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__HeroPLU__Kaboom_02bef738);
  (**(code **)(*plVar3 + 0x28))(plVar3,FUN_00d45b94);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d45f10(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1aec();
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




void FUN_00d45f60(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d45f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Slow_02beb440);
  return;
}




float FUN_00d45f90(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d66d28(*param_1);
  fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x314);
  fVar2 = (float)FUN_00d67b34(*param_1);
  fVar3 = (float)FUN_00d67b3c(*param_1);
  return (fVar2 * 100.0) / fVar3 - fVar4;
}




void FUN_00d45fe8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b68c(uVar3,PTR_s_Ability__HeroPLU__C_02bef740,2,3);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2887c();
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_HeroPLU_RecoveryDebrisSwap_02bebbd0);
  uVar3 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar3,0);
  plVar4 = (long *)FUN_00d2a464(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))();
  local_38 = FUN_00d45f90;
  local_30 = 4;
  (**(code **)(*plVar4 + 0x10))(plVar4,3,&local_38);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_02bebb80);
  local_38 = (code *)CONCAT44(local_38._4_4_,0xbf800000);
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  plVar4 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_HeroPLU_RecoveryFinished");
  (**(code **)(*plVar4 + 0x28))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

