// functions/00d89 — 22 functions
#include "libGameKindred.h"




void FUN_00d8906c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_00d80f68();
  *param_2 = "Effect_Idris_AA_EmpoweredChakram";
  param_2[4] = "Effect_Idris_AA_EmpoweredChakram_Impact";
  param_2[0xc] = "Sound_Idras_Ranged_Crit_Attack_Impact";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 900));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41600000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Idris_Talent_PathOfTheSeeke_02bedfb0);
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00d8611c(lVar2);
  if ((uVar3 & 1) == 0) {
    FUN_00d829e8(uVar4,FUN_00d88ef8,0,0,0);
  }
  else {
    FUN_00d829f8(uVar4,FUN_00d88f70);
  }
  uVar4 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar4,FUN_00d88fd8,1,1,0);
  FUN_00d84e9c(lVar2);
  return;
}




void FUN_00d89170(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = "Effect_Idris_A_MarkerShot";
  param_2[4] = "Effect_Idris_A_MarkerShot_Impact";
  FUN_00d80ec4(0x3dcccccd);
  FUN_00d80edc(0x3e99999a,param_1);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d891e8(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80ee4();
  uVar2 = FUN_00d59f54(uVar1,3,2,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00d89220(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Idris_B_Chakram";
  param_2[0x11] = "u_Crystal_Path";
  *(undefined4 *)(param_2 + 0x12) = 1;
  FUN_00d80f68();
  uVar2 = FUN_00dc677c();
  uVar7 = 0x3f800000;
  if ((uVar2 & 1) == 0) {
    uVar7 = 0;
  }
  *(undefined4 *)((long)param_2 + 0x94) = uVar7;
  FUN_00d80ec4(0x3ecccccd,param_1);
  lVar6 = param_1 + 0x120;
  FUN_00e5f128(lVar6);
  *(long *)(param_1 + 0x118) = lVar6;
  uVar3 = FUN_00e5f16c(0x41980000,0x41180000,lVar6,param_1);
  uVar3 = FUN_00e5f324(0x3f333333,uVar3,0);
  FUN_00e5f2cc(uVar3,PTR_s_Buff_Idris_DontCatch_02bf08c8);
  FUN_00e5f410();
  lVar6 = param_1 + 0x100;
  uVar3 = FUN_00d850b4(lVar6);
  lVar4 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar5 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage on Passthrough",3);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Idris_B_ChakramImpact_02bf0920);
  local_58 = CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  local_50 = 0;
  local_58 = 0x4000020100000000;
  uVar3 = FUN_00d850b4(lVar6);
  lVar4 = FUN_00d84078(uVar3,param_1,&local_58);
  uVar3 = FUN_00d89448(lVar4 + 0x10);
  FUN_00d83110(uVar3,1,FUN_00d891e8);
  FUN_00d8311c();
  lVar6 = FUN_00d85f00(lVar6);
  FUN_00d84e9c(lVar6 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d893e0(long param_1,long param_2)

{
  long lVar1;
  
  *(char **)(param_2 + 0x20) = "Effect_Idris_C_MarkerShot_Impact";
  *(char **)(param_2 + 0x30) = "Effect_Idris_C_MarkerShot";
  FUN_00d80ec4(0x3dcccccd);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d89448(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda614();
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




void FUN_00d89498(long param_1,undefined8 *param_2)

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
  *param_2 = "Effect_Fountain_Proj";
  param_2[4] = "Effect_MulledWine_buff";
  uVar4 = FUN_00d085c4(PTR_s__Item_FountainOfRenewal__02beb098,3,1);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  uVar4 = FUN_00e5e560(uVar4,lVar2,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar4,param_1);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Item_FountainOfRenewal_02beb7c0);
  local_48 = FUN_00cf08cc;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d895b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_Flare__02beb088);
  param_2[1] = "Effect_Flare_Proj_E";
  *param_2 = "Effect_Flare_Proj_A";
  puVar3 = (undefined8 *)FUN_00d81388(param_1);
  fStack_54 = (float)((ulong)*puVar3 >> 0x20);
  local_50 = *(undefined4 *)(puVar3 + 1);
  _local_58 = CONCAT44(fStack_54 + 4.5,(int)*puVar3);
  FUN_00d81390(param_1,&local_58);
  uVar2 = FUN_00d08524(uVar2,1,1);
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar2 = FUN_00e5e560(uVar2,lVar4,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40d00000,uVar2,param_1);
  lVar4 = FUN_00d85f00(param_1 + 0x100);
  uVar2 = FUN_00d89c00(lVar4 + 0x10);
  FUN_00d836e8(uVar2,"*FlareGun*",0);
  FUN_00d83764(0x3d23d70a);
  FUN_00d84e9c(lVar4 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d896f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_FlareLoader__02beb090);
  param_2[1] = "Effect_Flare_Proj_E";
  *param_2 = "Effect_Flare_Proj_A";
  puVar3 = (undefined8 *)FUN_00d81388(param_1);
  fStack_54 = (float)((ulong)*puVar3 >> 0x20);
  local_50 = *(undefined4 *)(puVar3 + 1);
  _local_58 = CONCAT44(fStack_54 + 4.5,(int)*puVar3);
  FUN_00d81390(param_1,&local_58);
  uVar2 = FUN_00d08524(uVar2,1,1);
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar2 = FUN_00e5e560(uVar2,lVar4,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40d00000,uVar2,param_1);
  lVar4 = FUN_00d85f00(param_1 + 0x100);
  uVar2 = FUN_00d89c00(lVar4 + 0x10);
  FUN_00d836e8(uVar2,"*FlareLoader*",0);
  FUN_00d83764(0x3d23d70a);
  FUN_00d84e9c(lVar4 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d89834(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  param_2[1] = "Effect_Item_EMP";
  *param_2 = "Effect_Item_EMP";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41400000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Item_EMP_Countdown_02beb7d8);
  local_48 = FUN_00d89918;
  local_40 = 2;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_00d8633c);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d89918(void)

{
  FUN_00d085c4(PTR_s__Item_NullwaveGauntlet__02beb0d0,1,1);
  return;
}




void FUN_00d89930(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Protector_Proj";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xffff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x99;
  FUN_00d80ec4(0x3e19999a);
  lVar5 = param_1 + 0x120;
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  uVar4 = FUN_00e5e560(0x3e4ccccd,lVar5,param_1);
  iVar2 = rand();
  iVar3 = rand();
  FUN_00e5e92c((float)iVar2 * 4.656613e-10 * 0.20000002 + 0.4,0,(float)iVar3 * 4.656613e-10 + 3.5,
               uVar4,param_1);
  lVar5 = FUN_00d84dfc(param_1 + 0x100);
  plVar6 = (long *)FUN_00d84eec(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,PTR_s_Buff_Item_ProtectorContract_Barr_02beb970);
  local_58 = FUN_00d89a80;
  local_50 = 2;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_58);
  FUN_00d84e9c(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d89a80(void)

{
  FUN_00d085c4(PTR_s__Item_ProtectorContract__02beb1c0,1,1);
  return;
}




void FUN_00d89a98(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_RooksDecree_Projectile";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xbe6e;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x96;
  FUN_00d80ec4(0x3e19999a);
  lVar5 = param_1 + 0x120;
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  uVar4 = FUN_00e5e560(0x3e4ccccd,lVar5,param_1);
  iVar2 = rand();
  iVar3 = rand();
  FUN_00e5e92c((float)iVar2 * 4.656613e-10 * 0.20000002 + 0.4,0,(float)iVar3 * 4.656613e-10 + 3.5,
               uVar4,param_1);
  lVar5 = FUN_00d84dfc(param_1 + 0x100);
  plVar6 = (long *)FUN_00d84eec(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,PTR_s_Buff_Item_RooksDecree_Barrier_02beb6f0);
  local_58 = FUN_00d89be8;
  local_50 = 2;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_58);
  FUN_00d84e9c(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d89be8(void)

{
  FUN_00d085c4(PTR_s__Item_RooksDecree__02beb100,3,1);
  return;
}




void FUN_00d89c00(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda8b4();
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




void FUN_00d89c50(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar1 = FUN_00d80f68();
  *param_2 = "Effect_Kestrel_AA";
  param_2[4] = "Effect_Kestrel_AA_Hit";
  param_2[0xd] = "Sound_Kestrel_Attack_Impact_2";
  param_2[0xc] = "Sound_Kestrel_Attack_Impact_1";
  param_2[0xf] = "Sound_Kestrel_Attack_Impact_4";
  param_2[0xe] = "Sound_Kestrel_Attack_Impact_3";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d09a7c(*(undefined4 *)(lVar2 + 600));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  lVar2 = param_1 + 0x120;
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0x128);
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8((fVar5 + 1.0) * 27.0,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  uVar3 = FUN_00d8611c(lVar2 + 0x10);
  FUN_00d82a00(uVar3,param_3);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d89d44(undefined8 param_1,undefined8 param_2)

{
  FUN_00d89c50(param_1,param_2,0);
  return;
}




void FUN_00d89d4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d89c50(param_1,param_2,2);
  return;
}




float FUN_00d89d54(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d80f68(*param_1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031aa7c0 <= fVar3) {
    fVar3 = DAT_031aa7c0;
  }
  fVar4 = DAT_031aa700;
  if (DAT_031aa700 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d59f54(lVar1,0,7,0x19,0);
  return fVar3 * fVar4;
}




void FUN_00d89de0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80f68(*param_1);
  uVar2 = FUN_00d59f54(uVar1,0,8,0x19,0);
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  return;
}




void FUN_00d89e1c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Kestrel_HalcyonArrow";
  param_2[4] = "Effect_Kestrel_HalcyonArrowImpact";
  lVar3 = FUN_00d09310();
  uVar12 = FUN_00d09a7c(*(undefined4 *)(lVar3 + 0x260));
  *(undefined4 *)(param_2 + 0x15) = uVar12;
  FUN_00d80ec4(0x3f19999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar4 = FUN_00e5fe74(lVar3);
  FUN_00e5fe1c(0x41f00000,uVar4,param_1,0);
  uVar4 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar4,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  local_68 = FUN_00d89d54;
  local_60 = 4;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_68,0,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,FUN_00d89de0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,1);
  (**(code **)(*plVar5 + 0x68))(plVar5,"Ability__Kestrel__A");
  plVar5 = (long *)FUN_00d84e4c(lVar3);
  uVar4 = FUN_00d59f54(uVar2,0,9,0x19,0);
  uVar13 = FUN_00d59f54(uVar2,0,10,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar4,0x3f800000,uVar13,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"SplashDamage",0);
  plVar5 = (long *)FUN_00d84eec(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                             (plVar5,PTR_s_Buff_Kestrel_PlayHalcyonArrowImp_02bf0a08);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3dcccccd);
  local_60 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  lVar6 = FUN_00d86924(lVar3);
  lVar7 = FUN_00d8a200(lVar6 + 0x10);
  if (PTR_s_Ability__Kestrel__B_02beef90 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar10 = (uint)(byte)*PTR_s_Ability__Kestrel__B_02beef90;
    uVar8 = 0x811c9dc5;
    pbVar9 = PTR_s_Ability__Kestrel__B_02beef90;
    if (*PTR_s_Ability__Kestrel__B_02beef90 != 0) {
      do {
        uVar11 = (uint)pbVar9[1];
        uVar8 = (uVar8 ^ uVar10) * 0x1000193;
        uVar10 = uVar11;
        pbVar9 = pbVar9 + 1;
      } while (uVar11 != 0);
    }
  }
  *(uint *)(lVar7 + 8) = uVar8;
  *(undefined4 *)(lVar7 + 0xc) = 1;
  plVar5 = (long *)FUN_00d8a19c(lVar6 + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,PTR_s_Ability__Kestrel__B_02beef90);
  local_68 = FUN_00d8a1ec;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_68);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  plVar5 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  uVar4 = FUN_00d59f54(uVar2,0,9,0x19,0);
  uVar2 = FUN_00d59f54(uVar2,0,10,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar4,0x3f800000,uVar2,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"SplashDamage",0);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

